/* Module: vegas30.exe
   Function: FUN_00448430
   Address: 00448430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_00448430(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  switch(param_2) {
  case 0x3fc:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e1e);
    return puVar1;
  case 0x3fd:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e1f);
    return puVar1;
  default:
    return &DAT_0060f98c;
  case 0x44c:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e20);
    return puVar1;
  case 0x44d:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e21);
    return puVar1;
  case 0x44e:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e22);
    return puVar1;
  case 0x44f:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e23);
    return puVar1;
  case 0x450:
    if (*(int *)(param_1 + 0xac) == 0) {
      return &DAT_0060f98c;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xac) + 0x50);
    if (iVar2 == 0) {
      return &DAT_0060f98c;
    }
    if ((*(uint *)(*(int *)(iVar2 + 0x18) + 0x134) & 0x400) == 0) {
      return &DAT_0060f98c;
    }
    iVar2 = *(int *)(param_1 + 0x80);
    local_c = *(undefined4 *)(iVar2 + 0xe84);
    local_8 = *(undefined4 *)(iVar2 + 0xe88);
    local_4 = *(undefined4 *)(iVar2 + 0xe8c);
    local_10 = 5;
    iVar2 = FUN_00445d30(&local_10,0);
    if (iVar2 == 0) {
      return &DAT_0060f98c;
    }
    iVar2 = FUN_00508960(&DAT_0064bc8c,iVar2,0x104);
    if (iVar2 == 0) {
      return &DAT_0060f98c;
    }
    return &DAT_0064bc8c;
  case 0x4b0:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x85);
    return puVar1;
  case 0x4b1:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x86);
    return puVar1;
  case 0x4b2:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x5079);
    return puVar1;
  case 0x4b5:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x507a);
    return puVar1;
  case 0x4b6:
    break;
  case 0x4c6:
    puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e08);
    return puVar1;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0xac) != 0)) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      if ((*(uint *)(param_1 + 0x9c) & 0x200) == 0) goto switchD_004484e1_caseD_5;
      break;
    case 5:
    case 7:
    case 8:
switchD_004484e1_caseD_5:
      puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x5080);
      return puVar1;
    }
  }
  puVar1 = (undefined1 *)_SfGetString_8(DAT_00647204,0x507b);
  return puVar1;
}


