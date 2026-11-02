/* Module: rmbe3260.dll
   Function: FUN_66021e80
   Address: 66021e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021e80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0x192) != (void *)0x0) {
    uVar1 = FUN_6603c1e0(*(void **)(param_1 + 0x192),param_2);
    return uVar1;
  }
  return 0x80004005;
}


