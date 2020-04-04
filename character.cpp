#include<iostream>
#include<string>
using namespace std;
typedef enum {None, Moriarty, Sherlock, Eurus, Watson, Adler} CharacterName;

class character
{
    private:
    //typedef enum {None, Moriarty, Sherlock, Eurus, Watson, Adler} CharacterName;
    CharacterName state;
    int speed, might, sanity, knowledge;
	int Ms[9], Mm[9], Msa[9], Mk[9], Mlife;
	int Ss[9], Sm[9], Ssa[9], Sk[9], Slife;
	int Es[9], Em[9], Esa[9], Ek[9], Elife;
	int Ws[9], Wm[9], Wsa[9], Wk[9], Wlife;
	int As[9], Am[9], Asa[9], Ak[9], Alife;
    public:
    character(){
		state = None;
		Ms[0] = 0; Ms[1] = 2; Ms[2] = 4; Ms[3] = 4; Ms[4] = 5; Ms[5] = 6; Ms[6] = 6; Ms[7] = 7; Ms[8] = 8;
		Mm[0] = 0; Mm[1] = 3; Mm[2] = 4; Mm[3] = 4; Mm[4] = 5; Mm[5] = 6; Mm[6] = 6; Mm[7] = 7; Mm[8] = 8;
		Msa[0] = 0; Msa[1] = 2; Msa[2] = 3; Msa[3] = 3; Msa[4] = 5; Msa[5] = 5; Msa[6] = 6; Msa[7] = 6; Msa[8] = 7;
		Mk[0] = 0; Mk[1] = 4; Mk[2] = 4; Mk[3] = 5; Mk[4] = 5; Mk[5] = 6; Mk[6] = 7; Mk[7] = 7; Mk[8] = 8;
		Ss[0] = 0; Ss[1] = 2; Ss[2] = 3; Ss[3] = 4; Ss[4] = 4; Ss[5] = 5; Ss[6] = 6; Ss[7] = 7; Ss[8] = 8;
		Sm[0] = 0; Sm[1] = 3; Sm[2] = 4; Sm[3] = 5; Sm[4] = 5; Sm[5] = 6; Sm[6] = 7; Sm[7] = 7; Sm[8] = 8;
		Ssa[0] = 0; Ssa[1] = 1; Ssa[2] = 2; Ssa[3] = 3; Ssa[4] = 3; Ssa[5] = 4; Ssa[6] = 5; Ssa[7] = 6; Ssa[8] = 6;
		Sk[0] = 0; Sk[1] = 4; Sk[2] = 4; Sk[3] = 5; Sk[4] = 5; Sk[5] = 6; Sk[6] = 7; Sk[7] = 8; Sk[8] = 8;
		Es[0] = 0; Es[1] = 2; Es[2] = 3; Es[3] = 3; Es[4] = 4; Es[5] = 4; Es[6] = 5; Es[7] = 6; Es[8] = 6;
		Em[0] = 0; Em[1] = 2; Em[2] = 2; Em[3] = 3; Em[4] = 3; Em[5] = 4; Em[6] = 5; Em[7] = 5; Em[8] = 6;
		Esa[0] = 0; Esa[1] = 2; Esa[2] = 4; Esa[3] = 5; Esa[4] = 5; Esa[5] = 6; Esa[6] = 7; Esa[7] = 7; Esa[8] = 8;
		Ek[0] = 0; Ek[1] = 2; Ek[2] = 3; Ek[3] = 4; Ek[4] = 5; Ek[5] = 6; Ek[6] = 6; Ek[7] = 7; Ek[8] = 8;
		Ws[0] = 0; Ws[1] = 2; Ws[2] = 3; Ws[3] = 3; Ws[4] = 3; Ws[5] = 4; Ws[6] = 4; Ws[7] = 5; Ws[8] = 6;
		Wm[0] = 0; Wm[1] = 2; Wm[2] = 3; Wm[3] = 4; Wm[4] = 4; Wm[5] = 5; Wm[6] = 5; Wm[7] = 6; Wm[8] = 7;
		Wsa[0] = 0; Wsa[1] = 2; Wsa[2] = 3; Wsa[3] = 4; Wsa[4] = 5; Wsa[5] = 6; Wsa[6] = 6; Wsa[7] = 7; Wsa[8] = 7;
		Wk[0] = 0; Wk[1] = 2; Wk[2] = 3; Wk[3] = 4; Wk[4] = 4; Wk[5] = 4; Wk[6] = 5; Wk[7] = 6; Wk[8] = 6;
		As[0] = 0; As[1] = 3; As[2] = 4; As[3] = 4; As[4] = 5; As[5] = 6; As[6] = 6; As[7] = 7; As[8] = 8;
		Am[0] = 0; Am[1] = 1; Am[2] = 2; Am[3] = 3; Am[4] = 3; Am[5] = 4; Am[6] = 5; Am[7] = 5; Am[8] = 6;
		Asa[0] = 0; Asa[1] = 3; Asa[2] = 4; Asa[3] = 4; Asa[4] = 5; Asa[5] = 6; Asa[6] = 6; Asa[7] = 7; Asa[8] = 8;
		Ak[0] = 0; Ak[1] = 1; Ak[2] = 2; Ak[3] = 3; Ak[4] = 3; Ak[5] = 4; Ak[6] = 5; Ak[7] = 6; Ak[8] = 6;
		//Ms[9] = {0, 2, 4, 4, 5, 6, 6, 7, 8};
		//Mm[9] = {0, 3, 4, 4, 5, 6, 6, 7, 8};
		//Msa[9] = {0, 2, 3, 3, 5, 5, 6, 6, 7};
		//Mk[9] = {0, 4, 4, 5, 5, 6, 7, 7, 8};
		//Ss[9] = {0, 2, 3, 4, 4, 5, 6, 7, 8};
		//Sm[9] = {0, 3, 4, 5, 5, 6, 7, 7, 8};
		//Ssa[9] = {0, 1, 2, 3, 3, 4, 5, 6, 6};
		//Sk[9] = {0, 4, 4, 5, 5, 6, 7, 8, 8};
		//Es[9] = {0, 2, 3, 3, 4, 4, 5, 6, 6};
		//Em[9] = {0, 2, 2, 3, 3, 4, 5, 5, 6};
		//Esa[9] = {0, 2, 4, 5, 5, 6, 7, 7, 8};
		//Ek[9] = {0, 2, 3, 4, 5, 6, 6, 7, 8};
		//Ws[9] = {0, 2, 3, 3, 3, 4, 4, 5, 6};
		//Wm[9] = {0, 2, 3, 4, 4, 5, 5, 6, 7};
		//Wsa[9] = {0, 2, 3, 4, 5, 6, 6, 7, 7};
		//Wk[9] = {0, 2, 3, 4, 4, 4, 5, 6, 6};
		//As[9] = {0, 3, 4, 4, 5, 6, 6, 7, 8};
		//Am[9] = {0, 1, 2, 3, 3, 4, 5, 5, 6};
		//Asa[9] = {0, 3, 4, 4, 5, 6, 6, 7, 8};
		//Ak[9] = {0, 1, 2, 3, 3, 4, 5, 6, 6};
	};
	CharacterName transition(string input);
	void setstate(CharacterName newstate);
	void changespeed(int p);
	void changemight(int p);
	void changesanity(int p);
	void changeknowledge(int p);
	int returnspeed(void);
	int returnmight(void);
	int returnsanity(void);
	int returnknowledge(void);
	void changelife(int p);
	int returnlife(void);
    void Initialization(CharacterName type);
	void attributes(void);
	void State(void);
};

