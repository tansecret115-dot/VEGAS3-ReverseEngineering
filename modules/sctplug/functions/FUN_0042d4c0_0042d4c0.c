/* Module: sctplug.dll
   Function: FUN_0042d4c0
   Address: 0042d4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042d4c0(int *param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  return DVar1 - *param_1;
}


