/* Module: vegas30.exe
   Function: FUN_00609460
   Address: 00609460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00609460(HKEY param_1)

{
  int iVar1;
  BYTE local_4 [4];
  
  local_4[0] = '\0';
  local_4[1] = '\0';
  local_4[2] = '\0';
  local_4[3] = '\0';
  iVar1 = FUN_006073a0(param_1,&DAT_00633388,local_4);
  if (-1 < iVar1) {
    RegSetValueExA(param_1,"Merit",0,4,local_4,4);
  }
  return;
}


