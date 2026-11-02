/* Module: vegas30k.dll
   Function: FUN_0105fae0
   Address: 0105fae0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_0105fae0(int *param_1)

{
  uint uVar1;
  HANDLE hFile;
  DWORD DStack_10;
  
  if (param_1[3] != 0) {
    return (uint)(param_1[4] == 0);
  }
  if (param_1[0x96] == -1) {
    DStack_10 = 0;
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0);
    if (-1 < (int)uVar1) {
      hFile = CreateFileA((LPCSTR)(param_1 + 0xe),
                          (-(uint)(param_1[6] != 0) & 0xc0000000) + 0xc0000000,
                          (-(uint)(param_1[7] != 0) & 2) + 1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,
                          (HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffff) {
        return 1;
      }
      param_1[0x96] = (int)hFile;
      ReadFile(hFile,param_1 + 0x97,0x40,&DStack_10,(LPOVERLAPPED)0x0);
      if (DStack_10 != 0x40) {
        return 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


