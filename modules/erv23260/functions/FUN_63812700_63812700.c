/* Module: erv23260.dll
   Function: FUN_63812700
   Address: 63812700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63812700(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)((int)this + 0x14) * *(int *)((int)this + 0x18);
  uVar2 = 1;
  *(undefined1 *)
   (param_1 * *(int *)((int)this + 0x118) + **(int **)((int)this + 0x110) + 10 +
   *(int *)((int)this + 0x120)) = 1;
  if (1 < *(uint *)((int)this + 0x14)) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined1 *)
       (*(int *)(*(int *)((int)this + 0x110) + iVar1) + param_1 * *(int *)((int)this + 0x118) + 10 +
       *(int *)((int)this + 0x120)) = 2;
    } while (uVar2 < *(uint *)((int)this + 0x14));
  }
  *(undefined1 *)
   (param_1 * *(int *)((int)this + 0x118) +
    *(int *)(*(int *)((int)this + 0x110) + -4 + *(int *)((int)this + 0x14) * 4) + 10 +
   *(int *)((int)this + 0x120)) = 3;
  uVar2 = *(uint *)((int)this + 0x14);
  if (uVar2 < uVar2 * *(int *)((int)this + 0x18)) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined1 *)
       (*(int *)(*(int *)((int)this + 0x110) + iVar1) + param_1 * *(int *)((int)this + 0x118) + 10 +
       *(int *)((int)this + 0x120)) = 5;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x14) * *(int *)((int)this + 0x18)));
  }
  for (uVar2 = uVar3 - *(int *)((int)this + 0x14); uVar2 < uVar3; uVar2 = uVar2 + 1) {
    *(undefined1 *)
     (*(int *)(*(int *)((int)this + 0x110) + uVar2 * 4) + param_1 * *(int *)((int)this + 0x118) + 10
     + *(int *)((int)this + 0x120)) = 8;
  }
  for (uVar2 = *(uint *)((int)this + 0x14); uVar2 < uVar3;
      uVar2 = uVar2 + *(int *)((int)this + 0x14)) {
    *(undefined1 *)
     (*(int *)(*(int *)((int)this + 0x110) + uVar2 * 4) + param_1 * *(int *)((int)this + 0x118) + 10
     + *(int *)((int)this + 0x120)) = 4;
  }
  for (uVar2 = *(int *)((int)this + 0x14) * 2 - 1; uVar2 < uVar3;
      uVar2 = uVar2 + *(int *)((int)this + 0x14)) {
    *(undefined1 *)
     (*(int *)(*(int *)((int)this + 0x110) + uVar2 * 4) + param_1 * *(int *)((int)this + 0x118) + 10
     + *(int *)((int)this + 0x120)) = 6;
  }
  *(undefined1 *)
   (*(int *)(*(int *)((int)this + 0x110) + (uVar3 - *(int *)((int)this + 0x14)) * 4) +
    param_1 * *(int *)((int)this + 0x118) + 10 + *(int *)((int)this + 0x120)) = 7;
  *(undefined1 *)
   (*(int *)(*(int *)((int)this + 0x110) + -4 + uVar3 * 4) + param_1 * *(int *)((int)this + 0x118) +
    10 + *(int *)((int)this + 0x120)) = 9;
  return 0;
}