CharacterName character::transition(string input){
	CharacterName temp;
	if(input == "Moriarty"){
		temp = Moriarty;}
	else if(input == "Sherlock"){
		temp = Sherlock;}
	else if(input == "Eurus"){
		temp = Eurus;}
	else if(input == "Watson"){
		temp = Watson;}
	else if(input == "Adler"){
		temp = Adler;}
	else{
		temp = None;}
	return temp;
};
void character::setstate(CharacterName newstate){
	state = newstate;
};
void character::changespeed(int p){
	int i;
	if((state == Moriarty) || (state == Sherlock) || (state == Eurus) || (state == Adler))
		i = 4;
	else if(state == Watson)
		i = 3;
	else
		i = 0;
	i+= p;
	if(0<i<8){
		if(state == Moriarty)
			speed = Ms[i];
		else if(state == Sherlock)
			speed = Ss[i];
		else if(state == Eurus)
			speed = Es[i];
		else if(state == Watson)
			speed = Ws[i];
		else if(state == Adler)
			speed = As[i];
		else
			speed = 0;
	}
	else if(i>=8){
		if(state == Moriarty)
			speed = Ms[8];
		else if(state == Sherlock)
			speed = Ss[8];
		else if(state == Eurus)
			speed = Es[8];
		else if(state == Watson)
			speed = Ws[8];
		else if(state == Adler)
			speed = As[8];
		else
			speed = 0;
	}
	else
    speed = 0;
};
void character::changemight(int p){
    int i;
	if((state == Moriarty) || (state == Sherlock) || (state == Watson) || (state == Adler))
		i = 4;
	else if(state == Eurus)
		i = 3;
	else
		i = 0;
	i+= p;
	if(0<i<8){
		if(state == Moriarty)
			might = Mm[i];
		else if(state == Sherlock)
			might = Sm[i];
		else if(state == Eurus)
			might = Em[i];
		else if(state == Watson)
			might = Wm[i];
		else if(state == Adler)
			might = Am[i];
		else
			might = 0;
	}
	else if(i>=8){
		if(state == Moriarty)
			might = Mm[8];
		else if(state == Sherlock)
			might = Sm[8];
		else if(state == Eurus)
			might = Em[8];
		else if(state == Watson)
			might = Wm[8];
		else if(state == Adler)
			might = Am[8];
		else
			might = 0;
	}
	else
    might = 0;
};
void character::changesanity(int p){
    int i;
	if(state == Eurus)
		i = 5;
	else if((state == Moriarty) || (state == Adler))
		i = 4;
	else if((state == Sherlock) || (state == Watson))
		i = 3;
	else
		i = 0;
	i+= p;
	if(0<i<8){
		if(state == Moriarty)
			sanity = Msa[i];
		else if(state == Sherlock)
			sanity = Ssa[i];
		else if(state == Eurus)
			sanity = Esa[i];
		else if(state == Watson)
			sanity = Wsa[i];
		else if(state == Adler)
			sanity = Asa[i];
		else
			sanity = 0;
	}
	else if(i>=8){
		if(state == Moriarty)
			sanity = Msa[8];
		else if(state == Sherlock)
			sanity = Ssa[8];
		else if(state == Eurus)
			sanity = Esa[8];
		else if(state == Watson)
			sanity = Wsa[8];
		else if(state == Adler)
			sanity = Asa[8];
		else
			sanity = 0;
	}
	else
    sanity = 0;
};
void character::changeknowledge(int p){
    int i;
	if(state == Sherlock)
		i = 5;
	else if((state == Moriarty) || (state == Eurus) || (state == Watson))
		i = 4;
	else if(state == Adler)
		i = 3;
	else
		i = 0;
	i+= p;
	if(0<i<8){
		if(state == Moriarty)
			knowledge = Mk[i];
		else if(state == Sherlock)
			knowledge = Sk[i];
		else if(state == Eurus)
			knowledge = Ek[i];
		else if(state == Watson)
			knowledge = Wk[i];
		else if(state == Adler)
			knowledge = Ak[i];
		else
			knowledge = 0;
	}
	else if(i>=8){
		if(state == Moriarty)
			knowledge = Mk[8];
		else if(state == Sherlock)
			knowledge = Sk[8];
		else if(state == Eurus)
			knowledge = Ek[8];
		else if(state == Watson)
			knowledge = Wk[8];
		else if(state == Adler)
			knowledge = Ak[8];
		else
			knowledge = 0;
	}
	else
    knowledge = 0;
};
int character::returnspeed(void){
	return speed;
};
int character::returnmight(void){
	return might;
};
int character::returnsanity(void){
	return sanity;
};
int character::returnknowledge(void){
	return knowledge;
};
void character::changelife(int p){
	if(state == Moriarty){
		Mlife = p;
	}
	else if(state == Sherlock){
		Slife = p;
	}
	else if(state == Eurus){
		Elife = p;
	}
	else if(state == Watson){
		Wlife = p;
	}
	else if(state == Adler){
		Alife = p;
	}
	else{
		;
	}
};
int character::returnlife(void){
	if(state == Moriarty){
		return Mlife;
	}
	else if(state == Sherlock){
		return Slife ;
	}
	else if(state == Eurus){
		return Elife;
	}
	else if(state == Watson){
		return Wlife;
	}
	else if(state == Adler){
		return Alife;
	}
	else{
		return 0;
	}
};
void character::Initialization(CharacterName type){
	state = type;
    if(state == Moriarty){
        speed = Ms[4];
		might = Mm[4];
		sanity = Msa[4];
		knowledge = Mk[4];
		Mlife = 1;
	}
	else if(state == Sherlock){
        speed = Ss[4];
		might = Sm[4];
		sanity = Ssa[3];
		knowledge = Sk[5];
		Slife = 1;
	}
	else if(state == Eurus){
        speed = Es[4];
		might = Em[3];
		sanity = Esa[5];
		knowledge = Ek[4];
		Elife = 1;
	}
	else if(state == Watson){
        speed = Ws[3];
		might = Wm[4];
		sanity = Wsa[3];
		knowledge = Wk[4];
		Wlife = 1;
	}
	else if(state == Adler){
        speed = As[4];
		might = Am[4];
		sanity = Asa[4];
		knowledge = Ak[3];
		Alife = 1;
	}
	else{
		speed = 0;
		might = 0;
		sanity = 0;
		knowledge = 0;
	}
};
void character::attributes(void){
	int i;
	if(state == Moriarty){
		cout<<"速度值：";
		for(i=0; i<=8; i++)
			cout<<Ms[i]<<" ";
		cout<<endl;
		cout<<"力量值：";
		for(i=0; i<=8; i++)
			cout<<Mm[i]<<" ";
		cout<<endl;
		cout<<"神志值：";
		for(i=0; i<=8; i++)
			cout<<Msa[i]<<" ";
		cout<<endl;
		cout<<"知识值：";
		for(i=0; i<=8; i++)
			cout<<Mk[i]<<" ";
		cout<<endl;
	}
	else if(state == Sherlock){
		cout<<"速度值：";
		for(i=0; i<=8; i++)
			cout<<Ss[i]<<" ";
		cout<<endl;
		cout<<"力量值：";
		for(i=0; i<=8; i++)
			cout<<Sm[i]<<" ";
		cout<<endl;
		cout<<"神志值：";
		for(i=0; i<=8; i++)
			cout<<Ssa[i]<<" ";
		cout<<endl;
		cout<<"知识值：";
		for(i=0; i<=8; i++)
			cout<<Sk[i]<<" ";
		cout<<endl;
	}
	else if(state == Eurus){
		cout<<"速度值：";
		for(i=0; i<=8; i++)
			cout<<Es[i]<<" ";
		cout<<endl;
		cout<<"力量值：";
		for(i=0; i<=8; i++)
			cout<<Em[i]<<" ";
		cout<<endl;
		cout<<"神志值：";
		for(i=0; i<=8; i++)
			cout<<Esa[i]<<" ";
		cout<<endl;
		cout<<"知识值：";
		for(i=0; i<=8; i++)
			cout<<Ek[i]<<" ";
		cout<<endl;
	}
	else if(state == Watson){
		cout<<"速度值：";
		for(i=0; i<=8; i++)
			cout<<Ws[i]<<" ";
		cout<<endl;
		cout<<"力量值：";
		for(i=0; i<=8; i++)
			cout<<Wm[i]<<" ";
		cout<<endl;
		cout<<"神志值：";
		for(i=0; i<=8; i++)
			cout<<Wsa[i]<<" ";
		cout<<endl;
		cout<<"知识值：";
		for(i=0; i<=8; i++)
			cout<<Wk[i]<<" ";
		cout<<endl;
	}
	else if(state == Adler){
		cout<<"速度值：";
		for(i=0; i<=8; i++)
			cout<<As[i]<<" ";
		cout<<endl;
		cout<<"力量值：";
		for(i=0; i<=8; i++)
			cout<<Am[i]<<" ";
		cout<<endl;
		cout<<"神志值：";
		for(i=0; i<=8; i++)
			cout<<Asa[i]<<" ";
		cout<<endl;
		cout<<"知识值：";
		for(i=0; i<=8; i++)
			cout<<Ak[i]<<" ";
		cout<<endl;
	}
	else
		cout<<"None"<<endl;
};
void character::State(void){
	cout<<"当前速度值："<<speed<<endl<<"当前力量值："<<might<<endl<<"当前神志值："<<sanity<<endl<<"当前知识值："<<knowledge<<endl;
};

