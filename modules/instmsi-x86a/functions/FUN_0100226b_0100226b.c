/* Module: InstMsi-x86a.exe
   Function: FUN_0100226b
   Address: 0100226b
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0100226b(char *param_1)

{
  UINT UVar1;
  char local_108 [260];
  
  UVar1 = GetWindowsDirectoryA(local_108,0x104);
  if (UVar1 == 0) {
    FUN_01003cb8((HWND)0x0,0x4f0,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  return *param_1 == local_108[0];
}


