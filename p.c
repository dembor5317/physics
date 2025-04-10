#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793
#define G 9.8  // 중력 가속도 (m/s^2)

int main() {
    double v0, angle_deg;

    // 사용자 입력 받기
    printf("초기 속도 v0 (m/s): ");
    scanf_s("%lf", &v0);
    printf("발사 각도 θ (도): ");
    scanf_s("%lf", &angle_deg);

    // 도 → 라디안 변환
    double angle_rad = angle_deg * PI / 180.0;

    // (1) 초기 속도의 x, y 성분
    double v0x = v0 * cos(angle_rad);
    double v0y = v0 * sin(angle_rad);

    printf("\n1) x, y 방향의 초기 속도\n");
    printf("   Vx = %.2f m/s\n", v0x);
    printf("   Vy = %.2f m/s\n", v0y);

    // (2) 최고점의 높이
    double h = (v0y * v0y) / (2 * G);
    printf("\n2) 최고점의 높이\n");
    printf("   H = %.2f m\n", h);

    // (3) 최고점 도달 시간
    double t_peak = v0y / G;
    printf("\n3) 최고점에 도달하는 시간\n");
    printf("   t = %.2f s\n", t_peak);

    // (4) 수평 거리 (최대 거리)
    double t_total = 2 * t_peak;
    double range = v0x * t_total;
    printf("\n4) 수평으로 이동한 최대 거리\n");
    printf("   Range = %.2f m\n", range);

    // (5) 착지 시 속도 성분 및 전체 속도 벡터
    double vx_final = v0x;
    double vy_final = -v0y;
    double v_final = sqrt(vx_final * vx_final + vy_final * vy_final);

    printf("\n5) 착지 시 속도 성분 및 벡터 크기\n");
    printf("   Vx = %.2f m/s\n", vx_final);
    printf("   Vy = %.2f m/s\n", vy_final);
    printf("   |V| = %.2f m/s\n", v_final);

    return 0;
}




