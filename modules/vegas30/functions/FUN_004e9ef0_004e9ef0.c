/* Module: vegas30.exe
   Function: FUN_004e9ef0
   Address: 004e9ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e9ef0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uchar *_Source;
  uchar local_40 [64];
  
  if (param_3 == 0) {
    cVar1 = (-(param_2 != 0) & 2U) + 0x6f;
  }
  else {
    cVar1 = (-(param_2 != 0) & 2U) + 0x6e;
  }
  _Source = (uchar *)_SfGetString_8(DAT_00647204,cVar1);
  _mbscpy(local_40,_Source);
  _SfStringReplaceChars_12(local_40,9,8);
  SfPrintF(param_1,local_40,param_2);
  return;
}


