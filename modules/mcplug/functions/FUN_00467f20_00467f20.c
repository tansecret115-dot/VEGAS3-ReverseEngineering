/* Module: mcplug.dll
   Function: FUN_00467f20
   Address: 00467f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00467f20(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x7cc);
  *(undefined4 *)((int)this + 0x7cc) = param_1;
  return uVar1;
}


