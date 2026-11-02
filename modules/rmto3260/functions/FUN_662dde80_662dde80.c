/* Module: rmto3260.dll
   Function: FUN_662dde80
   Address: 662dde80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662dde80(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  param_1[-1] = &PTR_FUN_663075e0;
  *param_1 = &PTR_LAB_66307600;
  iVar2 = param_1[5] + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = *(int **)(param_1[4] + iVar2 * 4);
      FUN_662ed6b0(param_1 + 4,iVar2,1);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  FUN_662ed460(param_1 + 4);
  *(undefined ***)(-(uint)(param_1 + -1 != (undefined4 *)0x0) & (uint)param_1) = &PTR_FUN_66306400;
  return;
}


