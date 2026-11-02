/* Module: sftrkfx1.dll
   Function: FUN_5cbab6d0
   Address: 5cbab6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbab6d0(uint param_1)

{
  SHORT SVar1;
  uint local_20 [8];
  
  local_20[4] = 0x7f00;
  local_20[5] = 4;
  local_20[6] = 6;
  local_20[7] = 8;
  local_20[0] = 0x7f00;
  local_20[1] = 4;
  local_20[2] = 5;
  local_20[3] = 8;
  if (3 < param_1) {
    FUN_5cbdec70(0x7f00);
    return;
  }
  SVar1 = GetAsyncKeyState(0x10);
  if (SVar1 < 0) {
    FUN_5cbdec70(local_20[param_1]);
    return;
  }
  FUN_5cbdec70(local_20[param_1 + 4]);
  return;
}


