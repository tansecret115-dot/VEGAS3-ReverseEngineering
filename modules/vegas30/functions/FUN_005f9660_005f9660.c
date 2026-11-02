/* Module: vegas30.exe
   Function: FUN_005f9660
   Address: 005f9660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005f9660(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  uchar local_144 [64];
  undefined1 local_104 [260];
  
  if (param_4 == 0) {
    _mbscpy(local_144,"%d");
  }
  else {
    SfPrintF(local_144,"%%.%dd",param_4);
  }
  SfPrintF(local_104,"%s%s%%s",param_2,local_144);
  SfPrintF(param_1,local_104,param_3,param_5);
  return;
}


