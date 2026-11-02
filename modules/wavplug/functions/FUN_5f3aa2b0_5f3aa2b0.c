/* Module: wavplug.dll
   Function: FUN_5f3aa2b0
   Address: 5f3aa2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3aa2b0(HANDLE param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  bool bVar2;
  uint in_stack_00000018;
  int in_stack_0000001c;
  
  hFile = param_1;
  BVar1 = WriteFile(param_1,&stack0x00000008,0x10,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return -0x7ffb1ff7;
  }
  bVar2 = 0xffffffe7 < in_stack_00000018;
  in_stack_00000018 = in_stack_00000018 + 0x18;
  in_stack_0000001c = in_stack_0000001c + (uint)bVar2;
  BVar1 = WriteFile(hFile,&stack0x00000018,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return (-(uint)(BVar1 != 0) & 0x7ffb1ff7) + 0x8004e009;
}


