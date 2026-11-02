/* Module: qt4plug.dll
   Function: FUN_5f580430
   Address: 5f580430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f580430(void)

{
  HANDLE hHandle;
  
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,s_QTMLInitTermMutex_5f5a3e3c);
  if (hHandle != (HANDLE)0x0) {
    WaitForSingleObject(hHandle,0xffffffff);
  }
  if (DAT_5f5c9680 < 1) {
    DAT_5f5c9680 = 0;
  }
  else {
    DAT_5f5c9680 = DAT_5f5c9680 + -1;
    if (DAT_5f5c9680 < 1) {
      thunk_FUN_5f578f90();
      PTR_FUN_5f5a3dcc = &LAB_5f5803c0;
      PTR_LAB_5f5a3dd4 = &LAB_5f580050;
      PTR_LAB_5f5a3dd8 = &LAB_5f580050;
      PTR_LAB_5f5a3dd0 = &LAB_5f580050;
      FreeLibrary(DAT_5f5c9684);
    }
  }
  if (hHandle != (HANDLE)0x0) {
    ReleaseMutex(hHandle);
    CloseHandle(hHandle);
  }
  return;
}


