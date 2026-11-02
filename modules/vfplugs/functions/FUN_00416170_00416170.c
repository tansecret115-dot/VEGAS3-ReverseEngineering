/* Module: vfplugs.dll
   Function: FUN_00416170
   Address: 00416170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00416170(void *this,int param_1)

{
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + *(int *)(param_1 + 8);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + *(int *)(param_1 + 8);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + *(int *)(param_1 + 0xc);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + *(int *)(param_1 + 0xc);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + *(int *)(param_1 + 0x10);
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + *(int *)(param_1 + 0x10);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + *(int *)(param_1 + 0x14);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + *(int *)(param_1 + 0x14);
  return;
}


