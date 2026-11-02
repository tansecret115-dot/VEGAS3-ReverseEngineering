/* Module: rmbe3260.dll
   Function: FUN_66013ba0
   Address: 66013ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66013ba0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int local_18 [3];
  int *local_c;
  int local_8;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_66064ea0;
  param_1[4] = &PTR_LAB_66064e88;
  if (0 < (int)param_1[6]) {
    do {
      piVar1 = *(int **)(param_1[5] + iVar2 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[6]);
  }
  FUN_6605cdc0(param_1 + 5,0,0xffffffff);
  iVar2 = 0;
  if (0 < (int)param_1[10]) {
    do {
      piVar1 = *(int **)(param_1[9] + iVar2 * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[10]);
  }
  FUN_6605cdc0(param_1 + 9,0,0xffffffff);
  local_8 = -(uint)(param_1[0xf] != 0);
  FUN_6605b650(local_18);
  if (local_8 != 0) {
    do {
      FUN_6605cd20(param_1 + 0xd,&local_8,local_18,&local_c);
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
      }
    } while (local_8 != 0);
  }
  FUN_6605c880(param_1 + 0xd);
  piVar1 = (int *)param_1[0xc4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc4] = 0;
  }
  DAT_660750a4 = 0;
  FUN_6605b770(local_18);
  FUN_66010dc0(param_1 + 0x14);
  thunk_FUN_6605c880(param_1 + 0xd);
  FUN_6605cdb0(param_1 + 9);
  FUN_6605cdb0(param_1 + 5);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


