/* Module: aviplug.dll
   Function: FUN_5f94e5c0
   Address: 5f94e5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_5f94e5c0(HANDLE param_1)

{
  HANDLE hFile;
  uint *puVar1;
  BOOL BVar2;
  uint local_24;
  int local_20;
  DWORD local_1c;
  int local_18;
  int local_14;
  int local_10 [3];
  undefined4 local_4;
  
  hFile = param_1;
  puVar1 = FUN_5f94dda0(param_1,(uint *)0x0,&local_24,(int *)&local_1c);
  if (-1 < (int)puVar1) {
    local_10[1] = 0x5453494c;
    local_4 = 0x6c6d646f;
    puVar1 = FUN_5f94e820(hFile,local_24 + 0xc,local_20 + (uint)(0xfffffff3 < local_24),local_1c,
                          local_18,local_10 + 1,&local_24);
    if (-1 < (int)puVar1) {
      local_14 = local_24 + 0xc;
      local_10[0] = local_20 + (uint)(0xfffffff3 < local_24);
      SetFilePointer(hFile,local_14,local_10,0);
      BVar2 = ReadFile(hFile,local_10 + 1,0xc,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      if ((BVar2 != 0) && ((HANDLE)0xb < param_1)) {
        return local_4;
      }
    }
  }
  return 0xffffffff;
}


