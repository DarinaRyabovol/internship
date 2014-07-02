
#pragma once


namespace internship {

	ref class myObject;
	ref class Agent;
	ref class Painter;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Server : public System::Windows::Forms::Form
	{
	public:
		Server(void);

	protected:
		~Server();
	private: System::Windows::Forms::Label^  labelObj;
	protected: 
	private: System::Windows::Forms::Label^  labelAgent;
	private: System::Windows::Forms::Label^  labelKolAgent;
	 public: System::Windows::Forms::PictureBox^  pictureBoxObj;


	private: System::Windows::Forms::CheckedListBox^  checkedListBoxObj;
	private: System::Windows::Forms::Button^  buttonOk;

	public:

		System::Collections::ArrayList^ listOfObjects;
	private:
		newAgent^ newagent1;
		int *col;
		int countOfAgents;
		System::Collections::ArrayList^ listOfAgetns;
		Painter^ newPainter;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelObj = (gcnew System::Windows::Forms::Label());
			this->labelAgent = (gcnew System::Windows::Forms::Label());
			this->labelKolAgent = (gcnew System::Windows::Forms::Label());
			this->pictureBoxObj = (gcnew System::Windows::Forms::PictureBox());
			this->checkedListBoxObj = (gcnew System::Windows::Forms::CheckedListBox());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxObj))->BeginInit();
			this->SuspendLayout();
			// 
			// labelObj
			// 
			this->labelObj->AutoSize = true;
			this->labelObj->Location = System::Drawing::Point(37, 25);
			this->labelObj->Name = L"labelObj";
			this->labelObj->Size = System::Drawing::Size(91, 13);
			this->labelObj->TabIndex = 0;
			this->labelObj->Text = L"Выбор объектов";
			// 
			// labelAgent
			// 
			this->labelAgent->AutoSize = true;
			this->labelAgent->Location = System::Drawing::Point(248, 25);
			this->labelAgent->Name = L"labelAgent";
			this->labelAgent->Size = System::Drawing::Size(167, 13);
			this->labelAgent->TabIndex = 1;
			this->labelAgent->Text = L"Количество созданных агентов";
			// 
			// labelKolAgent
			// 
			this->labelKolAgent->AutoSize = true;
			this->labelKolAgent->Location = System::Drawing::Point(431, 25);
			this->labelKolAgent->Name = L"labelKolAgent";
			this->labelKolAgent->Size = System::Drawing::Size(13, 13);
			this->labelKolAgent->TabIndex = 2;
			this->labelKolAgent->Text = L"0";
			// 
			// pictureBoxObj
			// 
			this->pictureBoxObj->Location = System::Drawing::Point(12, 81);
			this->pictureBoxObj->Name = L"pictureBoxObj";
			this->pictureBoxObj->Size = System::Drawing::Size(454, 169);
			this->pictureBoxObj->TabIndex = 4;
			this->pictureBoxObj->TabStop = false;
			this->pictureBoxObj->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Server::pictureBoxObj_Paint);
			// 
			// checkedListBoxObj
			// 
			this->checkedListBoxObj->FormattingEnabled = true;
			this->checkedListBoxObj->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1", L"2", L"3", L"4"});
			this->checkedListBoxObj->Location = System::Drawing::Point(134, 4);
			this->checkedListBoxObj->Name = L"checkedListBoxObj";
			this->checkedListBoxObj->Size = System::Drawing::Size(92, 34);
			this->checkedListBoxObj->TabIndex = 5;
			// 
			// buttonOk
			// 
			this->buttonOk->Location = System::Drawing::Point(384, 49);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(59, 18);
			this->buttonOk->TabIndex = 6;
			this->buttonOk->Text = L"Ok";
			this->buttonOk->UseVisualStyleBackColor = true;
			this->buttonOk->Click += gcnew System::EventHandler(this, &Server::buttonOk_Click);
			// 
			// Server
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 262);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->checkedListBoxObj);
			this->Controls->Add(this->pictureBoxObj);
			this->Controls->Add(this->labelKolAgent);
			this->Controls->Add(this->labelAgent);
			this->Controls->Add(this->labelObj);
			this->Name = L"Server";
			this->Text = L"Server";
			this->Load += gcnew System::EventHandler(this, &Server::Server_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxObj))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma endregion
	public: void toCountLabel();
	public: void getNewAgent(Agent^ newAg);
	private: void UpdateAllAgents();
	private: System::Void Server_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void buttonOk_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void pictureBoxObj_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
};
}
