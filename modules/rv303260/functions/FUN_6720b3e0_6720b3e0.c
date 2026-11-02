/* Module: rv303260.dll
   Function: FUN_6720b3e0
   Address: 6720b3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6720b3e0(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  this_00 = *(void **)((int)this + 0xd6);
  iVar1 = FUN_67201640(this_00,*(uint *)((int)this_00 + 0xf6),*(uint *)((int)this_00 + 0xfa),
                       (uint)*(ushort *)((int)this + 0x9e),(uint)*(ushort *)((int)this + 0xa0));
  if (iVar1 != 0) {
    return 0x80004005;
  }
  iVar1 = *(int *)((int)this + 0xd6);
  uVar2 = *(undefined4 *)(iVar1 + 0x2da);
  *(undefined4 *)((int)this + 0xda) = 0x1010;
  *(undefined4 *)((int)this + 0x24f) = uVar2;
  if (*(int *)((int)this + 0x26f) != 0) {
    *(undefined4 *)((int)this + 0xda) = 0x1030;
    if (*(int *)((int)this + 0x273) != 0) {
      *(undefined4 *)((int)this + 0xda) = 0x1070;
    }
    if (*(int *)((int)this + 0x277) != 0) {
      *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x80;
    }
  }
  uVar4 = *(uint *)((int)this + 0xda) | (*(uint *)((int)this + 0x24f) & 7) << 0x10;
  *(uint *)((int)this + 0xda) = uVar4;
  if (*(int *)(iVar1 + 0x366) == 4) {
    *(uint *)((int)this + 0xda) = uVar4 | 0x100000;
  }
  if (*(int *)(iVar1 + 0x366) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x200000;
  }
  if (*(int *)((int)this + 0xee) == 5) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x400000;
  }
  if (*(int *)(iVar1 + 0x35e) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x800000;
  }
  if (*(int *)((int)this + 0x231) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x1000000;
  }
  *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x88000;
  *param_1 = *(int *)((int)this + 0x92) + 8 + *(uint *)((int)this + 0x24f) * 2;
  param_1[1] = *(int *)((int)this + 0x96);
  param_1[2] = *(int *)((int)this + 0x9a);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 0x9e);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)this + 0xa0);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)this + 0xa4);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)this + 0xa6);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)((int)this + 0xa2);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)this + 0xa8);
  uVar2 = FUN_6720ead0(*(undefined4 *)((int)this + 0xda));
  *(undefined4 *)((int)param_1 + *(int *)((int)this + 0x92)) = uVar2;
  uVar4 = (*(uint *)((int)this + 0x10a) | *(int *)((int)this + 0x10e) << 8) << 0x14 |
          *(uint *)((int)this + 0x106) | 0x2000;
  *(uint *)((int)this + 0x2e) = uVar4;
  uVar2 = FUN_6720ead0(uVar4);
  *(undefined4 *)((int)param_1 + *(int *)((int)this + 0x92) + 4) = uVar2;
  uVar4 = 0;
  if (*(int *)((int)this + 0x24f) != 0) {
    puVar3 = (undefined1 *)(*(int *)((int)this + 0x92) + 9 + (int)param_1);
    do {
      puVar3[-1] = (char)(*(uint *)(*(int *)((int)this + 0xd6) + 0x2de + uVar4 * 4) >> 2);
      *puVar3 = (char)(*(uint *)(*(int *)((int)this + 0xd6) + 0x2fe + uVar4 * 4) >> 2);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar4 < *(uint *)((int)this + 0x24f));
  }
  return 0;
}


