/* Module: vidcap30.exe
   Function: FUN_00579390
   Address: 00579390
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00579390(int param_1)

{
  short sVar1;
  FARPROC pFVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  sVar1 = FUN_00578fa0();
  if (sVar1 != 0) {
    return 0xffdd;
  }
  pFVar2 = GetProcAddress(DAT_00663560,s_KALib_Invalidate_005ba20c);
  if (pFVar2 == (FARPROC)0x0) {
    return 0xd8e9;
  }
  iVar3 = (*pFVar2)(param_1);
  return -(uint)(iVar3 != 0) & 0xffffd8e9;
}


