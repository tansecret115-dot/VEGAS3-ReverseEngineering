/* Module: sfmarket2.dll
   Function: FUN_00421810
   Address: 00421810
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00421810(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x4e];
  if (((iVar1 == 0) || (param_1[0x4d] == 0)) || (iVar1 == 0)) {
    iVar1 = *param_1;
  }
  return iVar1;
}


