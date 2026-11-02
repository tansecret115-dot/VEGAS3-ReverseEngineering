/* Module: mp3plug.dll
   Function: FUN_5f716144
   Address: 5f716144
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5f716144(void *this,void *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint local_18;
  uint local_14;
  uint local_10;
  
  *(undefined4 *)((int)this + 8) = param_3;
  iVar2 = *(int *)((int)param_1 + 0x18);
  for (; (iVar2 < param_5 && (param_4 < 0x23d)); param_4 = param_4 + 4) {
    FUN_5f71e000((void *)((int)this + 0xc),param_1);
    uVar1 = *(uint *)((int)this + 0x10);
    local_18 = (int)uVar1 >> 3 & 1;
    local_14 = (int)uVar1 >> 2 & 1;
    uVar5 = uVar1 & 1;
    local_10 = (int)uVar1 >> 1 & 1;
    if (local_18 != 0) {
      uVar1 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
      *(uint *)((int)this + 0x20) = uVar1;
      if (uVar1 == 1) {
        local_18 = -local_18;
      }
    }
    if (local_14 != 0) {
      uVar1 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
      *(uint *)((int)this + 0x20) = uVar1;
      if (uVar1 == 1) {
        local_14 = -local_14;
      }
    }
    if (local_10 != 0) {
      uVar1 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
      *(uint *)((int)this + 0x20) = uVar1;
      if (uVar1 == 1) {
        local_10 = -local_10;
      }
    }
    if (uVar5 != 0) {
      uVar1 = FUN_5f714080(param_1,*(uint *)((int)this + 0x1c));
      *(uint *)((int)this + 0x20) = uVar1;
      if (uVar1 == 1) {
        uVar5 = -uVar5;
      }
    }
    *(uint *)(param_2 + 0xc + param_4 * 4) = uVar5;
    *(uint *)(param_2 + 8 + param_4 * 4) = local_10;
    *(uint *)(param_2 + 4 + param_4 * 4) = local_14;
    *(uint *)(param_2 + param_4 * 4) = local_18;
    iVar2 = *(int *)((int)param_1 + 0x18);
  }
  iVar4 = param_5 - iVar2;
  if (iVar4 < 0) {
    param_4 = param_4 + -4;
  }
  else if (iVar4 == 0) goto LAB_5f7162eb;
  *(int *)((int)param_1 + 0x18) = iVar2 + iVar4;
  *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) - iVar4;
  *(uint *)((int)param_1 + 0x1c) =
       iVar4 + *(int *)((int)param_1 + 0x1c) & *(int *)((int)param_1 + 0xc) - 1U;
LAB_5f7162eb:
  iVar2 = param_4 + -1;
  iVar4 = iVar2;
  if (0 < iVar2) {
    while (((iVar4 = iVar2, *(int *)(param_2 + iVar2 * 4) == 0 && (iVar4 = iVar2 + -1, 0 < iVar4))
           && (*(int *)(param_2 + iVar4 * 4) == 0))) {
      iVar4 = iVar2 + -2;
      if (((iVar4 < 1) || (*(int *)(param_2 + iVar4 * 4) != 0)) ||
         (iVar2 = iVar2 + -3, iVar4 = iVar2, iVar2 < 1)) break;
    }
  }
  if (iVar4 + 1 < 0x240) {
    puVar3 = (undefined4 *)(param_2 + (iVar4 + 1) * 4);
    iVar2 = ((param_2 + 0x900) - (int)puVar3 & 0xfffffff8U) + (int)puVar3;
    for (; (int)puVar3 < iVar2; puVar3 = puVar3 + 2) {
      *puVar3 = 0;
      puVar3[1] = 0;
    }
    for (; (int)puVar3 < param_2 + 0x900; puVar3 = puVar3 + 1) {
      *puVar3 = 0;
    }
  }
  return iVar4 + 1;
}


