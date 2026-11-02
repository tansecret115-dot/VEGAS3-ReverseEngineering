/* Module: sfcdi.dll
   Function: FUN_5bf44950
   Address: 5bf44950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf44950(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


