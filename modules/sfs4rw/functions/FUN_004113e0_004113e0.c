/* Module: sfs4rw.dll
   Function: FUN_004113e0
   Address: 004113e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004113e0(void *this,int param_1,int param_2)

{
  if (param_1 == 0) {
    FUN_00411530(this);
    return;
  }
  if (0 < param_2) {
    FUN_00411530(this);
    return;
  }
  FUN_00411530(this);
  return;
}


