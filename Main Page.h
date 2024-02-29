#pragma once
#include "LoginForm.h"
namespace BankProjectGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Panel^ mainPanel;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// mainPanel
			// 
			this->mainPanel->Location = System::Drawing::Point(0, -1);
			this->mainPanel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(979, 569);
			this->mainPanel->TabIndex = 1;
			this->mainPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainPage::panel1_Paint);
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 569);
			this->Controls->Add(this->mainPanel);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MainPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		LoginForm^ Lform = gcnew LoginForm;
		Lform->TopLevel = false;
		// Lform->Dock = DockStyle->Fill;
		mainPanel->Controls->Add(Lform);
		mainPanel->Tag = Lform;
		Lform->Show();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}
