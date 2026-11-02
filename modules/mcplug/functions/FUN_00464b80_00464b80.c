/* Module: mcplug.dll
   Function: FUN_00464b80
   Address: 00464b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00464b80(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  
  hFile = param_1;
  BVar1 = WriteFile(param_1,&stack0x00000008,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  BVar1 = WriteFile(hFile,&stack0x0000000c,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


