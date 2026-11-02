/* Module: vegas30.exe
   Function: FUN_005cb160
   Address: 005cb160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cb160(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  switch(param_3) {
  case 0:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar3 = (*(uint *)(param_2 + 0x44) >> 1 & 1) != param_4;
    uVar1 = (param_4 & 1) << 1;
    uVar2 = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    break;
  case 1:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar3 = (*(uint *)(param_2 + 0x44) >> 2 & 1) != param_4;
    uVar1 = (param_4 & 1) << 2;
    uVar2 = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    break;
  case 2:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    uVar1 = *(uint *)(param_2 + 0x44);
    bVar3 = (uVar1 & 1) != param_4;
    *(uint *)(param_2 + 0x44) = (uVar1 ^ param_4) & 1 ^ uVar1;
    goto LAB_005cb1ab;
  case 3:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar3 = (*(uint *)(param_2 + 0x44) >> 3 & 1) != param_4;
    uVar1 = (param_4 & 1) << 3;
    uVar2 = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    break;
  case 4:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar3 = (*(uint *)(param_2 + 0x44) >> 4 & 1) != param_4;
    uVar1 = (param_4 & 1) << 4;
    uVar2 = *(uint *)(param_2 + 0x44) & 0xffffffef;
    break;
  case 5:
    if (*(int *)(param_2 + 4) != 3) {
      return 1;
    }
    bVar3 = (*(uint *)(param_2 + 0x44) >> 5 & 1) != param_4;
    uVar1 = (param_4 & 1) << 5;
    uVar2 = *(uint *)(param_2 + 0x44) & 0xffffffdf;
    break;
  default:
    return 0x80004001;
  }
  *(uint *)(param_2 + 0x44) = uVar1 | uVar2;
LAB_005cb1ab:
  if (!bVar3) {
    return 1;
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x200000;
  *(uint *)*param_1 = *(uint *)*param_1 | 8;
  return 0;
}


