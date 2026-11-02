/* Module: sfcd.cdd
   Function: FUN_0041f110
   Address: 0041f110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041f110(char *param_1,byte param_2)

{
  if (param_1 == (char *)0x0) {
    return 0x80004003;
  }
  *param_1 = (param_2 >> 4) * '\n' + (param_2 & 0xf);
  return 0;
}


