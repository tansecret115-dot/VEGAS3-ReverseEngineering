/* Module: sfnetmedia.dll
   Function: FUN_00420050
   Address: 00420050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00420050(HWND param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  CHAR local_514 [259];
  undefined1 local_411;
  WCHAR local_410 [260];
  wchar_t local_208 [260];
  
  bVar1 = true;
  local_410[0] = L'\0';
  if (param_3 != (undefined4 *)0x0) {
    FUN_0041e730(param_3);
    while (local_410[0] != L'\0') {
      if ((&stack0x00000000 == (undefined1 *)0x410) || (local_410[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_410,-1,local_514,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x514) {
        local_514[0] = '\0';
      }
      local_411 = 0;
      if (bVar1) {
        FUN_00417320(param_1,"\r\nFile Chain:\t%s");
        bVar1 = false;
      }
      else {
        FUN_00417320(param_1,"\t\t%s");
      }
      wcsncpy(local_208,local_410,0x104);
      local_410[0] = L'\0';
      if (param_2 == (int *)0x0) {
        return;
      }
      FUN_0041e780(param_2,local_208,local_410);
    }
  }
  return;
}


