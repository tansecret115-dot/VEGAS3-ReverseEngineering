/* Module: sfppack2.dll
   Function: FUN_5cd3f849
   Address: 5cd3f849
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd3f849(short *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


