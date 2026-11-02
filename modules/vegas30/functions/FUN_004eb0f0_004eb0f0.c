/* Module: vegas30.exe
   Function: FUN_004eb0f0
   Address: 004eb0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eb0f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [8];
  
  iVar2 = -0x7fffbffb;
  iVar1 = FUN_005b8630(param_1);
  if (*(char *)(iVar1 + 0x1d0) != '\x01') goto LAB_004eb1b8;
  *(undefined4 *)(iVar1 + 0x3e0) = 1;
  puVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  switch(param_2) {
  case 0x25:
    local_20[0] = 0x2064656d;
    local_20[4] = *(undefined4 *)(param_3 + 0x164);
    break;
  case 0x26:
    if (*(int *)(iVar1 + 0x3dc) != 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x3dc) = 1;
    local_20[0] = 0x7064656d;
    break;
  case 0x27:
    local_20[3] = 2;
    goto LAB_004eb151;
  case 0x28:
    local_20[3] = 1;
LAB_004eb151:
    local_20[0] = 0x2064656d;
    local_20[4] = *(undefined4 *)(param_3 + 0x164);
    break;
  default:
    FUN_004ea010(iVar1,0x80004005);
    return -0x7fffbffb;
  }
  iVar2 = FUN_005b5820(local_20);
  if (iVar2 < 0) {
LAB_004eb1b8:
    FUN_004ea010(iVar1,iVar2);
  }
  return iVar2;
}


