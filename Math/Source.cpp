#include <iostream>
#include <conio.h>

using namespace std;


namespace Math
{
	namespace DrobS
	{
		class Drob
		{
		public:
			int znamenuk;
			int chiselnuk;

			Drob() {
				znamenuk = 6;
				chiselnuk = 8;
			}
			Drob(int znamenuk, int chiselnuk) : Drob() {
				this->chiselnuk = chiselnuk;
				this->znamenuk = znamenuk;

			}

			~Drob() {
				znamenuk = 0;
				chiselnuk = 0;
			}

			void Show() {
				cout << " My Drob = " << chiselnuk << "/" << znamenuk << endl;
			}
		};
	}

	namespace _2DTochka
	{
		class Tochka2D
		{
		public:
			double xKord;
			double yKord;
			Tochka2D() {
				xKord = 3.6;
				yKord = 1.7;
			}

			Tochka2D(double xKord, double yKord) : Tochka2D() {
				this->xKord = xKord;
				this->yKord = yKord;
			}
			~Tochka2D() {
				xKord = 0;
				yKord = 0;
			}
			void Print() {
				cout << "Point A is in the coordinate: " << xKord << ":" << yKord << endl;
			}

		};

	}

	namespace _3DTochka
	{
		class Tochka3D
		{
		public:
			double xKord;
			double yKord;
			double zKord;

			Tochka3D() {
				xKord = 3.6;
				yKord = 1.7;
				zKord = 6.1;
			}

			Tochka3D(double xKord, double yKord, double zKord) : Tochka3D() {
				this->xKord = xKord;
				this->yKord = yKord;
				this->zKord = zKord;
			}
			~Tochka3D() {
				xKord = 0;
				yKord = 0;
				zKord = 0;
			}
			void Print() {
				cout << "Point A is in the coordinate: " << xKord << ":" << yKord << ":" << zKord << endl;
			}

		};
	}

}


using Math::DrobS::Drob;
using Math::_2DTochka::Tochka2D;
using Math::_3DTochka::Tochka3D;

int main()
{
	Drob* inst1 = new Drob(4, 5);
	inst1->Show();
	Tochka2D* inst2 = new Tochka2D(3.6, 5.3);
	inst2->Print();
	Tochka3D* inst3 = new Tochka3D(1.9, 3.5, 8.1);
	inst3->Print();


	return 0;
	_getch();
}