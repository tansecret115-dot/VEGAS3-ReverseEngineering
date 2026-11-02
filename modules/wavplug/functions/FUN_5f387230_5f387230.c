/* Module: wavplug.dll
   Function: FUN_5f387230
   Address: 5f387230
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f387230(int *param_1)

{
  LPCWSTR lpWideCharStr;
  HANDLE pvVar1;
  CHAR local_104 [259];
  undefined1 local_1;
  
  if (param_1[0x86] == -1) {
    if ((param_1[0x87] == 0) && (param_1[0x85] != -1)) {
      lpWideCharStr = (LPCWSTR)(param_1 + 2);
      if ((lpWideCharStr == (LPCWSTR)0x0) || (*lpWideCharStr != L'\0')) {
        WideCharToMultiByte(0,0,lpWideCharStr,-1,local_104,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x104) {
        local_104[0] = '\0';
      }
      local_1 = 0;
      pvVar1 = CreateFileA(local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x68000000,
                           (HANDLE)0x0);
      param_1[0x86] = (int)pvVar1;
      param_1[0x87] = 1;
    }
    if (param_1[0x86] == -1) goto LAB_5f3872e1;
  }
  (**(code **)(*param_1 + 4))(param_1);
  InterlockedIncrement(param_1 + 0x88);
LAB_5f3872e1:
  return param_1[0x86];
}


