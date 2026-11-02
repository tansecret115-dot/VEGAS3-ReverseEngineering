/* Module: sfppack1.dll
   Function: FUN_5cdfcc8c
   Address: 5cdfcc8c
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfcc8c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x14);
    param_2[1] = *(undefined4 *)(param_1 + 0x18);
    param_2[2] = *(undefined4 *)(param_1 + 0x1c);
    param_2[3] = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}


