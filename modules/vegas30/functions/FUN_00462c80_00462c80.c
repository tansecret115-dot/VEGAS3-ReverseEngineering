/* Module: vegas30.exe
   Function: FUN_00462c80
   Address: 00462c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00462dc0) */
/* WARNING: Removing unreachable block (ram,0x00462e4d) */

void FUN_00462c80(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,uint param_6,
                 int param_7,uint *param_8)

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
  
  iStack_c = *(int *)(param_3 + 0x1c);
  iVar1 = *(int *)(param_3 + 0x218);
  uVar4 = *(uint *)(param_3 + 0x18);
  iVar2 = *(int *)(param_3 + 0x50);
  local_8 = *(uint *)(param_3 + 0x20) + uVar4;
  iVar5 = *(int *)(param_3 + 0x24) + iStack_c + (uint)CARRY4(*(uint *)(param_3 + 0x20),uVar4);
  local_18 = 0;
  local_14 = 0;
  if (iVar2 != 0) {
    local_18 = *(uint *)(iVar2 + 8);
    local_14 = *(int *)(iVar2 + 0xc);
  }
  local_10 = uVar4;
  if ((iStack_c <= param_5) && ((iStack_c < param_5 || (uVar4 < param_4)))) {
    local_10 = param_4;
    iVar2 = param_5 - iStack_c;
    bVar6 = CARRY4(local_18,param_4 - uVar4);
    local_18 = local_18 + (param_4 - uVar4);
    iStack_c = param_5;
    local_14 = local_14 + (iVar2 - (uint)(param_4 < uVar4)) + (uint)bVar6;
  }
  if ((param_7 <= iVar5) && ((param_7 < iVar5 || (param_6 < local_8)))) {
    local_8 = param_6;
    iVar5 = param_7;
  }
  *(uint *)(iVar1 + 0x20) = *param_8;
  *(uint *)(iVar1 + 0x24) = param_8[1];
  *(uint *)(iVar1 + 0x28) = param_8[2];
  *(uint *)(iVar1 + 0x2c) = param_8[3];
  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
    param_3 = 0xffffffff;
  }
  else {
    lVar7 = ftol();
    uVar3 = lVar7 + *(int *)(param_1 + 0xac0);
    param_3 = (uint)uVar3;
    if ((uVar3 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < param_3)))
       ) {
      if (0x3fff < (longlong)uVar3) {
        param_3 = 0x3fff;
      }
    }
    else {
      param_3 = 0xffffc000;
    }
  }
  *(uint *)(iVar1 + 0x20) = param_3;
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
  *(uint *)(iVar1 + 0x28) = uVar4;
  if ((int)uVar4 <= (int)(param_3 + 1)) {
    uVar4 = param_3 + 1;
  }
  *(uint *)(iVar1 + 0x28) = uVar4;
  *(uint *)(iVar1 + 0x30) = uVar4 - param_3;
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x24);
  *(uint *)(iVar1 + 8) = local_18;
  *(int *)(iVar1 + 0xc) = local_14;
  *(uint *)(iVar1 + 0x10) = local_10;
  *(uint *)(iVar1 + 0x18) = local_8 - local_10;
  *(int *)(iVar1 + 0x14) = iStack_c;
  *(uint *)(iVar1 + 0x1c) = (iVar5 - iStack_c) - (uint)(local_8 < local_10);
  return;
}


