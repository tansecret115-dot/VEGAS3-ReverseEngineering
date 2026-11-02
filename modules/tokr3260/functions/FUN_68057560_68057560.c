/* Module: tokr3260.dll
   Function: FUN_68057560
   Address: 68057560
   Source: Ghidra pseudocode (Stage 10 batch) */


float * __cdecl FUN_68057560(float *param_1,float param_2,uint param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  
  if (DAT_6805f208 == 0) {
    pfVar6 = (float *)&DAT_6805f088;
    DAT_6805f208 = 1;
    iVar3 = 1;
    do {
      iVar5 = 8;
      do {
        fVar7 = (float10)_CIpow();
        *pfVar6 = (float)fVar7;
        pfVar6 = pfVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      bVar2 = iVar3 < 0xc;
      iVar3 = iVar3 + 1;
    } while (bVar2);
  }
  iVar3 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if (((iVar3 < 0xd) && (0 < iVar3)) && (param_4 == 8)) {
    if (0 < (int)param_3) {
      iVar5 = 7;
      *param_1 = param_2;
      pfVar6 = param_1 + 1;
      iVar3 = param_3 << 5;
      do {
        pfVar4 = pfVar6 + 1;
        iVar5 = iVar5 + -1;
        *pfVar6 = *(float *)((int)&DAT_6805f068 + iVar3) * param_2;
        pfVar6 = pfVar4;
        iVar3 = iVar3 + 4;
      } while (iVar5 != 0);
      return pfVar4;
    }
    iVar5 = 0;
    fVar1 = *(float *)(param_3 * -0x20 + 0x6805f084);
    iVar3 = 0x20;
    do {
      iVar3 = iVar3 + -4;
      pfVar6 = (float *)(iVar5 + (param_3 + 1) * -0x20);
      iVar5 = iVar5 + 4;
      *(float *)((int)param_1 + iVar3) = pfVar6[0x1a017c22] * (param_2 / fVar1);
    } while (0 < iVar3);
    return pfVar6;
  }
  return (float *)0xfff0bdc1;
}


