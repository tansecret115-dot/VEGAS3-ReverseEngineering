/* Module: mpegin.dll
   Function: FUN_10003800
   Address: 10003800
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_10003800(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x20);
  uVar1 = uVar1 >> 4 & 0xf;
  if ((uVar1 != 0) && (uVar1 < 0xf)) {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x12);
    if (uVar1 != 0) {
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
      return (bool)('\x01' - (uVar1 != 0));
    }
  }
  return true;
}


