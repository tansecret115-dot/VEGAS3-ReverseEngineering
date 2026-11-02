/* Module: rmto3260.dll
   Function: FUN_662dc7b0
   Address: 662dc7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662dc7b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_663074e8;
  param_1[4] = &PTR_LAB_663074b8;
  param_1[5] = &PTR_LAB_66307418;
  iVar3 = param_1[0x14] + -1;
  if (-1 < iVar3) {
    do {
      piVar1 = *(int **)(param_1[0x13] + iVar3 * 4);
      FUN_662ed6b0(param_1 + 0x13,iVar3,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  puVar2 = (undefined4 *)param_1[0x12];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_662f5c80(puVar2);
    operator_delete(puVar2);
    param_1[0x12] = 0;
  }
  piVar1 = (int *)param_1[0x10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x10] = 0;
  }
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xf] = 0;
  }
  piVar1 = (int *)param_1[0x11];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x11] = 0;
  }
  FUN_662ed460(param_1 + 0x13);
  FUN_662ef0f0(param_1 + 6);
  *param_1 = &PTR_FUN_66306400;
  return;
}


