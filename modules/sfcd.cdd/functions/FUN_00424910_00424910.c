/* Module: sfcd.cdd
   Function: FUN_00424910
   Address: 00424910
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424910(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


