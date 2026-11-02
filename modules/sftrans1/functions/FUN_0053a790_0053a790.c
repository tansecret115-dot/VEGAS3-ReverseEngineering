/* Module: sftrans1.dll
   Function: FUN_0053a790
   Address: 0053a790
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0053a790(int param_1)

{
  short sVar1;
  FARPROC pFVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  sVar1 = FUN_0053a3a0();
  if (sVar1 != 0) {
    return 0xffdd;
  }
  pFVar2 = GetProcAddress(DAT_00622464,s_KALib_Invalidate_00576924);
  if (pFVar2 == (FARPROC)0x0) {
    return 0xd8e9;
  }
  iVar3 = (*pFVar2)(param_1);
  return -(uint)(iVar3 != 0) & 0xffffd8e9;
}


