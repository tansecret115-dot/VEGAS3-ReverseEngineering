/* Module: wavplug.dll
   Function: FUN_5f38c4d0
   Address: 5f38c4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f38c4d0(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *local_4;
  
  *param_1 = (int)&PTR_LAB_5f3cad64;
  local_4 = param_1;
  FUN_5f38c790(param_1);
  if (param_1[0x96] != 0) {
    FUN_5f38d020(param_1,&local_4);
    iVar4 = 0;
    if (0 < (int)local_4) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(param_1[0x96] + 0x28 + iVar5);
        if (((iVar1 != 0) && (*(int *)(param_1[0x96] + iVar5) == 1)) &&
           (puVar3 = (undefined4 *)(iVar1 + -0xa8), puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x30;
      } while (iVar4 < (int)local_4);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x96]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x96]);
    GlobalFree(pvVar2);
    if ((LPCVOID)param_1[0x8c] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x8c]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x8c]);
      GlobalFree(pvVar2);
    }
  }
  if ((int *)param_1[0x97] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x97] + 0x20))(1);
  }
  return;
}


