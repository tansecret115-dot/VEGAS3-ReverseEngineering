/* Module: erv23260.dll
   Function: FUN_637f5020
   Address: 637f5020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f5020(void *this,int param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 0x2f4) == param_1) {
    *(undefined4 *)((int)this + 0x2f4) = param_2;
  }
  return;
}


