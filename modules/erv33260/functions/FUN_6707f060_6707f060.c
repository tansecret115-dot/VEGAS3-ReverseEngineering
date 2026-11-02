/* Module: erv33260.dll
   Function: FUN_6707f060
   Address: 6707f060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6707f060(void *this,undefined4 param_1,int param_2)

{
  if ((2 < *(int *)((int)this + 0xc)) && (*(int *)((int)this + 0xc) < 6)) {
    FUN_6708ea20((int *)((int)this + 0x5c),*(uint *)(param_2 + 0x24));
    return;
  }
  FUN_6708e320((int *)((int)this + 0x5c),*(uint *)(param_2 + 0x24));
  return;
}


