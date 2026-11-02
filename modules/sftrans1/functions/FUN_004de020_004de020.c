/* Module: sftrans1.dll
   Function: FUN_004de020
   Address: 004de020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004de020(undefined4 param_1,int *param_2,uint *param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 local_48;
  int local_44;
  uint local_40 [16];
  
  puVar7 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar2 = 0;
  local_40[1] = 0xffffffff;
  local_40[3] = 0xffffffff;
  uVar5 = 0;
  local_40[0xc] = 0;
  iVar6 = 0;
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
    uVar5 = 1;
    break;
  case 0x12:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
    uVar5 = 2;
    break;
  case 0x13:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
  case 0x17:
    uVar5 = 4;
    break;
  case 0x14:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
  case 0x18:
    uVar5 = 8;
    break;
  case 0x15:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
    uVar5 = 0x10;
    break;
  case 0x16:
    iVar2 = 0x53474653;
    local_40[1] = 0x1000;
    uVar5 = 0x20;
    break;
  case 0x1a:
    iVar6 = 5;
    iVar2 = 3;
    local_48 = 5;
    local_44 = 6;
  case 0x19:
    uVar5 = 0x10;
    break;
  case 0x1b:
    uVar5 = 0x18;
    break;
  case 0x1d:
    iVar2 = 0x42444653;
    uVar5 = 0x20;
    break;
  case 0x1e:
    iVar6 = 10;
    iVar2 = 3;
    local_48 = 10;
    local_44 = 10;
  case 0x1c:
    uVar5 = 0x20;
    break;
  case 0x1f:
    iVar2 = 0x42444653;
    uVar5 = 0x40;
    break;
  case 0x20:
    iVar2 = 0x42444653;
    uVar5 = 0x80;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (param_3 != (uint *)0x0) {
    if (param_4 < 0x40) {
      uVar5 = 0;
    }
    else {
      uVar3 = 0x40;
      if (param_4 < 0x40) {
        uVar3 = param_4;
      }
      puVar7 = local_40;
      puVar8 = param_3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar8 = (char)*puVar7;
        puVar7 = (uint *)((int)puVar7 + 1);
        puVar8 = (uint *)((int)puVar8 + 1);
      }
      *param_3 = uVar3;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    if (iVar2 != 3) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      return uVar5;
    }
    uVar1 = FUN_004ddb60(local_44 + iVar6,local_48);
    *param_5 = uVar1;
    uVar1 = FUN_004ddb60(iVar6,local_44);
    param_5[1] = uVar1;
    uVar1 = FUN_004ddb60(0,iVar6);
    param_5[2] = uVar1;
  }
  return uVar5;
}


