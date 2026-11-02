/* Module: oggplug.dll
   Function: FUN_0041cf10
   Address: 0041cf10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041cf10(int *param_1,byte param_2)

{
  int iVar1;
  
  if ((param_2 & 3) != 0) {
    return 0x12340042;
  }
  if ((((0 < param_1[2]) && (0 < param_1[3])) && (iVar1 = FUN_0041ce70(0), *param_1 < iVar1)) &&
     (iVar1 = FUN_0041ce70(1), param_1[1] < iVar1)) {
    return 0x12340042;
  }
  return 0;
}


