/* Module: mcmpgdec.dll
   Function: FUN_1000a750
   Address: 1000a750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000a750(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10003a04((int *)(param_1 + 0x66c),1);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_10003a04((int *)(param_1 + 0x66c),1);
    uVar2 = 1;
    if (uVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


