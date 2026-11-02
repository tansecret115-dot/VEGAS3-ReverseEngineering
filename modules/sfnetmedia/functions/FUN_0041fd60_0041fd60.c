/* Module: sfnetmedia.dll
   Function: FUN_0041fd60
   Address: 0041fd60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fd60(HWND param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  BYTE *pBVar2;
  uchar local_180 [64];
  _WIN32_FIND_DATAA local_140;
  
  if (*param_2 != '\0') {
    pvVar1 = FindFirstFileA(param_2,&local_140);
    if ((pvVar1 != (HANDLE)0xffffffff) && (((byte)local_140.dwFileAttributes & 0x10) == 0)) {
      local_180[0] = '\0';
      FUN_00414040(local_140.nFileSizeLow,local_140.nFileSizeHigh,local_180);
      if (&stack0x00000000 != (undefined1 *)0x180) {
        pBVar2 = FUN_00419120(DAT_00441d60,0x1143);
        FUN_00417320(param_1,pBVar2);
      }
    }
  }
  return;
}


