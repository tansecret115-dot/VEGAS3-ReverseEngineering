/* Module: oggplug.dll
   Function: FUN_004073e0
   Address: 004073e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004073e0(int *param_1)

{
  undefined4 *pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_00447a28;
  FUN_00407b90(param_1);
  if ((LPCVOID)param_1[0xc4] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xc4]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xc4]);
    GlobalFree(pvVar2);
  }
  if ((HANDLE)param_1[0xca] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xca]);
  }
  if (param_1[0xd9] != 0) {
    local_8 = 0;
    if (0 < param_1[0xd2]) {
      local_4 = 0;
      do {
        pMem = (undefined4 *)((int *)(local_4 + param_1[0xd9]))[7];
        if (pMem != (undefined4 *)0x0) {
          if (*(int *)(local_4 + param_1[0xd9]) == 1) {
            if (pMem == (undefined4 *)0x0) goto LAB_0040747f;
            FUN_00408680(pMem);
          }
          pvVar2 = GlobalHandle(pMem);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(pMem);
          GlobalFree(pvVar2);
        }
LAB_0040747f:
        local_8 = local_8 + 1;
        local_4 = local_4 + 0x20;
      } while (local_8 < param_1[0xd2]);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xd9]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xd9]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[0xcf] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xcf]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xcf]);
    GlobalFree(pvVar2);
  }
  if ((int *)param_1[0xcc] != (int *)0x0) {
    FUN_00414010((int *)param_1[0xcc]);
    param_1[0xcc] = 0;
  }
  piVar1 = (int *)param_1[0xd7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0xd7] = 0;
  return;
}


