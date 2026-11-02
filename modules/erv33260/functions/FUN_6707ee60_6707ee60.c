/* Module: erv33260.dll
   Function: FUN_6707ee60
   Address: 6707ee60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707ee60(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 200) != 2) {
    FUN_6707d2e0(*(int *)(*(int *)((int)this + 0x68) + 4),*(int *)((int)this + 0xa0) << 4,
                 *(int *)((int)this + 0xa4) << 4,*(int *)((int)this + 0x9c),0x10);
    FUN_6707d2e0(*(int *)(*(int *)((int)this + 0x68) + 8),
                 (*(uint *)((int)this + 0xa0) & 0xfffffff) << 3,
                 (*(uint *)((int)this + 0xa4) & 0xfffffff) << 3,*(int *)((int)this + 0x9c),8);
    FUN_6707d2e0(*(int *)(*(int *)((int)this + 0x68) + 0xc),
                 (*(uint *)((int)this + 0xa0) & 0xfffffff) << 3,
                 (*(uint *)((int)this + 0xa4) & 0xfffffff) << 3,*(int *)((int)this + 0x9c),8);
    *param_1 = *(undefined4 *)((int)this + 0x68);
    return;
  }
  *param_1 = *(undefined4 *)((int)this + 0x124);
  return;
}


