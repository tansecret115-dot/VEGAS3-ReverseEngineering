/* Module: mcplug.dll
   Function: FUN_00439b70
   Address: 00439b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00439b70(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


