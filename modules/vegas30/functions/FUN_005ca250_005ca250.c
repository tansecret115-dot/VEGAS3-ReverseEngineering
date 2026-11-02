/* Module: vegas30.exe
   Function: FUN_005ca250
   Address: 005ca250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005ca250(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_4;
  
  uVar3 = *(uint *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  uVar5 = param_3 - uVar3;
  iVar4 = (param_4 - iVar2) - (uint)(param_3 < uVar3);
  local_4 = 0;
  if ((param_4 <= iVar2) && ((param_4 < iVar2 || (param_3 <= uVar3)))) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x24) <= iVar4) &&
     ((*(int *)(param_2 + 0x24) < iVar4 || (*(uint *)(param_2 + 0x20) <= uVar5)))) {
    return 0;
  }
  FUN_005b83b0(param_1,1);
  *(uint *)(param_2 + 0x20) = uVar5;
  *(int *)(param_2 + 0x24) = iVar4;
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x18);
  *(uint *)(param_2 + 0xa8) = uVar5;
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x1c);
  *(int *)(param_2 + 0xac) = iVar4;
  iVar2 = *(int *)(param_2 + 0x44);
  uVar3 = *(uint *)(param_2 + 0x40);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    iVar2 = 0;
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x24);
    if ((iVar1 <= iVar2) && ((iVar1 < iVar2 || (*(uint *)(param_2 + 0x20) < uVar3)))) {
      iVar2 = iVar1;
      uVar3 = *(uint *)(param_2 + 0x20);
    }
  }
  *(uint *)(param_2 + 0x40) = uVar3;
  *(int *)(param_2 + 0x44) = iVar2;
  iVar2 = *(int *)(param_2 + 0x7c);
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0x84) = 0;
  uVar3 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x40;
  iVar1 = *(int *)(param_2 + 0x24);
  if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (*(uint *)(param_2 + 0x78) < uVar3)))) {
    iVar1 = iVar2;
    uVar3 = *(uint *)(param_2 + 0x78);
  }
  *(uint *)(param_2 + 0x78) = uVar3;
  *(int *)(param_2 + 0x7c) = iVar1;
  FUN_005c6cd0(param_2,2);
  if (*(int *)(param_2 + 4) == 3) {
    local_4 = FUN_0050b6c0(param_2 + 0x144,0,0,0,0x80000000,uVar5,iVar4);
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
      FUN_0051f0b0(*(int *)(DAT_0064762c + 0xa4));
    }
    if (((-1 < local_4) &&
        (local_4 = FUN_0044af50(*(undefined4 *)(param_2 + 0x140),0,0,0,0x80000000,uVar5,iVar4),
        DAT_0064762c != 0)) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
      SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66c,0,param_2);
    }
  }
  iVar2 = *(int *)(param_2 + 0x3c) + 1;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  *(int *)(param_2 + 0x3c) = iVar2;
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x200000;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
  if (((*(uint *)(param_2 + 0x10) & 0x400) != 0) ||
     ((*(uint *)(*(int *)(param_2 + 8) + 0x10) & 0x200) != 0)) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
  }
  FUN_005b84d0(param_1,1);
  return local_4;
}


