/* Module: vfplugs.dll
   Function: FUN_00406e80
   Address: 00406e80
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_00406e80(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    param_1[1] = 1;
    puVar4 = param_1 + 4;
    *param_1 = &PTR_FUN_00486e1c;
    FUN_00411130((int)puVar4);
    InterlockedDecrement(&DAT_0049453c);
    if ((LPCVOID)param_1[0x349] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x349]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x349]);
      GlobalFree(pvVar2);
      param_1[0x348] = 0;
      param_1[0x349] = 0;
    }
    if ((LPCVOID)param_1[0x299] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x299]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x299]);
      GlobalFree(pvVar2);
      param_1[0x298] = 0;
      param_1[0x299] = 0;
    }
    if ((LPCVOID)param_1[0x1e8] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x1e8]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0x1e8]);
      GlobalFree(pvVar2);
      param_1[0x1e7] = 0;
      param_1[0x1e8] = 0;
    }
    FUN_00403500((int)(param_1 + 0x89));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x83));
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = param_1 + 0x46;
    }
    *puVar3 = &PTR_LAB_00486e08;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = param_1 + 5;
    }
    FUN_00404940((int)puVar4);
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
  }
  return LVar1;
}


