/* Module: rmto3260.dll
   Function: FUN_662c8040
   Address: 662c8040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c8040(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)&PTR_FUN_66306ea0;
  param_1[4] = (int)&PTR_LAB_66306e60;
  param_1[5] = (int)&PTR_LAB_66306e50;
  iVar2 = param_1[0x26] + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = *(int **)(param_1[0x25] + iVar2 * 4);
      FUN_662ed6b0(param_1 + 0x25,iVar2,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  FUN_662cafa0((int)param_1);
  FUN_662c80e0(param_1);
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1f] = 0;
  }
  piVar1 = (int *)param_1[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1e] = 0;
  }
  FUN_662ed460(param_1 + 0x25);
  *param_1 = (int)&PTR_FUN_66306400;
  return;
}


