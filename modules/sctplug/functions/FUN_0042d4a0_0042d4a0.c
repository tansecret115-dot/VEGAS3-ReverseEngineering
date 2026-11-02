/* Module: sctplug.dll
   Function: FUN_0042d4a0
   Address: 0042d4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042d4a0(DWORD *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  DVar1 = *param_1;
  *param_1 = DVar2;
  return DVar2 - DVar1;
}


