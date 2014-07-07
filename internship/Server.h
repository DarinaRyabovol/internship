
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

	ref struct AgentWithCollection
	{
		Agent^ currentAgent;
		System::Collections::ArrayList^ collection;
		AgentWithCollection(Agent^ a);
		~AgentWithCollection();
	};

	public ref class Server : public System::Windows::Forms::Form
	{
	public:
		Server(void);

	protected:
		~Server();

	protected: 
	private: System::Windows::Forms::Label^  labelAgent;
	private: System::Windows::Forms::Label^  labelKolAgent;
	 public: static System::Windows::Forms::PictureBox^  pictureBoxObj;



	private: System::Windows::Forms::Button^  buttonOk;

	public:

	private:
		static System::Timers::Timer^ myTimer;
		static System::Timers::Timer^ myTimerObj;
		static array<Painter^>^ arrPainter;
		static array<myObject^>^ arrAllObjects;
		static System::Random^ r;
		static System::Collections::ArrayList^ Agents;
		int countOfAgents;
		static Painter^ newPainter;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelAgent = (gcnew System::Windows::Forms::Label());
			this->labelKolAgent = (gcnew System::Windows::Forms::Label());
			this->pictureBoxObj = (gcnew System::Windows::Forms::PictureBox());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxObj))->BeginInit();
			this->SuspendLayout();
			// 
			// labelAgent
			// 
			this->labelAgent->AutoSize = true;
			this->labelAgent->Location = System::Drawing::Point(9, 25);
			this->labelAgent->Name = L"labelAgent";
			this->labelAgent->Size = System::Drawing::Size(167, 13);
			this->labelAgent->TabIndex = 1;
			this->labelAgent->Text = L"Количество созданных агентов";
			// 
			// labelKolAgent
			// 
			this->labelKolAgent->AutoSize = true;
			this->labelKolAgent->Location = System::Drawing::Point(200, 25);
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
			// buttonOk
			// 
			this->buttonOk->Location = System::Drawing::Point(407, 22);
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
			this->Controls->Add(this->pictureBoxObj);
			this->Controls->Add(this->labelKolAgent);
			this->Controls->Add(this->labelAgent);
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
			Painter^ GetPainter();
			int GetRandom();
			void DeleteAgent(Agent^ ag);
			void AddAgent(Agent^ a);
	public: Server(ArrayList^ agents);
			System::Collections::ArrayList^ GetMyObjects(Agent^ ag);
	private: static void UpdateAllAgents();
			 void ChangeServer();
			 void ChangePainter();
			 myObject^ CreateObject();
			 static void TimerObject(System::Object^ source, System::Timers::ElapsedEventArgs^ e);
			 static void TimerPainter(System::Object^ source, System::Timers::ElapsedEventArgs^ e);
	private: System::Void Server_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void buttonOk_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void pictureBoxObj_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
};
}
