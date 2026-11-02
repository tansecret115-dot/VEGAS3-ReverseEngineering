/* Module: wavplug.dll
   Function: FUN_5f3b6c80
   Address: 5f3b6c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3b6c80(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


