#pragma once
#include "Deposit.h"
#include "withdrawForm.h"
#include "TransferFunds.h"
#include "CheckBalance.h"

namespace BankManagementSystemv1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BankingMenu
	/// </summary>
	public ref class BankingMenu : public System::Windows::Forms::Form
	{
	public:
		BankingMenu(void)
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
		~BankingMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BankingMenu::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Helvetica", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(459, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(642, 57);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Welcome To Banking Menu";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(144, 593);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(299, 87);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Check Your Balance";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BankingMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(144, 474);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(299, 87);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Transfer Funds";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BankingMenu::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(144, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(299, 87);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Withdraw Amount";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BankingMenu::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(144, 252);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(299, 87);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Deposit Amout";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BankingMenu::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Helvetica", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label1->Location = System::Drawing::Point(461, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 45);
			this->label1->TabIndex = 10;
			this->label1->Text = L"\"Your Account is Safe With us\"";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(978, 593);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(299, 87);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Exit ";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BankingMenu::button5_Click);
			// 
			// BankingMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1924, 1061);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"BankingMenu";
			this->Text = L"BankingMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//	Banking Menu Deposit
		//this->Hide();
		Deposit^ form = gcnew Deposit;
		form->Show();

	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//	Banking Menu Withdraw

	//this->Hide();
	withdrawForm^form = gcnew withdrawForm;
	form->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Banking Menu TransferFunds

	//this->Hide();
	TransferFunds^form = gcnew TransferFunds;
	form->Show();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Banking Menu CheckBalance

	//this->Hide();
	CheckBalance^form = gcnew CheckBalance;
	form->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
