/* Module: mcplugrw.dll
   Function: FUN_00411560
   Address: 00411560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411560(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_004115d0(this,(byte *)&local_4);
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
  uVar2 = FUN_004115b0(this);
  return uVar2;
}


