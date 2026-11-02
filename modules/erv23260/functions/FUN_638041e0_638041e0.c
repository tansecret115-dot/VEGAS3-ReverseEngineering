/* Module: erv23260.dll
   Function: FUN_638041e0
   Address: 638041e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_638041e0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (uVar1 = 3, *(int *)((int)this + 0x1c) <= param_1)) {
    uVar1 = 10;
  }
  return uVar1;
}


