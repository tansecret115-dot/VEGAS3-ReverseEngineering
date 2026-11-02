/* Module: vegas30.exe
   Function: FUN_005c90e0
   Address: 005c90e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c90e0(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  switch(param_3) {
  case 0:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    uVar2 = *(uint *)(param_2 + 0xf8);
    bVar4 = (uVar2 & 1) != param_4;
    *(uint *)(param_2 + 0xf8) = (uVar2 ^ param_4) & 1 ^ uVar2;
    goto LAB_005c9168;
  case 1:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar4 = (*(uint *)(param_2 + 0xf8) >> 1 & 1) != param_4;
    uVar2 = (param_4 & 1) << 1;
    uVar3 = *(uint *)(param_2 + 0xf8) & 0xfffffffd;
    break;
  case 2:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar4 = (*(uint *)(param_2 + 0xf8) >> 2 & 1) != param_4;
    uVar2 = (param_4 & 1) << 2;
    uVar3 = *(uint *)(param_2 + 0xf8) & 0xfffffffb;
    break;
  case 3:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar4 = (*(uint *)(param_2 + 0xf8) >> 4 & 1) != param_4;
    uVar2 = (param_4 & 1) << 4;
    uVar3 = *(uint *)(param_2 + 0xf8) & 0xffffffef;
    break;
  case 4:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar4 = (*(uint *)(param_2 + 0xf8) >> 5 & 1) != param_4;
    uVar2 = (param_4 & 1) << 5;
    uVar3 = *(uint *)(param_2 + 0xf8) & 0xffffffdf;
    break;
  case 5:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar4 = (*(uint *)(param_2 + 0xf8) >> 6 & 1) != param_4;
    uVar2 = (param_4 & 1) << 6;
    uVar3 = *(uint *)(param_2 + 0xf8) & 0xffffffbf;
    break;
  case 6:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar4 = (*(uint *)(param_2 + 0xf8) >> 7 & 1) != param_4;
    uVar2 = (param_4 & 1) << 7;
    uVar3 = *(uint *)(param_2 + 0xf8) & 0xffffff7f;
    break;
  case 7:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar4 = (*(uint *)(param_2 + 0xf8) >> 8 & 1) != param_4;
    uVar2 = (param_4 & 1) << 8;
    uVar3 = *(uint *)(param_2 + 0xf8) & 0xfffffeff;
    break;
  default:
    return 0x80004001;
  }
  *(uint *)(param_2 + 0xf8) = uVar2 | uVar3;
LAB_005c9168:
  if (!bVar4) {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 0x3c) + 1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 0x3c) = iVar1;
  return 0;
}


