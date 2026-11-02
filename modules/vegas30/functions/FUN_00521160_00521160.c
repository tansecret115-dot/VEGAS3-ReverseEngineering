/* Module: vegas30.exe
   Function: FUN_00521160
   Address: 00521160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_00521160(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = &DAT_0060f98c;
  switch(param_2) {
  case 0x3f3:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e1e);
    return puVar2;
  case 0x3f4:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e1f);
    return puVar2;
  case 0x44c:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e20);
    return puVar2;
  case 0x44d:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e21);
    return puVar2;
  case 0x44e:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e22);
    return puVar2;
  case 0x44f:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e23);
    return puVar2;
  case 0x450:
    if ((((*(int *)(param_1 + 0x98) != 0) &&
         (iVar1 = *(int *)(*(int *)(param_1 + 0x98) + 0x90), iVar1 != 0)) &&
        (iVar1 = *(int *)(iVar1 + 0x50), iVar1 != 0)) &&
       ((*(uint *)(*(int *)(iVar1 + 0x18) + 0x134) & 0x400) != 0)) {
      iVar1 = *(int *)(param_1 + 0x90);
      local_c = *(undefined4 *)(iVar1 + 0xe84);
      local_8 = *(undefined4 *)(iVar1 + 0xe88);
      local_4 = *(undefined4 *)(iVar1 + 0xe8c);
      local_10 = 5;
      iVar1 = FUN_00445d30(&local_10,0);
      if ((iVar1 != 0) && (iVar1 = FUN_00508960(&DAT_006571e0,iVar1,0x104), iVar1 != 0)) {
        puVar2 = &DAT_006571e0;
      }
    }
    break;
  case 0x4c4:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x697e);
    return puVar2;
  case 0x4c5:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6980);
    return puVar2;
  case 0x4c6:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6981);
    return puVar2;
  case 0x4c7:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6982);
    return puVar2;
  case 0x4c8:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6983);
    return puVar2;
  case 0x4c9:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6989);
    return puVar2;
  case 0x4ca:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x698a);
    return puVar2;
  case 0x4cb:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6dca);
    return puVar2;
  case 0x4cc:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6994);
    return puVar2;
  case 0x4cd:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x6e2c);
    return puVar2;
  case 0x4e7:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x85);
    return puVar2;
  case 0x4e8:
    puVar2 = (undefined1 *)_SfGetString_8(DAT_00647204,0x86);
    return puVar2;
  }
  return puVar2;
}


