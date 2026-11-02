/* Module: vegas30.exe
   Function: FUN_004e1930
   Address: 004e1930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e1bdf) */
/* WARNING: Removing unreachable block (ram,0x004e1a80) */
/* WARNING: Removing unreachable block (ram,0x004e1b11) */
/* WARNING: Removing unreachable block (ram,0x004e1c90) */

void FUN_004e1930(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 uint *param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  uint local_18;
  int local_14;
  uint local_10;
  int iStack_c;
  uint local_8;
  
  local_10 = *(uint *)(param_2 + 0x18);
  iStack_c = *(int *)(param_2 + 0x1c);
  iVar1 = *(int *)(param_2 + 0x50);
  local_8 = *(uint *)(param_2 + 0x20) + local_10;
  iVar5 = *(int *)(param_2 + 0x24) + iStack_c + (uint)CARRY4(*(uint *)(param_2 + 0x20),local_10);
  iVar2 = *(int *)(param_2 + 0x218);
  local_18 = 0;
  local_14 = 0;
  if (iVar1 != 0) {
    local_18 = *(uint *)(iVar1 + 8);
    local_14 = *(int *)(iVar1 + 0xc);
  }
  if ((iStack_c <= param_4) && ((iStack_c < param_4 || (local_10 < param_3)))) {
    bVar6 = CARRY4(local_18,param_3 - local_10);
    local_18 = local_18 + (param_3 - local_10);
    local_14 = local_14 + ((param_4 - iStack_c) - (uint)(param_3 < local_10)) + (uint)bVar6;
    iStack_c = param_4;
    local_10 = param_3;
  }
  if ((param_6 <= iVar5) && ((param_6 < iVar5 || (param_5 < local_8)))) {
    local_8 = param_5;
    iVar5 = param_6;
  }
  *(uint *)(iVar2 + 0x20) = *param_7;
  *(uint *)(iVar2 + 0x24) = param_7[1];
  *(uint *)(iVar2 + 0x28) = param_7[2];
  *(uint *)(iVar2 + 0x2c) = param_7[3];
  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
    param_7 = (uint *)0xffffffff;
  }
  else {
    lVar7 = ftol();
    uVar3 = lVar7 + *(int *)(param_1 + 0xac0);
    param_7 = (uint *)uVar3;
    if ((uVar3 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < param_7)))
       ) {
      if (0x3fff < (longlong)uVar3) {
        param_7 = (uint *)0x3fff;
      }
    }
    else {
      param_7 = (uint *)0xffffc000;
    }
  }
  *(uint *)(iVar2 + 0x20) = (uint)param_7;
  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar7 = ftol();
    uVar3 = lVar7 + *(int *)(param_1 + 0xac0);
    uVar4 = (uint)uVar3;
    if ((uVar3 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar4))))
    {
      if (0x3fff < (longlong)uVar3) {
        uVar4 = 0x3fff;
      }
    }
    else {
      uVar4 = 0xffffc000;
    }
  }
  *(uint *)(iVar2 + 0x28) = uVar4;
  if ((int)uVar4 <= (int)((int)param_7 + 1U)) {
    uVar4 = (int)param_7 + 1U;
  }
  *(uint *)(iVar2 + 0x28) = uVar4;
  *(uint *)(iVar2 + 0x30) = uVar4 - (int)param_7;
  *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x2c) - *(int *)(iVar2 + 0x24);
  *(uint *)(iVar2 + 8) = local_18;
  *(int *)(iVar2 + 0xc) = local_14;
  *(uint *)(iVar2 + 0x10) = local_10;
  *(uint *)(iVar2 + 0x18) = local_8 - local_10;
  *(int *)(iVar2 + 0x14) = iStack_c;
  *(uint *)(iVar2 + 0x1c) = (iVar5 - iStack_c) - (uint)(local_8 < local_10);
  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar7 = ftol();
    uVar3 = lVar7 + *(int *)(param_1 + 0xac0);
    uVar4 = (uint)uVar3;
    if ((uVar3 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar4))))
    {
      if (0x3fff < (longlong)uVar3) {
        uVar4 = 0x3fff;
      }
    }
    else {
      uVar4 = 0xffffc000;
    }
  }
  *(uint *)(iVar2 + 0x38) = uVar4;
  if (*(int *)(param_1 + 0xb90) != 0 || *(int *)(param_1 + 0xb94) != 0) {
    lVar7 = ftol();
    uVar3 = lVar7 + *(int *)(param_1 + 0xac0);
    if ((0x7fffffffffffffff < uVar3) &&
       (((longlong)uVar3 < -0x100000000 || ((uint)uVar3 < 0xffffc000)))) {
      *(undefined4 *)(iVar2 + 0x3c) = 0xffffc000;
      return;
    }
    if ((longlong)uVar3 < 0x4000) {
      *(uint *)(iVar2 + 0x3c) = (uint)uVar3;
      return;
    }
    *(undefined4 *)(iVar2 + 0x3c) = 0x3fff;
    return;
  }
  *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
  return;
}


