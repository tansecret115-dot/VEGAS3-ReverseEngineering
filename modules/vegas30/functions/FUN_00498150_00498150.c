/* Module: vegas30.exe
   Function: FUN_00498150
   Address: 00498150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498150(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  
  dVar2 = *(double *)(param_1 + 0x28) / (double)CONCAT44(param_3,param_2);
  if (param_4 != 0) {
    FUN_005c7bd0(param_1,param_2,param_3,0);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 != 0) {
      uVar3 = ftol();
      *(undefined8 *)(iVar1 + 8) = uVar3;
    }
    if ((_DAT_00611ea8 <= *(double *)(param_1 + 0x28)) &&
       (*(double *)(param_1 + 0x28) <= _DAT_00613248)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0x3ff00000;
    }
  }
  uVar3 = ftol();
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = ftol();
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  FUN_00477d70(param_1 + 0x98,dVar2);
  if (*(int *)(param_1 + 4) == 3) {
    if (*(int *)(param_1 + 0x140) != 0) {
      FUN_0044ad60(*(int *)(param_1 + 0x140),dVar2);
    }
    FUN_0050b580(param_1 + 0x144,dVar2);
  }
  return;
}


