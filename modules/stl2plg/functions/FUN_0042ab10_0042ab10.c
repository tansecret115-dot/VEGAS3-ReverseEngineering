/* Module: stl2plg.dll
   Function: FUN_0042ab10
   Address: 0042ab10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042ab10(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


