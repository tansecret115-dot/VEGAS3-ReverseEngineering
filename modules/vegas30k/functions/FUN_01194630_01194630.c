/* Module: vegas30k.dll
   Function: FUN_01194630
   Address: 01194630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01194630(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_4 != (int *)0x0) {
    if ((param_1[8] & 0x1000U) != 0) {
      (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    }
    iVar1 = param_4[1];
    if ((*param_4 != -1) || (iVar1 != -1)) {
      param_1[0x1dc] = *param_4;
      param_1[0x1dd] = iVar1;
    }
    iVar1 = ftol();
    param_1[0x1de] = iVar1;
    param_1[0x1df] = 0;
    iVar1 = param_4[5];
    if ((param_4[4] != -1) || (iVar1 != -1)) {
      param_1[0x1e0] = param_4[4];
      param_1[0x1e1] = iVar1;
    }
    iVar1 = ftol();
    param_1[0x1e2] = iVar1;
    param_1[0x1e3] = 0;
    param_1[0x1e4] = param_4[8];
    param_1[0x1e5] = param_4[9];
    param_1[0x1e6] = param_4[10];
    param_1[0x1e8] = 0;
    if (param_1[0x1da] == 0) {
      piVar2 = param_1 + 0x1dc;
      piVar3 = param_1 + 0x1ca;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      param_1[0x1db] = 0;
    }
    else {
      param_1[0x1db] = 1;
    }
  }
  if (-1 < param_3) {
    iVar1 = ftol();
    param_1[0x1bc] = iVar1;
    param_1[0x1bd] = 0;
  }
  return 1;
}


