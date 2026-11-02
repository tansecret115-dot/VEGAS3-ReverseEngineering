/* Module: sfpagepeel.dll
   Function: FUN_0042e8b0
   Address: 0042e8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e8b0(int *param_1,byte param_2)

{
  int iVar1;
  
  if ((param_2 & 3) != 0) {
    return 0x12340042;
  }
  if ((((0 < param_1[2]) && (0 < param_1[3])) && (iVar1 = FUN_0042e810(0), *param_1 < iVar1)) &&
     (iVar1 = FUN_0042e810(1), param_1[1] < iVar1)) {
    return 0x12340042;
  }
  return 0;
}


