/* Module: vidpcore.dll
   Function: FUN_5ded64a0
   Address: 5ded64a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ded64a0(int *param_1,byte param_2)

{
  int iVar1;
  
  if ((param_2 & 3) != 0) {
    return 0x12340042;
  }
  if ((((0 < param_1[2]) && (0 < param_1[3])) && (iVar1 = FUN_5ded6400(0), *param_1 < iVar1)) &&
     (iVar1 = FUN_5ded6400(1), param_1[1] < iVar1)) {
    return 0x12340042;
  }
  return 0;
}


