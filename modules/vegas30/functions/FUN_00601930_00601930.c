/* Module: vegas30.exe
   Function: FUN_00601930
   Address: 00601930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00601930(uchar *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_00600e70();
  if (param_2 == 0) {
    iVar1 = FUN_00601660(local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_00602310(local_1c,0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_00602680(local_1c,0x19);
  }
  else {
    iVar1 = FUN_00601f70(local_1c,0x19);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


