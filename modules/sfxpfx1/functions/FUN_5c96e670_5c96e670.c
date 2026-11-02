/* Module: sfxpfx1.dll
   Function: FUN_5c96e670
   Address: 5c96e670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c96e670(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


