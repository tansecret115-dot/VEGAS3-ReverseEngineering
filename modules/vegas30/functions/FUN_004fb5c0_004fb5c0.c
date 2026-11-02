/* Module: vegas30.exe
   Function: FUN_004fb5c0
   Address: 004fb5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fb5c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPCWSTR local_108;
  CHAR local_104 [259];
  undefined1 local_1;
  
  StringFromCLSID(*(IID **)(param_1 + 4),&local_108);
  if ((local_108 == (LPCWSTR)0x0) || (*local_108 != L'\0')) {
    WideCharToMultiByte(0,0,local_108,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else if (&stack0x00000000 != (undefined1 *)0x104) {
    local_104[0] = '\0';
  }
  local_1 = 0;
  CoTaskMemFree(local_108);
  FUN_005f55e0(local_104,param_2,param_3,param_4,1);
  return;
}


