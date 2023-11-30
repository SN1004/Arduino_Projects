int grd1 = 13 ; int grd2 = 12 ; int grd3 = 11 ;
int plr1 = 10 ; int plr2 = 9 ; int plr3 = 8 ;
int plr4 = 7 ; int plr5 = 6 ; int plr6 = 5 ;
int plr7 = 4 ; int plr8 = 3 ; int plr9 = 2 ;
void setup() {
  pinMode(grd1, OUTPUT); pinMode(grd2, OUTPUT);
  pinMode(grd3, OUTPUT); pinMode(plr1, OUTPUT);
  pinMode(plr2, OUTPUT); pinMode(plr3, OUTPUT);
  pinMode(plr4, OUTPUT); pinMode(plr5, OUTPUT);
  pinMode(plr6, OUTPUT); pinMode(plr7, OUTPUT);
  pinMode(plr8, OUTPUT); pinMode(plr9, OUTPUT);
}

void loop() {
  for (int H1 = 0 ; H1 <= 199 ; H1 ++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr7, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr7, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
  }
  for (int H2 = 0 ; H2 <= 199 ; H2 ++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr4, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr4, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
  }
  for (int H3 = 0 ; H3 <= 199 ; H3 ++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr1, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr1, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
  }
  for (int i1 = 0; i1 <= 199; i1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr9, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr9, LOW); digitalWrite(plr8, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr7, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr7, LOW);
  }
  for (int i2 = 0; i2 <= 199; i2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr6, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr6, LOW); digitalWrite(plr5, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr4, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr4, LOW);
  }
  for (int i3 = 0; i3 <= 199; i3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr3, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr3, LOW); digitalWrite(plr2, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr1, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr1, LOW);
  }
  for ( int k1 = 0; k1 <= 199; k1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr9, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr7, HIGH); digitalWrite(plr8, HIGH);
    digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr7, LOW); digitalWrite(plr8, LOW);
    digitalWrite(plr9, LOW);
  }
  for ( int k2 = 0; k2 <= 199; k2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr6, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr4, HIGH); digitalWrite(plr5, HIGH);
    digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr4, LOW); digitalWrite(plr5, LOW);
    digitalWrite(plr6, LOW);
  }
  for ( int k3 = 0; k3 <= 199; k3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr3, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr1, HIGH); digitalWrite(plr2, HIGH);
    digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr1, LOW); digitalWrite(plr2, LOW);
    digitalWrite(plr3, LOW);
  }
  for ( int k4 = 0; k4 <= 199; k4++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr9, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr7, HIGH); digitalWrite(plr8, HIGH);
    digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr7, LOW); digitalWrite(plr8, LOW);
    digitalWrite(plr9, LOW);
  }
  for ( int k5 = 0; k5 <= 199; k5++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr6, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr4, HIGH); digitalWrite(plr5, HIGH);
    digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr4, LOW); digitalWrite(plr5, LOW);
    digitalWrite(plr6, LOW);
  }
  for ( int k6 = 0; k6 <= 199; k6++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr3, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr1, HIGH); digitalWrite(plr2, HIGH);
    digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr1, LOW); digitalWrite(plr2, LOW);
    digitalWrite(plr3, LOW);
  }
  for (int g1 = 0; g1 <= 199; g1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr7, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr7, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr8, HIGH);
    delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr8, LOW);
  }
  for (int g2 = 0; g2 <= 199; g2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr4, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr4, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr5, HIGH);
    delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr5, LOW);
  }
  for (int g3 = 0; g3 <= 199; g3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr1, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr1, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr2, HIGH);
    delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr2, LOW);
  }
  for (int L1 = 0; L1 <= 199; L1++) {
    digitalWrite(grd3, HIGH); digitalWrite(grd1, HIGH);  digitalWrite(plr7, HIGH);
    digitalWrite(plr9, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd1, LOW); digitalWrite(plr7, LOW);
    digitalWrite(plr9, LOW); digitalWrite(plr8, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
  }
  for (int L2 = 0; L2 <= 199; L2++) {
    digitalWrite(grd3, HIGH); digitalWrite(grd1, HIGH); digitalWrite(plr4, HIGH);
    digitalWrite(plr6, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd1, LOW); digitalWrite(plr4, LOW);
    digitalWrite(plr6, LOW); digitalWrite(plr5, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
  }
  for (int L3 = 0; L3 <= 199; L3++) {
    digitalWrite(grd3, HIGH); digitalWrite(grd1, HIGH); digitalWrite(plr1, HIGH);
    digitalWrite(plr3, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd1, LOW); digitalWrite(plr1, LOW);
    digitalWrite(plr3, LOW); digitalWrite(plr2, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
  }
  for (int a1 = 0; a1 <= 199; a1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr9, HIGH);
    digitalWrite(plr7, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr9, LOW);
    digitalWrite(plr7, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
  }
  for (int a2 = 0; a2 <= 199; a2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr6, HIGH);
    digitalWrite(plr4, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr6, LOW);
    digitalWrite(plr4, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
  }
  for (int a3 = 0; a3 <= 199; a3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr3, HIGH);
    digitalWrite(plr1, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr3, LOW);
    digitalWrite(plr1, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
  }
  for (int Y1 = 0; Y1 <= 199; Y1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr7, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr7, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
  }
  for (int Y2 = 0; Y2 <= 199; Y2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr4, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr4, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
  }
  for (int Y3 = 0; Y3 <= 199; Y3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr1, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr1, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
  }
  for (int s1 = 0; s1 <= 199; s1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr7, HIGH);
    digitalWrite(plr8, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr7, LOW);
    digitalWrite(plr8, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); digitalWrite(plr7, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr8, LOW); digitalWrite(plr7, LOW);
  }
  for (int s2 = 0; s2 <= 199; s2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr4, HIGH);
    digitalWrite(plr5, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr4, LOW);
    digitalWrite(plr5, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); digitalWrite(plr4, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr5, LOW); digitalWrite(plr4, LOW);
  }
  for (int s3 = 0; s3 <= 199; s3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr1, HIGH);
    digitalWrite(plr2, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr1, LOW);
    digitalWrite(plr2, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); digitalWrite(plr1, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr2, LOW); digitalWrite(plr1, LOW);
  }
  for (int u1 = 0; u1 <= 199; u1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr7, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr7, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr8, LOW);
  }
  for (int u2 = 0; u2 <= 199; u2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr4, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr4, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr5, LOW);
  }
  for (int u3 = 0; u3 <= 199; u3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr1, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr1, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr2, LOW);
  }
  for (int r1 = 0; r1 <= 180; r1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr9, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(plr7, HIGH); digitalWrite(plr8, HIGH);
    delay(1);
    digitalWrite(grd3, LOW); digitalWrite(plr7, LOW); digitalWrite(plr8, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr7, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr7, LOW);
  }
  for (int r2 = 0; r2 <= 180; r2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr6, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(plr4, HIGH); digitalWrite(plr5, HIGH);
    delay(1);
    digitalWrite(grd3, LOW); digitalWrite(plr4, LOW); digitalWrite(plr5, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr4, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr4, LOW);
  }
  for (int r3 = 0; r3 <= 180; r3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr3, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(plr1, HIGH); digitalWrite(plr2, HIGH);
    delay(1);
    digitalWrite(grd3, LOW); digitalWrite(plr1, LOW); digitalWrite(plr2, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(plr1, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(plr1, LOW);
  }
  for (int y1 = 0; y1 <= 199 ; y1++) {
    digitalWrite(grd1 , HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr9, HIGH);
    delay(1);
    digitalWrite(grd1 , LOW); digitalWrite(grd3, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(plr7, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(plr7, LOW);
  }
  for (int y2 = 0; y2 <= 199 ; y2++) {
    digitalWrite(grd1 , HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr6, HIGH);
    delay(1);
    digitalWrite(grd1 , LOW); digitalWrite(grd3, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(plr4, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(plr4, LOW);
  }
  for (int y3 = 0; y3 <= 199 ; y3++) {
    digitalWrite(grd1 , HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr3, HIGH);
    delay(1);
    digitalWrite(grd1 , LOW); digitalWrite(grd3, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(plr1, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(plr1, LOW);
  }
  for (int A1 = 0; A1 <= 199; A1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr9, HIGH);
    digitalWrite(plr7, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr9, LOW);
    digitalWrite(plr7, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
  }
  for (int A2 = 0; A2 <= 199; A2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr6, HIGH);
    digitalWrite(plr4, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr6, LOW);
    digitalWrite(plr4, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
  }
  for (int A3 = 0; A3 <= 199; A3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr3, HIGH);
    digitalWrite(plr1, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr3, LOW);
    digitalWrite(plr1, LOW);
    digitalWrite(grd3, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd3, LOW); digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
  }
  for (int n1 = 0 ; n1 <= 199; n1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr7, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr7, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH);
    delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
  }
  for (int n2 = 0 ; n2 <= 199; n2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr4, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr4, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH);
    delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
  }
  for (int n3 = 0 ; n3 <= 199; n3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr1, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr1, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH);
    delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
  }
  for (int S1 = 0; S1 <= 199; S1++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr7, HIGH);
    digitalWrite(plr8, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr7, LOW);
    digitalWrite(plr8, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); digitalWrite(plr7, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr8, LOW); digitalWrite(plr7, LOW);
  }
  for (int S2 = 0; S2 <= 199; S2++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr4, HIGH);
    digitalWrite(plr5, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr4, LOW);
    digitalWrite(plr5, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); digitalWrite(plr4, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr5, LOW); digitalWrite(plr4, LOW);
  }
  for (int S3 = 0; S3 <= 199; S3++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd3, HIGH); digitalWrite(plr1, HIGH);
    digitalWrite(plr2, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd3, LOW); digitalWrite(plr1, LOW);
    digitalWrite(plr2, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); digitalWrite(plr1, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr2, LOW); digitalWrite(plr1, LOW);
  }
    for (int h1 = 0 ; h1 <= 199 ; h1 ++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr7, HIGH); digitalWrite(plr9, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr7, LOW); digitalWrite(plr9, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr8, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr8, LOW);
  }
  for (int h2 = 0 ; h2 <= 199 ; h2 ++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr4, HIGH); digitalWrite(plr6, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr4, LOW); digitalWrite(plr6, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr5, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr5, LOW);
  }
  for (int h3 = 0 ; h3 <= 199 ; h3 ++) {
    digitalWrite(grd1, HIGH); digitalWrite(grd2, HIGH); digitalWrite(grd3, HIGH);
    digitalWrite(plr1, HIGH); digitalWrite(plr3, HIGH); delay(1);
    digitalWrite(grd1, LOW); digitalWrite(grd2, LOW); digitalWrite(grd3, LOW);
    digitalWrite(plr1, LOW); digitalWrite(plr3, LOW);
    digitalWrite(grd2, HIGH); digitalWrite(plr2, HIGH); delay(1);
    digitalWrite(grd2, LOW); digitalWrite(plr2, LOW);
  }
}
