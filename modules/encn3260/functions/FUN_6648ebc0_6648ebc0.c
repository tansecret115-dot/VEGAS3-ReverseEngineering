/* Module: encn3260.dll
   Function: FUN_6648ebc0
   Address: 6648ebc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648ebc0(void *this,int *param_1)

{
  *(int **)((int)this + 0x91) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined4 *)(*(int *)((int)this + 0x91) + 0x8c) = *(undefined4 *)((int)this + 0x8d);
  return;
}


