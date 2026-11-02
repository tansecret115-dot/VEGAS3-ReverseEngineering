/* Module: Setup.exe
   Function: FUN_00429250
   Address: 00429250
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00429250(void *this,uchar *param_1,int param_2,uint param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_00428790(this);
  if (param_2 == 0) {
    iVar1 = FUN_00428f80(this,(LPSTR)local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_00429c30(this,local_1c,(HKEY)0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_00429fa0(this,(LPSTR)local_1c,0x19);
  }
  else {
    iVar1 = FUN_00429890(this,local_1c);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


