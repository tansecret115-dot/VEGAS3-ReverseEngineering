/* Module: vegas30.exe
   Function: FUN_00477cf0
   Address: 00477cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00477cf0(uint param_1)

{
  undefined4 local_28 [10];
  
  local_28[1] = 0x66;
  local_28[2] = 0x66;
  local_28[4] = 0x66;
  local_28[6] = 6;
  local_28[7] = 6;
  local_28[8] = 6;
  local_28[0] = 0x7f00;
  local_28[3] = 0x67;
  local_28[5] = 0x67;
  local_28[9] = 0x67;
  if (9 < param_1) {
    return 0x7f00;
  }
  return local_28[param_1];
}


