/* Module: sfnetmedia.dll
   Function: FUN_0042dc50
   Address: 0042dc50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042dc50(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


