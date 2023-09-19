#include <stdio.h>
int main()
{
    // 1.Nhập vào điểm Toán, điểm Lý, điểm Hóa, tính điểm trung bình của bạn.
    // In ra kết quả
    //  Khai báo
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTB;
    // Nhap
    printf("Moi nhap diem Toan=");
    scanf("%f", &diemToan);
    printf("Moi nhap diem Ly= ");
    scanf("%f", &diemLy);
    printf("Moi nhap diem Hoa= ");
    scanf("%f", &diemHoa);
    // Tinh toan/ Thuc thi yeu cau de bai
    diemTB = (diemToan + diemLy + diemHoa) / 3;
    // In ra kq
    printf("Diem trung binh la: %.2f", diemTB);
    // 2.Nhập điểm Java trong khoảng từ 0-10. Đưa ra thông báo qua môn hay học lại?
    float diemJava;
    do
    {
        printf("Moi nhap diem Java= ");
        scanf("%f", &diemJava);
        // check diemJava >= 5 -> Pass nguoc lai -> Failed

    } while (diemJava < 0 || diemJava > 10);
    if (diemJava >= 5)
    {
        printf("Chuc mung ban da qua mon!");
    }
    else
    {
        printf("Chuc mung ban da mat 700K");
    }
}