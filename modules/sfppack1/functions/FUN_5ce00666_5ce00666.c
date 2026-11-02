/* Module: sfppack1.dll
   Function: FUN_5ce00666
   Address: 5ce00666
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5ce00666(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  *(undefined4 *)((int)this + 0x1c) = param_1[3];
  return;
}


