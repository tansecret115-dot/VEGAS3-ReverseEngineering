/* Module: vegas30.exe
   Function: FUN_004ea590
   Address: 004ea590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ea590(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint local_20 [5];
  undefined4 local_c;
  undefined4 local_4;
  
  iVar2 = -0x7fffbffb;
  iVar1 = FUN_005b8630(param_1);
  if (*(char *)(iVar1 + 0x1d0) != '\x01') goto LAB_004ea644;
  uVar3 = param_4 << 0x18 | param_3;
  iVar2 = FUN_005b46a0(*(undefined4 *)(iVar1 + 0x3c4),uVar3,param_2);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = FUN_005b46f0(iVar1 + 0x3c4,uVar3,param_2);
  if (iVar2 < 0) goto LAB_004ea644;
  puVar4 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  switch(param_4) {
  case 0x16:
    local_20[3] = 0;
    goto LAB_004ea626;
  case 0x17:
    local_20[0] = 0x6c62786d;
    local_20[3] = 0;
    local_4 = 0;
    break;
  case 0x18:
    local_20[3] = 0;
    local_20[0] = 0x6c62786d;
    local_4 = 1;
    break;
  case 0x19:
  case 0x1f:
    local_20[3] = 2;
LAB_004ea626:
    local_20[0] = 0x2062786d;
    local_4 = 0;
    break;
  case 0x1a:
  case 0x20:
    local_4 = 0;
    local_20[0] = 0x2062786d;
    local_20[3] = 1;
    break;
  default:
    FUN_004ea010(iVar1,0x80004005);
    return -0x7fffbffb;
  case 0x1d:
    local_20[0] = 0x6772786d;
    local_4 = 0;
  }
  local_c = param_2;
  local_20[4] = param_3;
  iVar2 = FUN_005b5820(local_20);
  if (iVar2 < 0) {
LAB_004ea644:
    FUN_004ea010(iVar1,iVar2);
  }
  return iVar2;
}


