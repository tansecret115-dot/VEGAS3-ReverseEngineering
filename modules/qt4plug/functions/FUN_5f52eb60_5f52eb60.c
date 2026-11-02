/* Module: qt4plug.dll
   Function: FUN_5f52eb60
   Address: 5f52eb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f52eb60(undefined4 param_1,int *param_2,uint *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int local_48;
  int local_44;
  uint local_40 [16];
  
  puVar6 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar2 = 0;
  local_40[1] = 0xffffffff;
  local_40[3] = 0xffffffff;
  uVar4 = 0;
  local_40[0xc] = 0;
  iVar5 = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_48 = 0;
  local_40[0xf] = 0;
  local_44 = 0;
  local_40[0] = 0x40;
  local_40[2] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0x3ff00000;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  switch(param_1) {
  case 0x11:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
  case 0x10:
    uVar4 = 1;
    break;
  case 0x12:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
    uVar4 = 2;
    break;
  case 0x13:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
  case 0x17:
    uVar4 = 4;
    break;
  case 0x14:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
  case 0x18:
    uVar4 = 8;
    break;
  case 0x15:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
    uVar4 = 0x10;
    break;
  case 0x16:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
    uVar4 = 0x20;
    break;
  case 0x1a:
    iVar5 = 5;
    iVar2 = 3;
    local_48 = 5;
    local_44 = 6;
  case 0x19:
    uVar4 = 0x10;
    break;
  case 0x1b:
    uVar4 = 0x18;
    break;
  case 0x1d:
    iVar2 = 0x42444653;
    uVar4 = 0x20;
    break;
  case 0x1e:
    iVar5 = 10;
    iVar2 = 3;
    local_48 = 10;
    local_44 = 10;
  case 0x1c:
    uVar4 = 0x20;
    break;
  case 0x1f:
    iVar2 = 0x42444653;
    uVar4 = 0x40;
    break;
  case 0x20:
    iVar2 = 0x42444653;
    uVar4 = 0x80;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (param_3 != (uint *)0x0) {
    if (param_4 < 0x40) {
      uVar4 = 0;
    }
    else {
      uVar1 = 0x40;
      if (param_4 < 0x40) {
        uVar1 = param_4;
      }
      puVar6 = local_40;
      puVar7 = param_3;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar7 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
      *param_3 = uVar1;
    }
  }
  if (param_5 != (uint *)0x0) {
    if (iVar2 != 3) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      return uVar4;
    }
    uVar1 = FUN_5f52e6a0(local_44 + iVar5,local_48);
    *param_5 = uVar1;
    uVar1 = FUN_5f52e6a0(iVar5,local_44);
    param_5[1] = uVar1;
    uVar1 = FUN_5f52e6a0(0,iVar5);
    param_5[2] = uVar1;
  }
  return uVar4;
}


