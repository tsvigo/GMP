// #include <QCoreApplication>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     return a.exec();
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <gmp.h>
#include <gmpxx.h>
#include <iostream>
#include <vector>
int main(void) {
    // mpz_t x, y, result;

    // mpz_init_set_str(x, "7612058254738945", 10);
    // mpz_init_set_str(y, "9263591128439081", 10);
    // mpz_init(result);

    // mpz_mul(result, x, y);
    // gmp_printf("    %Zd\n"
    //            "*\n"
    //            "    %Zd\n"
    //            "--------------------\n"
    //            "%Zd\n", x, y, result);

    // /* free used memory */
    // mpz_clear(x);
    // mpz_clear(y);
    // mpz_clear(result);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    mpz_class x2("7612058254738945");
    mpz_class y2("9263591128439081");

    std::cout << "    " << x2 << "\n"
              << "*\n"
              << "    " << y2 << "\n"
              << "--------------------\n"
              << x2 * y2 << "\n"
    << "*************************************************\n";
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // Создаем вектор для хранения больших чисел
    std::vector<mpz_class> bigNumbers;

    // Инициализируем и добавляем большие числа в вектор
    mpz_class num1("123456789012345678901234567890");
    mpz_class num2("999999999999999999999999999999"
                   //"987654321098765432109876543210"
                   );

    bigNumbers.push_back(num1);
    bigNumbers.push_back(num2);

    // Выполнение сложения: result = num1 + num2
    mpz_class result = bigNumbers[0] + bigNumbers[1];

    // Вывод результата
    std::cout << "Result of addition: " << result.get_str(10)
              << std::endl;



    return 0;
}
