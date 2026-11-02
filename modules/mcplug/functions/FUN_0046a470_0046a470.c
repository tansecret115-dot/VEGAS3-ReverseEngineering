/* Module: mcplug.dll
   Function: FUN_0046a470
   Address: 0046a470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0046a470(void *this,uchar *param_1,int param_2,uint param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_004699b0(this);
  if (param_2 == 0) {
    iVar1 = FUN_0046a1a0(this,(LPSTR)local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_0046ae50(this,local_1c,(HKEY)0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_0046b1c0(this,(LPSTR)local_1c,0x19);
  }
  else {
    iVar1 = FUN_0046aab0(this,local_1c);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


