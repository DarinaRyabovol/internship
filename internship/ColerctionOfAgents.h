namespace internship
{
	ref class Agent;
	static ref class CollectionOfAgetns
	{
		static System::Collections::ArrayList^ listOfAgents;
	public:
		CollectionOfAgetns()
		{
			listOfAgents = gcnew System::Collections::ArrayList();
		}
		Agent^ GetAgent(int i)
		{
			IEnumerator^ tmp = listOfAgents->GetEnumerator();
			int j = 0;
			while(j < i)
			{
				tmp->MoveNext();
				j++;
			}
			return (Agent^)tmp;
		}
		System::Collections::ArrayList^ GetAllAgents()
		{
			return listOfAgents;
		}
		void AddAgent(Agent^ a)
		{
			listOfAgents->Add(a);
		}
		static void DeleteAgent(Agent^ ag)
		{
			listOfAgents->Remove(ag);
		}
	};
}