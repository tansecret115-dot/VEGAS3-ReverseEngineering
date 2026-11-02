/* Module: aviplug.dll
   Function: FUN_5f94dda0
   Address: 5f94dda0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94dda0(HANDLE param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  BOOL BVar4;
  uint *puVar5;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  LONG local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  piVar3 = param_4;
  puVar2 = param_3;
  puVar1 = param_2;
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffffffff;
    param_3[1] = 0xffffffff;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
    param_4[1] = -1;
  }
  local_14 = 0;
  local_10 = 0;
  SetFilePointer(param_1,0,&local_10,0);
  BVar4 = ReadFile(param_1,&local_c,0xc,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if ((BVar4 == 0) || (param_2 < (uint *)0xc)) {
    puVar5 = (uint *)0x8004e008;
  }
  else {
    if ((local_c != 0x46464952) || (local_4 != 0x20495641)) {
      return (uint *)0x8004e00b;
    }
    local_1c = local_8 + 8;
    local_18 = 0;
    local_c = 0x5453494c;
    local_4 = 0x6c726468;
    puVar5 = FUN_5f94e820(param_1,0xc,0,local_1c,0,&local_c,&local_1c);
    if ((int)puVar5 < 0) {
      if (puVar5 == (uint *)0x8004e00a) {
        return (uint *)0x8004e00b;
      }
    }
    else {
      if (puVar1 != (uint *)0x0) {
        *puVar1 = local_8;
      }
      if (puVar2 != (uint *)0x0) {
        *puVar2 = local_1c;
        puVar2[1] = local_18;
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = local_8 + local_1c + 8;
        piVar3[1] = local_18 + CARRY4(local_8,local_1c) + (uint)(0xfffffff7 < local_8 + local_1c);
        return puVar5;
      }
    }
  }
  return puVar5;
}


