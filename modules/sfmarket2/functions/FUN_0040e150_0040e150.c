/* Module: sfmarket2.dll
   Function: FUN_0040e150
   Address: 0040e150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0040e150(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined ***)this = &PTR_LAB_00495ee0;
  FUN_0042e5c0(param_1);
  return this;
}


