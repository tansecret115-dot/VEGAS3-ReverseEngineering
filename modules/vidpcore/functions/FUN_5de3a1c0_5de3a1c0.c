/* Module: vidpcore.dll
   Function: FUN_5de3a1c0
   Address: 5de3a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5de3a1c0(undefined4 *param_1)

{
  LONG LVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    param_1[1] = 1;
    *param_1 = &PTR_FUN_5df1aa6c;
    FUN_5de8cdf0();
    InterlockedDecrement(&DAT_5df42794);
    if ((LPCVOID)param_1[0xef] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0xef]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0xef]);
      GlobalFree(pvVar2);
      param_1[0xee] = 0;
      param_1[0xef] = 0;
    }
    if ((LPCVOID)param_1[0xce] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0xce]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0xce]);
      GlobalFree(pvVar2);
      param_1[0xcd] = 0;
      param_1[0xce] = 0;
    }
    if ((LPCVOID)param_1[0xac] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)param_1[0xac]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)param_1[0xac]);
      GlobalFree(pvVar2);
      param_1[0xab] = 0;
      param_1[0xac] = 0;
    }
    FUN_5de29180();
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x65));
    if (param_1 == (undefined4 *)0xfffffff0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = param_1 + 0x46;
    }
    *puVar3 = &PTR_LAB_5df186b8;
    FUN_5de29160();
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
  }
  return LVar1;
}


