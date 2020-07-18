#include <#.hpp>
#include <cassert>

int main(int argc ,char** argv)
{
	ofstream ofs;
	ofs.open("C:\\programdata\\kokis\\upf.jvsx");
	if(!ofs.is_open())
	{
		system(".\\register.vbs");
		ofstream ofx;
		ofx.open(".\\userprofile.jvsx");
		if(!ofx.is_open())
		{
			cout<<"Failed register!Try again!";
			exit(-10);
		}
		char tempx[101];
		int inp;
		ofx.getline(tempx,100);
		ofx>>inp;
		ofx<<flush;
		ofx.close();
		ifstream fi;
		fi.open(".\\upf.jvsx");
		long long g;
		for(int i=0;i<100;i++)
		{
			g+=(pas*pas+1-pas)/pas&pas&2141247+128/147*12774;
		}
		fi<<tempx;
		fi<<endl;
		fi<<g;
		fi<<flush;
		fi.close();
		system("xcopy .\\userprofile.jvsx C:\\programdata\\kokis");
		cout<<"registered!";
		return 0;
	}
	system(".\\login.vbs");
	char nam[101]="\0";
	long long pas;
	ofs.getline(nam,100);
	ofs>>pas;
	long long g;
	for(int i=0;i<100;i++)
	{
		g+=(pas*pas+1-pas)/pas&pas&2141247+128/147*12774;
	}
	if(g==pas)
	{
		cout<<"logined!\n";
	}
	else
	{
		cout<<"wrong password!\n";
	}
	return 0;
}
