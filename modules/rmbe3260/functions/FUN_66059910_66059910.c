/* Module: rmbe3260.dll
   Function: FUN_66059910
   Address: 66059910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66059910(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((7999 < param_1) && (param_1 < 0x1fa5)) {
    *param_2 = 8000;
    return uVar1;
  }
  if ((10999 < param_1) && (param_1 < 0x2bc1)) {
    *param_2 = 0x2b11;
    return uVar1;
  }
  if ((15999 < param_1) && (param_1 < 0x3f49)) {
    *param_2 = 16000;
    return uVar1;
  }
  if ((21999 < param_1) && (param_1 < 0x571d)) {
    *param_2 = 0x5622;
    return uVar1;
  }
  if ((31999 < param_1) && (param_1 < 0x80e9)) {
    *param_2 = 32000;
    return uVar1;
  }
  if ((43999 < param_1) && (param_1 < 0xad71)) {
    *param_2 = 0xac44;
    return uVar1;
  }
  if ((46999 < param_1) && (param_1 < 0xbf69)) {
    *param_2 = 48000;
    return uVar1;
  }
  *param_2 = 0;
  return 0;
}


