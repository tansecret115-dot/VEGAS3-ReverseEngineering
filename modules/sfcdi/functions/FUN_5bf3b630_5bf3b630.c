/* Module: sfcdi.dll
   Function: FUN_5bf3b630
   Address: 5bf3b630
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf3b630(uint *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_7c;
  int local_78 [10];
  uchar local_50 [80];
  
  piVar2 = local_78;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_78[2] = param_3 / 0x24c;
  local_78[3] = param_4 / 0x24c;
  local_78[0] = 3;
  piVar2 = FUN_5bf3b5f0((int *)param_1);
  if (piVar2 == (int *)0x0) {
    local_78[1] = 1;
  }
  else {
    if (0x62 < (uint)piVar2[1]) {
      return 0xffffffff;
    }
    local_78[1] = piVar2[1] + 1;
  }
  if (param_2 == (uchar *)0x0) {
    FUN_5bf395a0(local_78,local_50);
    param_2 = local_50;
  }
  if (param_5 != 0) {
    if (param_1 == (uint *)0x0) {
      local_7c = 0;
    }
    else {
      local_7c = *param_1;
    }
    iVar4 = 0;
    if (0 < (int)local_7c) {
      do {
        iVar1 = *(int *)(param_1[2] + iVar4 * 4);
        uVar3 = *(uint *)(iVar1 + 8);
        if ((uint)local_78[2] <= uVar3) {
          *(uint *)(iVar1 + 8) = uVar3 + param_5 / 0x24c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_7c);
    }
  }
  uVar3 = FUN_5bf397a0((int *)param_1,local_78,param_2);
  if (local_7c != uVar3) {
    FUN_5bf39690(param_1);
  }
  return uVar3;
}


