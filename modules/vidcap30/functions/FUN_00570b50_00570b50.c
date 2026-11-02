/* Module: vidcap30.exe
   Function: FUN_00570b50
   Address: 00570b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00570b50(uchar *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_00570090();
  if (param_2 == 0) {
    iVar1 = FUN_00570880(local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_00571530(local_1c,0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_005718a0(local_1c,0x19);
  }
  else {
    iVar1 = FUN_00571190(local_1c,0x19);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


