/* Module: hhupd.exe
   Function: FUN_01002245
   Address: 01002245
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_01002245(char *param_1)

{
  UINT UVar1;
  char local_108 [260];
  
  UVar1 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar1 == 0) {
    FUN_01003c23((HWND)0x0,0x4f0,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  return *param_1 == local_108[0];
}


