/* Module: stl2plg.dll
   Function: FUN_0042ab20
   Address: 0042ab20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042ab20(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


