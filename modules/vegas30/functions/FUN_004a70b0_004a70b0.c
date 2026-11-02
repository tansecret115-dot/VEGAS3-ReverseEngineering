/* Module: vegas30.exe
   Function: FUN_004a70b0
   Address: 004a70b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a70b0(HMENU param_1,undefined4 param_2,LPCSTR param_3,UINT_PTR param_4,
                 undefined4 param_5)

{
  int iVar1;
  CLSID local_22c;
  WCHAR local_21c [39];
  undefined2 local_1ce;
  CHAR local_1cc [200];
  uchar local_104 [260];
  
  MultiByteToWideChar(0,1,param_3,-1,local_21c,0x28);
  local_1ce = 0;
  CLSIDFromString(local_21c,&local_22c);
  iVar1 = lstrcmpiA("{da6f7c17-cd66-11d1-9aa7-00a0c99b12c5}",param_3);
  if (iVar1 == 0) {
    _mbscpy(local_104,(uchar *)"Crossfade");
  }
  else {
    iVar1 = FUN_00508960(local_104,&local_22c,0x104);
    if (iVar1 == 0) {
      return;
    }
  }
  SfPrintF(local_1cc,param_2,local_104,param_5);
  _SfStringReplaceChars_12(local_1cc,9,8);
  AppendMenuA(param_1,0,param_4,local_1cc);
  return;
}


