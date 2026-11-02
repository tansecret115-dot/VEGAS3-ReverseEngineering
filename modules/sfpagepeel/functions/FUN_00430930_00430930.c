/* Module: sfpagepeel.dll
   Function: FUN_00430930
   Address: 00430930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00430930(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


