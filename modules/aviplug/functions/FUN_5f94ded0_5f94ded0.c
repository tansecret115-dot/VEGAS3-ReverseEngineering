/* Module: aviplug.dll
   Function: FUN_5f94ded0
   Address: 5f94ded0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94ded0(HANDLE param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  BOOL BVar3;
  int iVar4;
  uint *nNumberOfBytesToRead;
  uint local_20;
  int local_1c;
  uint local_18;
  uint *local_14;
  DWORD local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  puVar1 = param_2;
  puVar2 = param_2;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = FUN_5f94dda0(param_1,(uint *)0x0,&local_20,(int *)&local_10);
  if (-1 < (int)puVar2) {
    local_18 = 0x68697661;
    puVar2 = FUN_5f94e680(param_1,local_20 + 0xc,local_1c + (uint)(0xfffffff3 < local_20),local_10,
                          local_c,&local_18,1,&local_20);
    if ((int)puVar2 < 0) {
      if (puVar2 == (uint *)0x8004e00a) {
        return (uint *)0x8004e00b;
      }
    }
    else {
      nNumberOfBytesToRead = local_14;
      if ((uint *)0x37 < local_14) {
        nNumberOfBytesToRead = (uint *)0x38;
      }
      local_8 = local_20 + 8;
      local_4 = local_1c + (uint)(0xfffffff7 < local_20);
      SetFilePointer(param_1,local_8,&local_4,0);
      BVar3 = ReadFile(param_1,puVar1 + 2,(DWORD)nNumberOfBytesToRead,(LPDWORD)&param_2,
                       (LPOVERLAPPED)0x0);
      if ((BVar3 == 0) || (param_2 < nNumberOfBytesToRead)) {
        return (uint *)0x8004e008;
      }
      *puVar1 = local_18;
      puVar1[1] = (uint)local_14;
    }
  }
  return puVar2;
}


