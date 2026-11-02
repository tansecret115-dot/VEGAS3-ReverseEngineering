/* Module: sfpaplug.dll
   Function: FUN_0041b8b0
   Address: 0041b8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b8b0(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  
  hFile = param_1;
  FUN_0041b4d0(param_1);
  BVar1 = WriteFile(hFile,&stack0x00000008,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


