#include <iostream>

int multiplie(int x, int y){
	int result;
	if(y%2 != 0){					// si y / 2 ne donne pas de reste donc y est pair
		result = x * (y-1) + x;

	}else{
		if(y%2 == 0 && y != 0){			// si y est pair et y différent de 0
			result = (2 * x) * (y/2);
		}
	}

return result;  // on stocke le résultat dans result
}

int main()
{
	int x, y;
	std :: cout << "x ? ";
	std :: cin >> x;
	std :: cout << "y ? ";
	std :: cin >> y;

	std :: cout << x << " * " << y << " = " << multiplie(x,y) << std :: endl;

	return 0;
}
