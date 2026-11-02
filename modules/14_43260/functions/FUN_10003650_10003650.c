/* Module: 14_43260.dll
   Function: FUN_10003650
   Address: 10003650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_10003650(void *this,float *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  
  pfVar3 = (float *)((int)this + 0x11da);
  pfVar1 = param_3 + 10;
  for (; param_3 < pfVar1; param_3 = param_3 + 1) {
    pfVar3 = pfVar3 + 1;
    *pfVar3 = *param_3;
  }
  pfVar1 = param_1 + param_5;
  for (; param_1 < pfVar1; param_1 = param_1 + 1) {
    pfVar3 = pfVar3 + 1;
    *pfVar3 = *param_1;
  }
  pfVar3 = pfVar3 + (1 - param_5);
  pfVar1 = pfVar3 + param_5;
  for (; pfVar3 < pfVar1; pfVar3 = pfVar3 + 1) {
    *param_2 = 0.0;
    iVar6 = 10;
    pfVar5 = param_4;
    pfVar4 = pfVar3;
    do {
      pfVar4 = pfVar4 + -1;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar6 + -1;
      *param_2 = *pfVar4 * fVar2 + *param_2;
    } while (iVar6 != 0);
    *param_2 = *pfVar3 + *param_2;
    param_2 = param_2 + 1;
  }
  pfVar1 = param_3 + -0xb;
  while (param_3 = param_3 + -1, pfVar1 < param_3) {
    pfVar4 = pfVar3 + -1;
    pfVar3 = pfVar3 + -1;
    *param_3 = *pfVar4;
  }
  return;
}


