/* Module: vidcap30.exe
   Function: FUN_00578680
   Address: 00578680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00578680(HKEY param_1)

{
  int iVar1;
  BYTE local_4 [4];
  
  local_4[0] = '\0';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  iVar1 = FUN_005768f0(param_1,&DAT_005a58dc,local_4);
  if (-1 < iVar1) {
    RegSetValueExA(param_1,"Merit",0,4,local_4,4);
  }
  return;
}


