/* Module: sftrans1.dll
   Function: FUN_00508750
   Address: 00508750
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00508750(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return (DVar2 - DVar1) * 1000;
}


