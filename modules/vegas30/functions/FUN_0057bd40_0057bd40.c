/* Module: vegas30.exe
   Function: FUN_0057bd40
   Address: 0057bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0057bd40(LPSTR param_1,int param_2,undefined4 param_3,int param_4,CHAR *param_5)

{
  undefined4 uVar1;
  CHAR local_104 [260];
  
  if (param_5 == (LPCSTR)0x0) {
    GetTempPathA(0x104,local_104);
    param_5 = local_104;
  }
  if (param_4 == 0) {
    uVar1 = _SfGetString_8(DAT_00647204,0x6e26);
    SfPrintF(param_1,"%s%08x.%s",param_5,param_3,uVar1);
  }
  else {
    if (param_4 == 1) {
      uVar1 = _SfGetString_8(DAT_00647204,0x6e26);
      SfPrintF(param_1,"%s*.%s",param_5,uVar1);
      return;
    }
    if (param_4 == 2) {
      lstrcpynA(param_1,param_5,param_2);
      param_1[param_2 + -1] = '\0';
      return;
    }
  }
  return;
}


