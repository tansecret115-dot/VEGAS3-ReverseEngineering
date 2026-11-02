/* Module: espr3260.dll
   Function: FUN_632f6310
   Address: 632f6310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_632f6310(int param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6,
                int param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_7 == 0) {
    if (param_1 < 0xa0) {
      iVar2 = param_1 * 3 + -0x58 + param_2;
    }
    else {
      iVar2 = param_1 + 0xe6;
    }
    *param_3 = param_1 + -10;
    if (param_1 + -10 < param_5) {
      *param_3 = param_5;
    }
    iVar1 = *param_3;
    *param_4 = iVar1 + 0x13;
    if (param_6 < iVar1 + 0x13) {
      *param_4 = param_6;
      *param_3 = param_6 + -0x13;
      return iVar2;
    }
  }
  else {
    iVar2 = (param_1 - *param_3) * 3 + 2 + param_2;
  }
  return iVar2;
}


