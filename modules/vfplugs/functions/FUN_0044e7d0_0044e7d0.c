/* Module: vfplugs.dll
   Function: FUN_0044e7d0
   Address: 0044e7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044e7d0(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


