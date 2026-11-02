/* Module: sfs4rw.dll
   Function: FUN_00416a10
   Address: 00416a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00416a10(void *this,undefined2 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80004005;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *(undefined2 *)((int)this + 0x7f8);
    uVar1 = 0;
  }
  return uVar1;
}


