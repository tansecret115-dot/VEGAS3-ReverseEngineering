/* Module: mp3plug.dll
   Function: FUN_5f698050
   Address: 5f698050
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f698050(int *param_1)

{
  undefined4 *pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  int local_c;
  int local_8;
  int local_4;
  
  *param_1 = (int)&PTR_LAB_5f72d2c0;
  FUN_5f698e50(param_1);
  if ((HANDLE)param_1[0x1a] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x1a]);
  }
  if (param_1[0x6f] != 0) {
    FUN_5f6995f0((int)param_1,&local_4);
    local_8 = 0;
    if (0 < local_4) {
      local_c = 0;
      do {
        pMem = *(undefined4 **)(param_1[0x6f] + 0x1c + local_c);
        if (pMem != (undefined4 *)0x0) {
          if (*(int *)(param_1[0x6f] + local_c) == 1) {
            if (pMem == (undefined4 *)0x0) goto LAB_5f6980df;
            FUN_5f699850(pMem);
          }
          pvVar2 = GlobalHandle(pMem);
          GlobalUnlock(pvVar2);
          pvVar2 = GlobalHandle(pMem);
          GlobalFree(pvVar2);
        }
LAB_5f6980df:
        local_8 = local_8 + 1;
        local_c = local_c + 0x20;
      } while (local_8 < local_4);
    }
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x6f]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x6f]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[100] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[100]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[100]);
    GlobalFree(pvVar2);
  }
  piVar1 = (int *)param_1[0x6d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x6d] = 0;
  return;
}


