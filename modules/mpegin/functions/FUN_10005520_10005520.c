/* Module: mpegin.dll
   Function: FUN_10005520
   Address: 10005520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10005520(int *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = (int *)*param_1;
  param_1[8] = param_2;
  param_1[0x1c] = -1;
  param_1[0x1a] = -1;
  param_1[0x18] = -1;
  param_1[0x14] = -1;
  param_1[0x16] = -1;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[5] = 0;
  param_1[9] = param_3;
  param_1[2] = 0;
  param_1[0x1d] = -1;
  param_1[0x1b] = -1;
  param_1[0x19] = -1;
  param_1[0x15] = -1;
  param_1[0x17] = -1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  if ((piVar1[3] <= param_3) && ((piVar1[3] < param_3 || ((uint)piVar1[2] <= param_2)))) {
    uVar3 = (param_1[4] - *piVar1) - 4;
    iVar4 = (int)uVar3 >> 0x1f;
    if ((param_3 <= iVar4) && ((param_3 < iVar4 || (param_2 <= uVar3)))) {
      bVar2 = false;
      param_1[1] = (*piVar1 - piVar1[2]) + param_2;
      goto LAB_1000561e;
    }
  }
  iVar4 = *piVar1;
  param_1[1] = iVar4 + 0x200000;
  param_1[4] = iVar4 + 0x200000;
  iVar4 = (*(code *)param_1[0x2c])(param_1[0x2f],param_2,param_3);
  if (iVar4 != 0) {
    param_1[0x10] = 1;
    return;
  }
  bVar2 = true;
LAB_1000561e:
  if (param_1[0xb] == 0) {
    param_1[3] = param_1[4];
  }
  else {
    param_1[3] = param_1[1];
  }
  if ((param_1[0xe] != 0) && (param_4 != 0)) {
    iVar4 = *(int *)*param_1;
    if (bVar2) {
      param_1[3] = iVar4 + param_4;
      FUN_10005690(param_1);
      FUN_10005910(param_1,0);
      return;
    }
    param_1[3] = (iVar4 - ((int *)*param_1)[2]) + param_2 + param_4;
  }
  FUN_10005910(param_1,0);
  return;
}


