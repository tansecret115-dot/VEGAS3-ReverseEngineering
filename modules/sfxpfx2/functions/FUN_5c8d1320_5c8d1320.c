/* Module: sfxpfx2.dll
   Function: FUN_5c8d1320
   Address: 5c8d1320
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c8d1320(void *this,uchar *param_1,int param_2,uint param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_5c8d0860(this);
  if (param_2 == 0) {
    iVar1 = FUN_5c8d1050(this,(LPSTR)local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_5c8d1d00(this,local_1c,(HKEY)0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_5c8d2070(this,(LPSTR)local_1c,0x19);
  }
  else {
    iVar1 = FUN_5c8d1960(this,local_1c);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


