/* Module: rmto3260.dll
   Function: FUN_662c5a50
   Address: 662c5a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c5a50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_66306de0;
  param_1[4] = &PTR_LAB_66306da0;
  param_1[5] = &PTR_LAB_66306d90;
  iVar2 = *(int *)((int)param_1 + 0x56) + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)((int)param_1 + 0x52) + iVar2 * 4);
      FUN_662ed6b0((int *)((int)param_1 + 0x52),iVar2,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  piVar1 = (int *)param_1[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc] = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x42);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  FUN_662c5b00((int)param_1);
  piVar1 = *(int **)((int)param_1 + 0x4e);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x4e) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x4a);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
  }
  FUN_662ed460((undefined4 *)((int)param_1 + 0x52));
  *param_1 = &PTR_FUN_66306400;
  return;
}


