/* Module: vegas30k.dll
   Function: FUN_01170e90
   Address: 01170e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01170e90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01170d10(param_1,0x7f,7);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}


