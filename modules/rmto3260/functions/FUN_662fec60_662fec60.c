/* Module: rmto3260.dll
   Function: FUN_662fec60
   Address: 662fec60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662fec60(void *this,undefined4 param_1,undefined4 param_2)

{
  if (((*(int *)((int)this + 0x210) != 0) && (*(int *)((int)this + 0x227) != 0)) &&
     (*(code **)((int)this + 0x247) != (code *)0x0)) {
    (**(code **)((int)this + 0x247))(*(int *)((int)this + 0x227),param_1,param_2);
    return 0;
  }
  *(undefined4 *)((int)this + 0x20c) = 0x80040007;
  return 0x80040007;
}


