/* Module: rv203260.dll
   Function: FUN_638ab7b0
   Address: 638ab7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638ab7b0(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  FUN_638a9950(this,2);
  *(undefined4 *)((int)this + 0xda) = 0;
  if (*(int *)((int)this + 0x277) != 0) {
    *(undefined4 *)((int)this + 0xda) = 1;
  }
  if (*(int *)((int)this + 0x10a) != 1) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x1000;
  }
  if (*(int *)((int)this + 0x27f) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x10;
  }
  if (*(int *)((int)this + 0x284) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 4;
  }
  if (*(int *)((int)this + 0x288) != 0) {
    uVar5 = *(uint *)((int)this + 0xda);
    uVar2 = uVar5 | 0x20;
    *(uint *)((int)this + 0xda) = uVar2;
    if (*(int *)((int)this + 0x28c) != 0) {
      *(uint *)((int)this + 0xda) = CONCAT31((int3)(uVar5 >> 8),(char)uVar2) | 0x40;
    }
    if (*(int *)((int)this + 0x290) != 0) {
      *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x80;
    }
  }
  if (*(int *)((int)this + 0x294) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x100;
  }
  if (*(int *)((int)this + 0x298) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x200;
  }
  if (*(int *)((int)this + 0x29c) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x400;
  }
  if (*(int *)((int)this + 0x2a0) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x800;
  }
  if (*(int *)((int)this + 0x2a4) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 8;
  }
  if ((*(int *)((int)this + 0x10a) != 1) && (*(int *)((int)this + 0x2a8) != 0)) {
    *(uint *)((int)this + 0xda) =
         *(uint *)((int)this + 0xda) | (*(uint *)((int)this + 599) & 7) << 0x10;
  }
  iVar1 = *(int *)((int)this + 0xd6);
  if (*(int *)(iVar1 + 0x35e) == 4) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x100000;
  }
  if (*(int *)(iVar1 + 0x35e) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x200000;
  }
  if (*(int *)((int)this + 0xee) == 5) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x400000;
  }
  if (*(int *)(iVar1 + 0x356) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x800000;
  }
  if (*(int *)((int)this + 0x23d) != 0) {
    *(uint *)((int)this + 0xda) = *(uint *)((int)this + 0xda) | 0x1000000;
  }
  *(uint *)((int)this + 0xda) =
       *(uint *)((int)this + 0xda) | (*(byte *)((int)this + 0x283) & 7) << 0xd;
  *param_1 = *(int *)((int)this + 0x92) + 8 + *(int *)((int)this + 599) * 2;
  param_1[1] = *(int *)((int)this + 0x96);
  param_1[2] = *(int *)((int)this + 0x9a);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 0x9e);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)this + 0xa0);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)this + 0xa4);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)this + 0xa6);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)((int)this + 0xa2);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)this + 0xa8);
  uVar3 = FUN_638af560(*(undefined4 *)((int)this + 0xda));
  *(undefined4 *)((int)param_1 + *(int *)((int)this + 0x92)) = uVar3;
  uVar5 = (*(int *)((int)this + 0x10e) << 8 | *(uint *)((int)this + 0x10a)) << 0x14 |
          *(uint *)((int)this + 0x106) | 0x1000;
  *(uint *)((int)this + 0x2e) = uVar5;
  uVar3 = FUN_638af560(uVar5);
  *(undefined4 *)((int)param_1 + *(int *)((int)this + 0x92) + 4) = uVar3;
  if (((*(int *)((int)this + 0x10a) != 1) && (*(int *)((int)this + 0x2a8) != 0)) &&
     (uVar5 = 0, *(int *)((int)this + 599) != 0)) {
    puVar4 = (undefined1 *)(*(int *)((int)this + 0x92) + 9 + (int)param_1);
    do {
      puVar4[-1] = (char)(*(uint *)(*(int *)((int)this + 0xd6) + 0x2d6 + uVar5 * 4) >> 2);
      *puVar4 = (char)(*(uint *)(*(int *)((int)this + 0xd6) + 0x2f6 + uVar5 * 4) >> 2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < *(uint *)((int)this + 599));
  }
  return 0;
}


