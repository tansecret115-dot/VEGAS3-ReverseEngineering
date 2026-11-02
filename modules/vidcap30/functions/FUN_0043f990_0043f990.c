/* Module: vidcap30.exe
   Function: FUN_0043f990
   Address: 0043f990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043f990(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_5 == 0) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x1c34) & 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x1bfc) = 0;
    *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffeff;
  }
  if (param_4 != 2) {
    if (param_4 == 3) {
      if ((*(byte *)(param_1 + 0x1c34) & 0x40) == 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x1c04) = 0;
      SendMessageA(*(HWND *)(param_1 + 8),0x111,(uint)*(ushort *)(param_1 + 0x1c00),0);
      return 1;
    }
    if (param_4 == 0x2a) {
      *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 0x40;
      return 1;
    }
    switch(param_3) {
    case 0x1db:
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
      break;
    case 0x1dc:
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
      break;
    case 0x1dd:
      *(undefined4 *)(param_1 + 0x1c04) = 0x1dd;
      iVar1 = FUN_00426d30(param_2,0);
      goto LAB_0043fa3d;
    case 0x1de:
      *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
      iVar1 = FUN_00426d30(param_2,1);
      goto LAB_0043fa3d;
    default:
      goto switchD_0043f9f0_default;
    }
    iVar1 = FUN_00426e00(param_2,uVar2);
LAB_0043fa3d:
    if (iVar1 < 0) {
      return iVar1;
    }
    FUN_0043aea0(param_1);
    return iVar1;
  }
  *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xffffffbf;
  switch(param_3) {
  case 0x1db:
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
    break;
  case 0x1dc:
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
    break;
  case 0x1dd:
    *(undefined4 *)(param_1 + 0x1c04) = 0x1dd;
    iVar1 = FUN_00426d30(param_2,0);
    goto LAB_0043fb3f;
  case 0x1de:
    *(undefined4 *)(param_1 + 0x1c04) = 0x1dd;
    iVar1 = FUN_00426d30(param_2,1);
    goto LAB_0043fb3f;
  default:
switchD_0043f9f0_default:
    return -0x7fffbfff;
  }
  iVar1 = FUN_00426e00(param_2,uVar2);
LAB_0043fb3f:
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffb;
  }
  return iVar1;
}


