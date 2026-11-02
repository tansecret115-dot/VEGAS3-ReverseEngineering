/* Module: sfmarket2.dll
   Function: FUN_00414800
   Address: 00414800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00414800(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x7cc);
  *(undefined4 *)((int)this + 0x7cc) = param_1;
  return uVar1;
}


