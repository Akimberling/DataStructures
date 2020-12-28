#ifndef FRACT
#define FRACT

class fract
{
private: int n, d;
public:
	void readFract()
	{
		cout << "Enter a fraction: ";
		cin >> n;
		cin.ignore();
		cin >> d;
	}
	friend fract operator+(fract F1, fract F2)
	{
		fract res;
		res.n = (F1.n * F2.d) + (F1.d *F2.n);
		res.d = F1.d * F2.d;
		return res;
	}
	friend fract operator-(fract F1, fract F2)
	{
		fract res;
		res.n = (F1.n * F2.d) - (F1.d *F2.n);
		res.d = F1.d * F2.d;
		return res;
	}
	friend fract operator*(fract F1, fract F2)
	{
		fract res;
		res.n = F1.n * F2.n;
		res.d = F1.d * F2.d;
		return res;
	}
	friend fract operator/(fract F1, fract F2)
	{
		fract res;
		res.n = F1.n * F2.d;
		res.d = F1.d * F2.n;
		return res;
	}
	friend fract& operator++(fract& F1)
	{
		fract res;
		res.n = ++F1.n; 
		res.d = ++F1.d;
		return res;
	}
	friend fract& operator--(fract& F1)
	{
		fract res;
		res.n = --F1.n;
		res.d = --F1.d;
		return res;
	}
	void displayFract()
	{
		cout <<"("<< n << "/" << d <<")";
	}

};

#endif
