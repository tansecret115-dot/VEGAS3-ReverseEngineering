/* Module: sfs4rw.dll
   Function: FUN_004114a0
   Address: 004114a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004114a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00411550(this,(byte *)&param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_00411530(this);
    return uVar2;
  }
  return 0;
}


