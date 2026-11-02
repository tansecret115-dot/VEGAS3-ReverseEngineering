/* Module: vegas30k.dll
   Function: _SfPlugIn_Grovel@16
   Address: 0102cef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfPlugIn_Grovel_16(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  HANDLE hEvent;
  LPCSTR local_10c;
  undefined1 local_108 [4];
  CHAR local_104 [259];
  undefined1 local_1;
  
                    /* 0x2cef0  1159  _SfPlugIn_Grovel@16 */
  hEvent = (HANDLE)0x0;
  CoInitialize((LPVOID)0x0);
  local_10c = (LPCSTR)0x0;
  uVar1 = _SfTextToLongToken_8(param_3,&local_10c);
  if (local_10c != (LPCSTR)0x0) {
    lstrcpynA(local_104,local_10c,0x104);
    local_1 = 0;
    _SfStripWhiteSpace_4(local_104);
    hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_104);
    if (hEvent == (HANDLE)0xffffffff) {
      hEvent = (HANDLE)0x0;
    }
  }
  iVar2 = _SfPlugIn_CreateList_12(local_108,0xff00000b,uVar1);
  if (iVar2 != 0) {
    _SfPlugIn_FreeList_4(iVar2);
  }
  if (hEvent != (HANDLE)0x0) {
    SetEvent(hEvent);
    CloseHandle(hEvent);
  }
  CoUninitialize();
  return 0;
}


