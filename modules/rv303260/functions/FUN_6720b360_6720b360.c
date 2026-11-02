/* Module: rv303260.dll
   Function: FUN_6720b360
   Address: 6720b360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6720b360(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  
  this_00 = *(void **)((int)this + 0xd6);
  iVar1 = FUN_67201640(this_00,*(uint *)((int)this_00 + 0xf6),*(uint *)((int)this_00 + 0xfa),
                       (uint)*(ushort *)((int)this + 0x9e),(uint)*(ushort *)((int)this + 0xa0));
  if (iVar1 != 0) {
    return 0x80004005;
  }
  *(undefined4 *)((int)this + 0x24f) = *(undefined4 *)(*(int *)((int)this + 0xd6) + 0x2da);
  iVar1 = *(int *)((int)this + 0x92) + 8;
  *param_1 = iVar1;
  *param_1 = iVar1 + *(int *)((int)this + 0x24f) * 2;
  return 0;
}


