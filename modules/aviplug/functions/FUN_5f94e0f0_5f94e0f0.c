/* Module: aviplug.dll
   Function: FUN_5f94e0f0
   Address: 5f94e0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94e0f0(HANDLE param_1,uint param_2,uint param_3,uint param_4,uint *param_5,
                   uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  BOOL BVar4;
  uint *puVar5;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar3 = param_6;
  uVar2 = param_3;
  uVar1 = param_2;
  *param_6 = 0xffffffff;
  param_6[1] = 0xffffffff;
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  local_c = param_3;
  SetFilePointer(param_1,param_2,(PLONG)&local_c,0);
  BVar4 = ReadFile(param_1,&param_2,8,(LPDWORD)&param_6,(LPOVERLAPPED)0x0);
  if ((BVar4 == 0) || (param_6 < (uint *)0x8)) {
    puVar5 = (uint *)0x8004e008;
  }
  else {
    param_2 = param_4;
    puVar5 = FUN_5f94e680(param_1,uVar1 + 0xc,uVar2 + (0xfffffff3 < uVar1),param_3 + uVar1 + 8,
                          uVar2 + CARRY4(param_3,uVar1) + (uint)(0xfffffff7 < param_3 + uVar1),
                          &param_2,1,&local_8);
    if (-1 < (int)puVar5) {
      *puVar3 = local_8;
      puVar3[1] = local_4;
      if (param_5 != (uint *)0x0) {
        *param_5 = param_3;
        return puVar5;
      }
    }
  }
  return puVar5;
}


