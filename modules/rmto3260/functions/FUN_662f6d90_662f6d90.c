/* Module: rmto3260.dll
   Function: FUN_662f6d90
   Address: 662f6d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662f6d90(void *this,uint param_1)

{
  if ((7999 < param_1) && (param_1 < 0x1fa5)) {
    *(undefined4 *)((int)this + 0x10) = 8000;
    return 1;
  }
  if ((10999 < param_1) && (param_1 < 0x2bc1)) {
    *(undefined4 *)((int)this + 0x10) = 0x2b11;
    return 1;
  }
  if ((15999 < param_1) && (param_1 < 0x3f49)) {
    *(undefined4 *)((int)this + 0x10) = 16000;
    return 1;
  }
  if ((21999 < param_1) && (param_1 < 0x571d)) {
    *(undefined4 *)((int)this + 0x10) = 0x5622;
    return 1;
  }
  if ((31999 < param_1) && (param_1 < 0x80e9)) {
    *(undefined4 *)((int)this + 0x10) = 32000;
    return 1;
  }
  if ((43999 < param_1) && (param_1 < 0xad71)) {
    *(undefined4 *)((int)this + 0x10) = 0xac44;
    return 1;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}


