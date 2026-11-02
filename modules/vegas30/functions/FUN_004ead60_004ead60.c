/* Module: vegas30.exe
   Function: FUN_004ead60
   Address: 004ead60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ead60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20 [4];
  undefined4 local_10;
  
  iVar3 = -0x7fffbffb;
  iVar1 = FUN_005b8630(param_1);
  if (*(char *)(iVar1 + 0x1d0) != '\x01') goto LAB_004eae72;
  iVar3 = FUN_005b4620(*(undefined4 *)(iVar1 + 0x3d8),param_3);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = FUN_005b4660(iVar1 + 0x3d8,param_3);
  if (iVar3 < 0) goto LAB_004eae72;
  puVar4 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  switch(param_3) {
  case 3:
    local_20[0] = 0x736c6b6d;
    break;
  case 4:
    local_20[0] = 0x6b72616d;
    uVar2 = FUN_005b8970(param_1);
    goto LAB_004eae4d;
  case 5:
    local_20[0] = 0x736c6d63;
    break;
  case 6:
    local_20[0] = 0x6b726d63;
    uVar2 = FUN_005b8980(param_1);
    goto LAB_004eae4d;
  case 7:
    local_20[0] = 0x736c6d6b;
    break;
  case 8:
    local_20[0] = 0x6b726d6b;
    uVar2 = FUN_005b8990(param_1);
    goto LAB_004eae4d;
  case 9:
    local_20[0] = 0x736c6d64;
    break;
  case 10:
    local_20[0] = 0x6b726d64;
    uVar2 = FUN_005b89b0(param_1);
LAB_004eae4d:
    local_10 = _SfList_FindSpecificItemRange_16(uVar2,0,0xffffffff,param_2);
    break;
  default:
    FUN_004ea010(iVar1,0x80004005);
    return -0x7fffbffb;
  }
  iVar3 = FUN_005b5820(local_20);
  if (iVar3 < 0) {
LAB_004eae72:
    FUN_004ea010(iVar1,iVar3);
  }
  return iVar3;
}


