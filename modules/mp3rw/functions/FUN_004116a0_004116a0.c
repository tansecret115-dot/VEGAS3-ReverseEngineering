/* Module: mp3rw.dll
   Function: FUN_004116a0
   Address: 004116a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004116a0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_00411710(this,(byte *)&local_4);
  if ((-1 < iVar1) && (local_4 != 0)) {
    local_4 = local_4 - param_1;
    if (local_4 < 0) {
      local_4 = 0;
    }
    uVar2 = FUN_004116f0(this);
    return uVar2;
  }
  return 0;
}


