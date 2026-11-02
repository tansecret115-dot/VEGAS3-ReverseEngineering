/* Module: encn3260.dll
   Function: FUN_664d8180
   Address: 664d8180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d8180(void *this,int param_1)

{
  if (param_1 != 0) {
    *(int *)((int)this + 0x18) = param_1;
    return 0;
  }
  return 0x80004005;
}


