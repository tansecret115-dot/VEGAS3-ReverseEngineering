/* Module: oggplug.dll
   Function: FUN_0041ef90
   Address: 0041ef90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ef90(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


