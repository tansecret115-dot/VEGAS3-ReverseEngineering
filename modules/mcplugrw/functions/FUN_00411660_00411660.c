/* Module: mcplugrw.dll
   Function: FUN_00411660
   Address: 00411660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411660(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00411710(this,(byte *)&param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_004116f0(this);
    return uVar2;
  }
  return 0;
}


