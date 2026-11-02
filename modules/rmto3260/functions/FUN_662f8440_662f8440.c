/* Module: rmto3260.dll
   Function: FUN_662f8440
   Address: 662f8440
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662f8440(void *this,byte param_1)

{
  if ((param_1 & 1) != 0) {
    *(undefined4 *)((int)this + 0x56) = 1;
  }
  if ((param_1 & 4) != 0) {
    *(undefined4 *)((int)this + 0x5e) = 1;
  }
  if ((param_1 & 8) != 0) {
    *(undefined4 *)((int)this + 0x62) = 1;
    *(undefined4 *)((int)this + 0x5e) = 1;
  }
  return;
}


