/* Module: sftrans1.dll
   Function: FUN_00539a80
   Address: 00539a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00539a80(HKEY param_1)

{
  int iVar1;
  BYTE local_4 [4];
  
  local_4[0] = '\0';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  iVar1 = FUN_005379c0(param_1,&DAT_0056f084,local_4);
  if (-1 < iVar1) {
    RegSetValueExA(param_1,"Merit",0,4,local_4,4);
  }
  return;
}


