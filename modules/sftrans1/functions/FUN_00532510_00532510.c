/* Module: sftrans1.dll
   Function: FUN_00532510
   Address: 00532510
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00532510(uchar *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_00531a50();
  if (param_2 == 0) {
    iVar1 = FUN_00532240(local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_00532ef0(local_1c,0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_00533260(local_1c,0x19);
  }
  else {
    iVar1 = FUN_00532b50(local_1c,0x19);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


