/* Module: vegas30k.dll
   Function: SfWtsRegisterSessionNotification
   Address: 01003680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWtsRegisterSessionNotification(struct HWND__ *,unsigned long) */

long SfWtsRegisterSessionNotification(HWND__ *param_1,ulong param_2)

{
  int iVar1;
  UINT uMode;
  FARPROC pFVar2;
  long lVar3;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x3680  527  ?SfWtsRegisterSessionNotification@@YGJPAUHWND__@@K@Z */
  local_8 = 0xffffffff;
  puStack_c = &DAT_011daf68;
  puStack_10 = &DAT_011d81dc;
  local_14 = ExceptionList;
  lVar3 = 0;
  ExceptionList = &local_14;
  iVar1 = _SfOSVersionOK_4(6);
  if (iVar1 == 0) {
    lVar3 = 1;
  }
  else {
    DAT_0120914c = (HMODULE)0x0;
    local_8 = 0;
    uMode = SetErrorMode(0x8001);
    DAT_0120914c = LoadLibraryA("wtsapi32.dll");
    SetErrorMode(uMode);
    if (DAT_0120914c < (HMODULE)0x20) {
      DAT_0120914c = (HMODULE)0x0;
      lVar3 = -0x7ffb1f2c;
    }
    if ((-1 < lVar3) &&
       ((pFVar2 = GetProcAddress(DAT_0120914c,"WTSRegisterSessionNotification"),
        pFVar2 == (FARPROC)0x0 || (iVar1 = (*pFVar2)(param_1,param_2), iVar1 == 0)))) {
      lVar3 = -0x7fffbffb;
    }
  }
  ExceptionList = local_14;
  return lVar3;
}


