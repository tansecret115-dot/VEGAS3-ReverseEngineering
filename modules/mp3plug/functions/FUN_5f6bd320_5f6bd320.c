/* Module: mp3plug.dll
   Function: FUN_5f6bd320
   Address: 5f6bd320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6bd320(int *param_1,byte param_2)

{
  int iVar1;
  
  if ((param_2 & 3) != 0) {
    return 0x12340042;
  }
  if ((((0 < param_1[2]) && (0 < param_1[3])) && (iVar1 = FUN_5f6bd280(0), *param_1 < iVar1)) &&
     (iVar1 = FUN_5f6bd280(1), param_1[1] < iVar1)) {
    return 0x12340042;
  }
  return 0;
}


