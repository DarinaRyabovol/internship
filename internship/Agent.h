#pragma once

namespace internship {

	ref class Server;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Agent
	/// </summary>
	public ref class Agent : public System::Windows::Forms::Form
	{
	public:
		Agent(void);
		Agent(String ^ name, Server^ serv);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Agent();
	private: System::Windows::Forms::PictureBox^  pictureBoxAgent;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Server^ serv;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBoxAgent = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAgent))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBoxAgent
			// 
			this->pictureBoxAgent->Location = System::Drawing::Point(9, 12);
			this->pictureBoxAgent->Name = L"pictureBoxAgent";
			this->pictureBoxAgent->Size = System::Drawing::Size(378, 231);
			this->pictureBoxAgent->TabIndex = 0;
			this->pictureBoxAgent->TabStop = false;
			// 
			// Agent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(399, 257);
			this->Controls->Add(this->pictureBoxAgent);
			this->Name = L"Agent";
			this->Text = L"Agent";
			this->Load += gcnew System::EventHandler(this, &Agent::Agent_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAgent))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Agent_Load(System::Object^  sender, System::EventArgs^  e);
	};
}
