void test() {
	TH1F *h1=new TH1F("h1","h1",100,0,100);
	for (long long int i=0; i!=1000000; ++i) {
		double temp=rand()%(100-0+1)+0;
		h1->Fill(temp);
		cout<<temp<<endl;
	}

	h1->Draw();
}
