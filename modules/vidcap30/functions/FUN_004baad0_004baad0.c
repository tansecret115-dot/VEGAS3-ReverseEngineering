/* Module: vidcap30.exe
   Function: FUN_004baad0
   Address: 004baad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004baad0(undefined4 param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA local_140;
  
  if (*param_2 != '\0') {
    pvVar1 = FindFirstFileA(param_2,&local_140);
    if ((pvVar1 != (HANDLE)0xffffffff) && (((byte)local_140.dwFileAttributes & 0x10) == 0)) {
      _SfGetByteSizeText_12();
      if (&stack0x00000000 != (undefined1 *)0x180) {
        _SfGetString2_8();
        SfMEditPrintF();
      }
    }
  }
  return;
}


