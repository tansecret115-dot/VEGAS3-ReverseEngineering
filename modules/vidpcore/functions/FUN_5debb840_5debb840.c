/* Module: vidpcore.dll
   Function: FUN_5debb840
   Address: 5debb840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5debb840(int *param_1,int *param_2)

{
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) &&
      (param_1[2] - *param_1 == param_2[2] - *param_2)) &&
     (param_1[3] - param_1[1] == param_2[3] - param_2[1])) {
    return 1;
  }
  return 0;
}


