/* Module: vegas30k.dll
   Function: FUN_010b09e0
   Address: 010b09e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010b09e0(int param_1,double *param_2,double *param_3,undefined4 *param_4,int param_5,
                 int param_6)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  
  dVar1 = (double)(param_5 - (*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xc0)) / 2) /
          (double)((*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb8)) / 2);
  dVar2 = _DAT_011dbdc8;
  if ((_DAT_011dbdc8 <= dVar1) && (dVar2 = dVar1, _DAT_011dad58 < dVar1)) {
    dVar2 = _DAT_011dad58;
  }
  *param_2 = dVar2;
  dVar1 = (double)(param_6 - (*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4)) / 2) /
          (double)((*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xbc)) / 2);
  dVar2 = _DAT_011dbdc8;
  if ((_DAT_011dbdc8 <= dVar1) && (dVar2 = dVar1, _DAT_011dad58 < dVar1)) {
    dVar2 = _DAT_011dad58;
  }
  *param_3 = dVar2;
  uVar3 = FUN_010b00a0(param_1,param_5,param_6);
  *param_4 = uVar3;
  switch(uVar3) {
  case 0:
    *param_2 = *param_2 * _DAT_011e2ae0;
  case 1:
  case 2:
  case 5:
  case 6:
    *param_3 = *param_3 * _DAT_011e2ae0;
    return;
  case 3:
  case 4:
  case 7:
  case 8:
    *param_2 = *param_2 * _DAT_011e2ae0;
  default:
    return;
  }
}


