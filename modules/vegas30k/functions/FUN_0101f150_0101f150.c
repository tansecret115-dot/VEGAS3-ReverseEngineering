/* Module: vegas30k.dll
   Function: FUN_0101f150
   Address: 0101f150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0101f150(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  CHAR local_514 [259];
  undefined1 local_411;
  WCHAR local_410 [260];
  wchar_t local_208 [260];
  
  bVar1 = true;
  local_410[0] = L'\0';
  if (param_3 != 0) {
    FUN_0101d830(param_3,local_410,0x104);
    while (local_410[0] != L'\0') {
      if ((&stack0x00000000 == (undefined1 *)0x410) || (local_410[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_410,-1,local_514,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x514) {
        local_514[0] = '\0';
      }
      local_411 = 0;
      if (bVar1) {
        SfMEditPrintF(param_1,"\r\nFile Chain:\t%s",local_514);
        bVar1 = false;
      }
      else {
        SfMEditPrintF(param_1,&DAT_011db77c,local_514);
      }
      wcsncpy(local_208,local_410,0x104);
      local_410[0] = L'\0';
      if (param_2 == 0) {
        return;
      }
      FUN_0101d880(param_2,local_208,local_410,0x104);
    }
  }
  return;
}


