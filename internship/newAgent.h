#pragma once
namespace internship {

	ref class Server;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for newAgent
	/// </summary>
	public ref class newAgent : public System::Windows::Forms::Form
	{
	public:
		newAgent(void);
		newAgent(Server^ myParent);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~newAgent();
	public: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::TextBox^  textBoxName;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Server^ myParent;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(23, 66);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(241, 70);
			this->buttonAdd->TabIndex = 0;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &newAgent::buttonAdd_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(24, 15);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(239, 20);
			this->textBoxName->TabIndex = 1;
			// 
			// newAgent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 148);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->buttonAdd);
			this->Name = L"newAgent";
			this->Text = L"newAgent";
			this->Load += gcnew System::EventHandler(this, &newAgent::newAgent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void newAgent_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
