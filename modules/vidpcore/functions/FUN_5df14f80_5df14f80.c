/* Module: vidpcore.dll
   Function: FUN_5df14f80
   Address: 5df14f80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5df14f80(int param_1)

{
  short sVar1;
  FARPROC pFVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  sVar1 = FUN_5df14b90();
  if (sVar1 != 0) {
    return 0xffdd;
  }
  pFVar2 = GetProcAddress(DAT_5dff1acc,s_KALib_Invalidate_5df42724);
  if (pFVar2 == (FARPROC)0x0) {
    return 0xd8e9;
  }
  iVar3 = (*pFVar2)(param_1);
  return -(uint)(iVar3 != 0) & 0xffffd8e9;
}


