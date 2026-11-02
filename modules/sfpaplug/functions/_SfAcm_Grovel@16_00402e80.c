/* Module: sfpaplug.dll
   Function: _SfAcm_Grovel@16
   Address: 00402e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfAcm_Grovel_16(undefined4 param_1,undefined4 param_2,LPCSTR param_3)

{
  HANDLE hEvent;
  uint local_4;
  
                    /* 0x2e80  9  _SfAcm_Grovel@16 */
  hEvent = (HANDLE)0x0;
  local_4 = 0;
  CoInitialize((LPVOID)0x0);
  if (param_3 != (LPCSTR)0x0) {
    hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,param_3);
    if (hEvent == (HANDLE)0xffffffff) {
      hEvent = (HANDLE)0x0;
    }
  }
  FUN_00402ab0((LPCSTR)0x0,&local_4);
  if (hEvent != (HANDLE)0x0) {
    SetEvent(hEvent);
    CloseHandle(hEvent);
  }
  CoUninitialize();
  return 0;
}


