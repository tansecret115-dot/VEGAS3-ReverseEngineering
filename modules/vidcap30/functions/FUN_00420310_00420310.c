/* Module: vidcap30.exe
   Function: FUN_00420310
   Address: 00420310
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00420310(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 == 5) {
    uVar1 = FUN_00430e80(param_1[0x7c],param_2);
    uVar1 = uVar1 & 8;
  }
  return uVar1;
}


