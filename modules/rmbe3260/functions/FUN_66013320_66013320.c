/* Module: rmbe3260.dll
   Function: FUN_66013320
   Address: 66013320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66013320(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  FUN_6605b970((void *)(param_1 + 0xc),param_4);
  return 0;
}


