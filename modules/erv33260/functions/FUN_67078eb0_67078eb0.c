/* Module: erv33260.dll
   Function: FUN_67078eb0
   Address: 67078eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67078eb0(void *this,int param_1)

{
  (**(code **)(**(int **)((int)this + 0x16c) + 0x34))(param_1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 0x88);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x8c);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  return;
}


