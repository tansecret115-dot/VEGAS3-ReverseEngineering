/* Module: vegas30.exe
   Function: FUN_0047c360
   Address: 0047c360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047c360(uint param_1)

{
  SHORT SVar1;
  undefined4 uVar2;
  undefined4 local_20 [8];
  
  uVar2 = 0x7f00;
  local_20[4] = 0x7f00;
  local_20[5] = 4;
  local_20[6] = 6;
  local_20[7] = 8;
  local_20[0] = 0x7f00;
  local_20[1] = 4;
  local_20[2] = 5;
  local_20[3] = 8;
  if (param_1 < 4) {
    SVar1 = GetAsyncKeyState(0x10);
    if (SVar1 < 0) {
      return local_20[param_1];
    }
    uVar2 = local_20[param_1 + 4];
  }
  return uVar2;
}


