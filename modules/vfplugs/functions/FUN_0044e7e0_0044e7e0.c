/* Module: vfplugs.dll
   Function: FUN_0044e7e0
   Address: 0044e7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044e7e0(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


