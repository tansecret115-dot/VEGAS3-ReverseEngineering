/* Module: sfs4rw.dll
   Function: FUN_00410840
   Address: 00410840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00410840(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x7cc);
  *(undefined4 *)((int)this + 0x7cc) = param_1;
  return uVar1;
}


