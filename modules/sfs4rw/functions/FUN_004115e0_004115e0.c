/* Module: sfs4rw.dll
   Function: FUN_004115e0
   Address: 004115e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004115e0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00411690(this,(byte *)&param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_00411670(this);
    return uVar2;
  }
  return 0;
}


