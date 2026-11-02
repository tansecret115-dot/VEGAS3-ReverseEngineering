/* Module: sfxpfx2.dll
   Function: FUN_5c8cd975
   Address: 5c8cd975
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8cd975(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


