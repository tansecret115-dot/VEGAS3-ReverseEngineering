/* Module: extmondrv.dll
   Function: FUN_004266c0
   Address: 004266c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004266c0(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


