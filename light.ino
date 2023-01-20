void setup()
{
  Serial.begin(115200);
}

void loop()
{
  int measur = 0;
  measur = hallRead();
  Serial.print("hall sensor measurment:");
  Serial.println(measur);

  delay(2000);

}