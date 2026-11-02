/* Module: qt4plug.dll
   Function: FUN_5f549510
   Address: 5f549510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f549510(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


