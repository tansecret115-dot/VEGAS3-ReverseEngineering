/* Module: vegas30.exe
   Function: FUN_0060a170
   Address: 0060a170
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0060a170(int param_1)

{
  short sVar1;
  FARPROC pFVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  sVar1 = FUN_00609d80();
  if (sVar1 != 0) {
    return 0xffdd;
  }
  pFVar2 = GetProcAddress(DAT_0065f618,s_KALib_Invalidate_00647134);
  if (pFVar2 == (FARPROC)0x0) {
    return 0xd8e9;
  }
  iVar3 = (*pFVar2)(param_1);
  return -(uint)(iVar3 != 0) & 0xffffd8e9;
}


