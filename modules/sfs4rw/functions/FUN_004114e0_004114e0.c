/* Module: sfs4rw.dll
   Function: FUN_004114e0
   Address: 004114e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004114e0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_00411550(this,(byte *)&local_4);
  if (iVar1 < 0) {
    return 0;
  }
  if (local_4 == -1) {
    return 0;
  }
  local_4 = local_4 - param_1;
  if (local_4 < 0) {
    local_4 = 0;
  }
  uVar2 = FUN_00411530(this);
  return uVar2;
}


