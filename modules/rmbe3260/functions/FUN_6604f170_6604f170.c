/* Module: rmbe3260.dll
   Function: FUN_6604f170
   Address: 6604f170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604f170(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_66068710;
  param_1[4] = &PTR_LAB_660686f8;
  if (0 < (int)param_1[6]) {
    do {
      piVar1 = *(int **)(param_1[5] + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[6]);
  }
  FUN_6605cdc0(param_1 + 5,0,0xffffffff);
  FUN_6605cdb0(param_1 + 5);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