class Play
{
	private:
	character* people;
	public:
	Play(character* p): people(p){}; 
	void die(void);
	int dice(void);
	void onecycle(void);
};

void Play::die(void){
	if((people->returnspeed() == 0) || (people->returnmight() == 0) || (people->returnsanity() == 0) || (people->returnknowledge() == 0))
		people->changelife(0);
	else
		people->changelife(1);
};
int Play::dice(void){
	int val;
	val = (rand() % (2-0+1)) + (rand() % (2-0+1)) + (rand() % (2-0+1)) + (rand() % (2-0+1)) + (rand() % (2-0+1)) + (rand() % (2-0+1)) + (rand() % (2-0+1)) + (rand() % (2-0+1));//eight dices, each range is [0,2]
	return val;
};
void Play::onecycle(void){
	int k = (rand() % (5-(-5)+1))+ (-5);//[-5,5]
	if(people->returnlife() == 1){
		people->changespeed(k);
		people->changemight(k);
		people->changesanity(k);
		people->changeknowledge(k);
		die();
	}
	else
		;
};

    

int main(void)
{
    character* Person = new character;
	Play run(Person);
	string name;
	int i, j, flag = 1;
	string sort[4];
	int compare[4], descend[4]= {0, 1, 2, 3};
	int com;
	for(j=0; j<=3; j++){
		cout<<"请选择你想要的角色： Moriarty, Sherlock, Eurus, Watson, Adler"<<endl;
		cin>>name;
		if(!((name == "Moriarty") || (name == "Sherlock") || (name == "Eurus") || (name == "Watson") || (name == "Adler"))){
			while(!((name == "Moriarty") || (name == "Sherlock") || (name == "Eurus") || (name == "Watson") || (name == "Adler"))){
				while(!((name == "Moriarty") || (name == "Sherlock") || (name == "Eurus") || (name == "Watson") || (name == "Adler"))){
					cout<<"请输入正确的人物名称，注意大小写"<<endl;
					cout<<"请选择你想要的角色： Moriarty, Sherlock, Eurus, Watson, Adler"<<endl;
					cin>>name;
				}
				part:
					for(i=0; i<j; i++){
						while(name == sort[i]){
							cout<<"角色已被选择，请重新输入新角色名称"<<endl;
							cout<<"请选择你想要的角色： Moriarty, Sherlock, Eurus, Watson, Adler"<<endl;
							cin>>name;
						}
					}
			}
		}
		else{
			goto part;
		}
		sort[j] = name;
		Person->Initialization(Person->transition(name));
		cout<<name<<"属性为："<<endl;
		Person->attributes();
		cout<<name<<"状态为："<<endl;
		Person->State();
		cout<<endl;
	}
	while(flag){
		for(j=0; j<=3; j++){
			compare[j] = run.dice();
			cout<<sort[j]<<"骰子数为："<<compare[j]<<endl;
		}
		cout<<endl;
		for(j=0; j<=3; j++){
			for(i=j; i<=3; i++){
				if(compare[i] > compare[j]){
					com = compare[j];
					compare[j] = compare[i];
					compare[i] = com;
					com = descend[j];
					descend[j] = descend[i];
					descend[i] = com;
				}
			}
		}
		flag = 0;
		for(j=0; j<=2; j++){
			for(i=j+1; i<=3; i++){
				if(compare[j] == compare[i])
					flag = 1;
			}
		}
	}
	for(j=0; j<=3; j++){
		Person->setstate(Person->transition(sort[descend[j]]));
		run.onecycle();
		if(Person->returnlife() == 1){
			cout<<sort[descend[j]]<<"状态为："<<endl;
			Person->State();
			cout<<endl;
		}
		else
			cout<<sort[descend[j]]<<"已经死了"<<endl<<endl;
	}
	system("pause");
	return 0;
}