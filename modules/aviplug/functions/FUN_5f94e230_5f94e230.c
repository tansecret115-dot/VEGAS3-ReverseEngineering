/* Module: aviplug.dll
   Function: FUN_5f94e230
   Address: 5f94e230
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94e230(HANDLE param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  BOOL BVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  puVar2 = param_4;
  puVar4 = param_3;
  uVar1 = param_2;
  puVar6 = param_4;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_18 = param_3;
  SetFilePointer(param_1,param_2,(PLONG)&local_18,0);
  BVar3 = ReadFile(param_1,&local_c,0xc,(LPDWORD)&param_4,(LPOVERLAPPED)0x0);
  if ((BVar3 != 0) && ((uint *)0xb < param_4)) {
    if ((local_c != 0x5453494c) || (local_4 != 0x6c727473)) {
      return (uint *)0x80070057;
    }
    param_2 = 0x68727473;
    puVar4 = FUN_5f94e680(param_1,uVar1 + 0xc,(int)puVar4 + (uint)(0xfffffff3 < uVar1),
                          local_8 + uVar1 + 8,
                          (int)puVar4 +
                          (uint)(0xfffffff7 < local_8 + uVar1) + (uint)CARRY4(local_8,uVar1),
                          &param_2,1,&local_14);
    if (-1 < (int)puVar4) {
      puVar6 = param_3;
      if ((uint *)0x37 < param_3) {
        puVar6 = (uint *)0x38;
      }
      local_18 = (uint *)(local_10 + (uint)(0xfffffff7 < local_14));
      SetFilePointer(param_1,local_14 + 8,(PLONG)&local_18,0);
      BVar3 = ReadFile(param_1,puVar2 + 2,(DWORD)puVar6,(LPDWORD)&param_4,(LPOVERLAPPED)0x0);
      if (BVar3 == 0) {
        return (uint *)0x8004e008;
      }
      if (param_4 < puVar6) {
        return (uint *)0x8004e008;
      }
      *puVar2 = param_2;
      puVar2[1] = (uint)param_3;
    }
    return puVar4;
  }
  return (uint *)0x8004e008;
}


