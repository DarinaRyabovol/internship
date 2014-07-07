#pragma once
namespace internship {

	ref class CollectionOfAgetns;
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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~newAgent();
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::TextBox^  textBoxName;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Server^ currentServ;
		CollectionOfAgetns^ myAgents;
	private: System::Windows::Forms::GroupBox^  groupBoxAgent;
	private: System::Windows::Forms::Button^  buttonCreate;
	private: System::Windows::Forms::Button^  buttonChange;
	private: System::Windows::Forms::GroupBox^  groupBoxServer;
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
			this->groupBoxAgent = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->buttonChange = (gcnew System::Windows::Forms::Button());
			this->groupBoxServer = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxAgent->SuspendLayout();
			this->groupBoxServer->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(11, 56);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(241, 40);
			this->buttonAdd->TabIndex = 0;
			this->buttonAdd->Text = L"Добавить";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &newAgent::buttonAdd_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(13, 30);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(239, 20);
			this->textBoxName->TabIndex = 1;
			// 
			// groupBoxAgent
			// 
			this->groupBoxAgent->Controls->Add(this->textBoxName);
			this->groupBoxAgent->Controls->Add(this->buttonAdd);
			this->groupBoxAgent->Location = System::Drawing::Point(11, 7);
			this->groupBoxAgent->Name = L"groupBoxAgent";
			this->groupBoxAgent->Size = System::Drawing::Size(278, 102);
			this->groupBoxAgent->TabIndex = 2;
			this->groupBoxAgent->TabStop = false;
			this->groupBoxAgent->Text = L"Добавить нового агента";
			// 
			// buttonCreate
			// 
			this->buttonCreate->Location = System::Drawing::Point(34, 30);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(162, 37);
			this->buttonCreate->TabIndex = 3;
			this->buttonCreate->Text = L"Создать";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &newAgent::buttonCreate_Click);
			// 
			// buttonChange
			// 
			this->buttonChange->Location = System::Drawing::Point(202, 30);
			this->buttonChange->Name = L"buttonChange";
			this->buttonChange->Size = System::Drawing::Size(162, 37);
			this->buttonChange->TabIndex = 4;
			this->buttonChange->Text = L"Сменить";
			this->buttonChange->UseVisualStyleBackColor = true;
			this->buttonChange->Click += gcnew System::EventHandler(this, &newAgent::buttonChange_Click);
			// 
			// groupBoxServer
			// 
			this->groupBoxServer->Controls->Add(this->buttonChange);
			this->groupBoxServer->Controls->Add(this->buttonCreate);
			this->groupBoxServer->Location = System::Drawing::Point(11, 131);
			this->groupBoxServer->Name = L"groupBoxServer";
			this->groupBoxServer->Size = System::Drawing::Size(402, 89);
			this->groupBoxServer->TabIndex = 5;
			this->groupBoxServer->TabStop = false;
			this->groupBoxServer->Text = L"Сервер";
			// 
			// newAgent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 237);
			this->Controls->Add(this->groupBoxServer);
			this->Controls->Add(this->groupBoxAgent);
			this->Name = L"newAgent";
			this->Text = L"newAgent";
			this->Load += gcnew System::EventHandler(this, &newAgent::newAgent_Load);
			this->groupBoxAgent->ResumeLayout(false);
			this->groupBoxAgent->PerformLayout();
			this->groupBoxServer->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma endregion
	private: System::Void newAgent_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void buttonCreate_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void buttonChange_Click(System::Object^  sender, System::EventArgs^  e);
};
}
