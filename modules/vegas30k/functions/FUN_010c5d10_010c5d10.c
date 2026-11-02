/* Module: vegas30k.dll
   Function: FUN_010c5d10
   Address: 010c5d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_010c5d10(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


