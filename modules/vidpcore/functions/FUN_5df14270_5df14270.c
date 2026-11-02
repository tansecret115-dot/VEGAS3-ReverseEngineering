/* Module: vidpcore.dll
   Function: FUN_5df14270
   Address: 5df14270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df14270(HKEY param_1)

{
  int iVar1;
  BYTE local_4 [4];
  
  local_4[0] = '\0';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  iVar1 = FUN_5df121b0(param_1,&DAT_5df389c8,local_4);
  if (-1 < iVar1) {
    RegSetValueExA(param_1,"Merit",0,4,local_4,4);
  }
  return;
}


