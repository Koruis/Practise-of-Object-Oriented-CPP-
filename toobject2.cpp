#include <iostream>
using namespace std;
//类定义
class Gas
{
public:
	static int lead;
	static int unlead;
	static int total;

	void ShowPrice();
	static void GetTotal();
	void Fill(int, int);
};
int Gas::total = 0;
int Gas::lead = 16;
int Gas::unlead = 17;

void Gas::ShowPrice()
{
	cout << this->lead << endl;
	cout << this->unlead << endl;
}
void Gas::GetTotal()
{
	cout << total << endl;
}
void Gas::Fill(int l, int ul)
{
	cout << "Lead: " << l << "L," << "Costs: " << l * lead << endl;
	cout<< "Unlead: " << ul << "L," << "Costs: " << ul * unlead << endl;
	total+=(this->lead)*l + (this->unlead)*ul;

}
//类定义

int main()
{
	
		Gas g1;
		g1.ShowPrice();
		g1.Fill(3, 5);
	
	Gas::GetTotal();

	
		Gas g2;
		g2.ShowPrice();
		g2.Fill(5, 6);
	
	Gas::GetTotal();

	system("PAUSE");
}