/* Module: vidpcore.dll
   Function: FUN_5df0ccd0
   Address: 5df0ccd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df0ccd0(uchar *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_5df0c210();
  if (param_2 == 0) {
    iVar1 = FUN_5df0ca00(local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_5df0d6b0(local_1c,0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_5df0da20(local_1c,0x19);
  }
  else {
    iVar1 = FUN_5df0d310(local_1c,0x19);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


