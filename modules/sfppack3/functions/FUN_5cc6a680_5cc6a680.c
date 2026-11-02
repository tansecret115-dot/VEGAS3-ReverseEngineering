/* Module: sfppack3.dll
   Function: FUN_5cc6a680
   Address: 5cc6a680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc6a680(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


