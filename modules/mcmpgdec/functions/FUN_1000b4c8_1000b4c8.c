/* Module: mcmpgdec.dll
   Function: FUN_1000b4c8
   Address: 1000b4c8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000b4c8(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5f0) == 3) {
    if (*(int *)(param_1 + 0x5f4) == 0) {
      iVar1 = param_4 * 3;
      if (0 < param_4) {
        iVar1 = iVar1 + 1;
      }
      *param_2 = (iVar1 >> 1) + *param_3;
      iVar1 = param_5 * 3;
      if (0 < param_5) {
        iVar1 = iVar1 + 1;
      }
      param_2[1] = param_3[1] + -1 + (iVar1 >> 1);
      if (param_4 < 1) {
        param_2[2] = (param_4 >> 1) + *param_3;
      }
      else {
        param_2[2] = (param_4 + 1 >> 1) + *param_3;
      }
      iVar1 = param_3[1];
      if (param_5 < 1) {
        param_2[3] = iVar1 + 1 + (param_5 >> 1);
        return;
      }
      iVar2 = param_5 + 1;
    }
    else {
      iVar1 = param_4;
      if (0 < param_4) {
        iVar1 = param_4 + 1;
      }
      *param_2 = (iVar1 >> 1) + *param_3;
      iVar1 = param_5;
      if (0 < param_5) {
        iVar1 = param_5 + 1;
      }
      param_2[1] = param_3[1] + -1 + (iVar1 >> 1);
      iVar1 = param_4 * 3;
      if (0 < param_4) {
        iVar1 = iVar1 + 1;
      }
      param_2[2] = (iVar1 >> 1) + *param_3;
      iVar2 = param_5 * 3;
      iVar1 = param_3[1];
      if (0 < param_5) {
        iVar2 = iVar2 + 1;
      }
    }
    param_2[3] = iVar1 + 1 + (iVar2 >> 1);
  }
  else {
    if (param_4 < 1) {
      *param_2 = (param_4 >> 1) + *param_3;
    }
    else {
      *param_2 = (param_4 + 1 >> 1) + *param_3;
    }
    if (param_5 < 1) {
      param_2[1] = (param_5 >> 1) + param_3[1];
    }
    else {
      param_2[1] = (param_5 + 1 >> 1) + param_3[1];
    }
    if (*(int *)(param_1 + 0x5f0) == 1) {
      param_2[1] = param_2[1] + -1;
    }
    else {
      param_2[1] = param_2[1] + 1;
    }
  }
  return;
}


