/* Module: vegas30.exe
   Function: FUN_005f9880
   Address: 005f9880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005f9880(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = &PTR_FUN_0062d07c;
  param_1[1] = &PTR_LAB_0062d068;
  param_1[2] = &PTR_LAB_0062d040;
  if ((int *)param_1[5] == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)param_1[5];
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(param_1[5] + 8);
      iVar5 = *(int *)(param_1[5] + 4) * iVar3;
      piVar2 = *(int **)(iVar5 + 8 + iVar1);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = *(int **)(iVar5 + iVar1 + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  if (param_1[5] != 0) {
    _SfList_Destroy_4(param_1[5]);
    param_1[5] = 0;
  }
  piVar2 = (int *)param_1[0x4a];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x4a] = 0;
  }
  return;
}


