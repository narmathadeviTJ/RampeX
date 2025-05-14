 #include <stdio.h>

int main() {
  float temperature;

  printf("Enter the temperature : ");
  scanf("%f", &temperature);

  if (temperature <= 5) {
    printf("\nWear a warm coat, scarf, gloves, and hat. Consider thermal underwear.\n");
  } else if (temperature < 10) {
    printf("\nWear a jacket , and consider a scarf.\n");
  } else if (temperature <= 20) {
    printf("\n sweater, and consider long sleeves.\n");
  } else {
    printf("\n t-shirt.\n");
  }

  return 0;
}
