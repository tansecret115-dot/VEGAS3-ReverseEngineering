/* Module: wavplug.dll
   Function: FUN_5f3be9e0
   Address: 5f3be9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f3be9e0(void *this,uchar *param_1,int param_2,uint param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_5f3bdf20(this);
  if (param_2 == 0) {
    iVar1 = FUN_5f3be710(this,(LPSTR)local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_5f3bf3c0(this,local_1c,(HKEY)0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_5f3bf730(this,(LPSTR)local_1c,0x19);
  }
  else {
    iVar1 = FUN_5f3bf020(this,local_1c);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


