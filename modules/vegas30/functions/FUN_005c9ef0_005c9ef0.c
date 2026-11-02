/* Module: vegas30.exe
   Function: FUN_005c9ef0
   Address: 005c9ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005ca03a) */

int FUN_005c9ef0(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int local_14;
  
  local_14 = 0;
  uVar6 = *(uint *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x1c);
  uVar4 = *(uint *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x24);
  uVar7 = param_3 - uVar6;
  iVar8 = (param_4 - iVar1) - (uint)(param_3 < uVar6);
  if ((param_4 <= iVar1) && ((param_4 < iVar1 || (param_3 <= uVar6)))) {
    return 0;
  }
  if ((*(int *)(param_2 + 0x24) <= iVar8) &&
     ((*(int *)(param_2 + 0x24) < iVar8 || (*(uint *)(param_2 + 0x20) <= uVar7)))) {
    return 1;
  }
  FUN_005b83b0(param_1,1);
  *(uint *)(param_2 + 0x20) = uVar4 - uVar7;
  *(uint *)(param_2 + 0x18) = param_3;
  *(int *)(param_2 + 0x1c) = param_4;
  *(uint *)(param_2 + 0x24) = (iVar2 - iVar8) - (uint)(uVar4 < uVar7);
  iVar1 = FUN_005c68e0(param_2);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = FUN_005c6910(param_2,iVar1);
    uVar6 = *(uint *)(iVar2 + 8);
    *(uint *)(iVar2 + 8) = uVar6 + uVar7;
    *(uint *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + iVar8 + (uint)CARRY4(uVar6,uVar7);
    iVar5 = *(uint *)(iVar2 + 0x10) - uVar7;
    iVar3 = (*(int *)(iVar2 + 0x14) - iVar8) - (uint)(*(uint *)(iVar2 + 0x10) < uVar7);
    if ((iVar3 < 1) && (iVar3 < 0)) {
      iVar5 = 0;
      iVar3 = 0;
    }
    *(int *)(iVar2 + 0x10) = iVar5;
    *(int *)(iVar2 + 0x14) = iVar3;
    if ((*(uint *)(param_2 + 0x10) & 0x100) != 0) {
      lVar9 = 1;
      if (((*(int *)(iVar2 + 0x18) != 0) &&
          (iVar3 = FUN_005f13f0(*(undefined4 *)(param_2 + 4)), lVar9 = 1, iVar3 != 0)) &&
         (lVar9 = ftol(), lVar9 < 1)) {
        lVar9 = 1;
      }
      lVar10 = __allrem(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),lVar9);
      iVar3 = (int)((ulonglong)lVar10 >> 0x20);
      *(longlong *)(iVar2 + 8) = lVar10;
      if ((iVar3 < 1) && (lVar10 < 0)) {
        *(longlong *)(iVar2 + 8) = lVar9 + CONCAT44(iVar3,*(undefined4 *)(iVar2 + 8));
      }
      *(longlong *)(iVar2 + 0x10) = lVar9 - *(longlong *)(iVar2 + 8);
    }
  }
  FUN_0047c990(param_2 + 0x98,uVar7,iVar8,0xffffffff);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(uint *)(param_2 + 0x40);
  if (uVar6 != 0 || *(int *)(param_2 + 0x44) != 0) {
    uVar4 = uVar6 - uVar7;
    iVar1 = (*(int *)(param_2 + 0x44) - iVar8) - (uint)(uVar6 < uVar7);
    if ((iVar1 < 1) && (iVar1 < 0)) {
      uVar4 = 0;
      iVar1 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x24);
      if ((iVar2 <= iVar1) && ((iVar2 < iVar1 || (*(uint *)(param_2 + 0x20) < uVar4)))) {
        uVar4 = *(uint *)(param_2 + 0x20);
        iVar1 = iVar2;
      }
    }
    *(uint *)(param_2 + 0x40) = uVar4;
    *(int *)(param_2 + 0x44) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x84);
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  uVar6 = *(uint *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0x20;
  iVar2 = *(int *)(param_2 + 0x24);
  if ((iVar1 <= iVar2) && ((iVar1 < iVar2 || (*(uint *)(param_2 + 0x80) < uVar6)))) {
    iVar2 = iVar1;
    uVar6 = *(uint *)(param_2 + 0x80);
  }
  *(uint *)(param_2 + 0x80) = uVar6;
  *(int *)(param_2 + 0x84) = iVar2;
  FUN_005c6cd0(param_2,1);
  if (*(int *)(param_2 + 4) == 3) {
    iVar1 = -(iVar8 + (uint)(uVar7 != 0));
    local_14 = FUN_0050b6c0(param_2 + 0x144,-uVar7,iVar1,0,0,0xffffffff,0x7fffffff);
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa4) != 0)) {
      FUN_0051f0b0(*(int *)(DAT_0064762c + 0xa4));
    }
    if (((-1 < local_14) &&
        (local_14 = FUN_0044af50(*(undefined4 *)(param_2 + 0x140),-uVar7,iVar1,0,0,0xffffffff,
                                 0x7fffffff), DAT_0064762c != 0)) &&
       (*(int *)(DAT_0064762c + 0xa0) != 0)) {
      SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66c,0,param_2);
    }
  }
  iVar1 = *(int *)(param_2 + 0x3c) + 1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 0x3c) = iVar1;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
  if (((*(uint *)(param_2 + 0x10) & 0x400) != 0) ||
     ((*(uint *)(*(int *)(param_2 + 8) + 0x10) & 0x200) != 0)) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
  }
  FUN_005b84d0(param_1,1);
  return local_14;
}


