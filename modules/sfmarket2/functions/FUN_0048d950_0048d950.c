/* Module: sfmarket2.dll
   Function: FUN_0048d950
   Address: 0048d950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048d950(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0048d7d0(param_1,0x7f,7);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}


