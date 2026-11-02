/* Module: mcmpgdec.dll
   Function: FUN_1000a8f8
   Address: 1000a8f8
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000a8f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1000383c((int *)(param_1 + 0x66c));
  if (iVar1 == 0) {
    iVar1 = FUN_1000383c((int *)(param_1 + 0x66c));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        FUN_1000bb3c(param_1,"Invalid macroblock_type code");
      }
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    uVar2 = 0x11;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


