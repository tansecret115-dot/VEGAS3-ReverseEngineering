/* Module: sfppack1.dll
   Function: FUN_5cdf4d20
   Address: 5cdf4d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdf4d20(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


