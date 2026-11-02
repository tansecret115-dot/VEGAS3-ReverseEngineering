/* Module: sfppack3.dll
   Function: FUN_5cc43360
   Address: 5cc43360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5cc43360(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_7 - param_5;
  if (0 < iVar2) {
    iVar1 = iVar2 - (int)(((longlong)(param_2 + 0x348) * (longlong)iVar2) / 0x348);
  }
  param_3[1] = iVar1;
  if (0 < param_6 - param_4) {
    *param_3 = (int)(((longlong)(param_1 + 0x348) * (longlong)(param_6 - param_4)) / 0x348);
    return 1;
  }
  *param_3 = 0;
  return 1;
}


