/* Module: sfcdi.dll
   Function: FUN_5bf2b830
   Address: 5bf2b830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf2b830(char *param_1,byte param_2)

{
  if (param_1 == (char *)0x0) {
    return 0x80004003;
  }
  *param_1 = (param_2 >> 4) * '\n' + (param_2 & 0xf);
  return 0;
}


