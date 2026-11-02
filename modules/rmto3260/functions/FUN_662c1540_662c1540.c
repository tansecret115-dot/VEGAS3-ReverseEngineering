/* Module: rmto3260.dll
   Function: FUN_662c1540
   Address: 662c1540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662c1540(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_663062f8;
  param_1[4] = &PTR_LAB_66306258;
  param_1[5] = &PTR_LAB_66306230;
  param_1[6] = &PTR_LAB_66306220;
  iVar1 = param_1[0x1e];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(param_1[0x1d] + iVar1 * 4);
    FUN_662ed6b0(param_1 + 0x1d,iVar1,1);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)param_1[0x18];
  if (piVar2 != (int *)0x0) {
    FUN_662f06c0(piVar2);
    operator_delete(piVar2);
    param_1[0x18] = 0;
  }
  piVar2 = (int *)param_1[0x17];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x17] = 0;
  }
  piVar2 = (int *)param_1[0x1b];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x1b] = 0;
  }
  FUN_662c1600((int)param_1);
  piVar2 = (int *)param_1[0x1c];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x1c] = 0;
  }
  piVar2 = (int *)param_1[0x1a];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x1a] = 0;
  }
  FUN_662ed460(param_1 + 0x1d);
  *param_1 = &PTR_FUN_66306400;
  return;
}


