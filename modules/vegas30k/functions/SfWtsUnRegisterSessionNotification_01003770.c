/* Module: vegas30k.dll
   Function: SfWtsUnRegisterSessionNotification
   Address: 01003770
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWtsUnRegisterSessionNotification(struct HWND__ *) */

long SfWtsUnRegisterSessionNotification(HWND__ *param_1)

{
  int iVar1;
  FARPROC pFVar2;
  long lVar3;
  
                    /* 0x3770  528  ?SfWtsUnRegisterSessionNotification@@YGJPAUHWND__@@@Z */
  lVar3 = 0;
  iVar1 = _SfOSVersionOK_4(6);
  if (iVar1 == 0) {
    return 1;
  }
  if (DAT_0120914c != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(DAT_0120914c,"WTSUnRegisterSessionNotification");
    if ((pFVar2 == (FARPROC)0x0) || (iVar1 = (*pFVar2)(param_1), iVar1 == 0)) {
      lVar3 = -0x7fffbffb;
    }
    FreeLibrary(DAT_0120914c);
    DAT_0120914c = (HMODULE)0x0;
    return lVar3;
  }
  return 0;
}


