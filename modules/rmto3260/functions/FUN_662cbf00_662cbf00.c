/* Module: rmto3260.dll
   Function: FUN_662cbf00
   Address: 662cbf00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662cbf00(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_66306f80;
  param_1[4] = &PTR_LAB_66306f30;
  iVar2 = param_1[0xd] + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = *(int **)(param_1[0xc] + iVar2 * 4);
      FUN_662ed6b0(param_1 + 0xc,iVar2,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    FUN_662f06c0(piVar1);
    operator_delete(piVar1);
    param_1[10] = 0;
  }
  FUN_662cbf90((int)param_1);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xb] = 0;
  }
  FUN_662ed460(param_1 + 0xc);
  *param_1 = &PTR_FUN_66306400;
  return;
}


