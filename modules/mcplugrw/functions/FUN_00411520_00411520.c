/* Module: mcplugrw.dll
   Function: FUN_00411520
   Address: 00411520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411520(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004115d0(this,(byte *)&param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_004115b0(this);
    return uVar2;
  }
  return 0;
}


