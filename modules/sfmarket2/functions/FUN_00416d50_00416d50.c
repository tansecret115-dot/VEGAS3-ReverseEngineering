/* Module: sfmarket2.dll
   Function: FUN_00416d50
   Address: 00416d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00416d50(void *this,uchar *param_1,int param_2,uint param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_00416290(this);
  if (param_2 == 0) {
    iVar1 = FUN_00416a80(this,(LPSTR)local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_00417730(this,local_1c,(HKEY)0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_00417aa0(this,(LPSTR)local_1c,0x19);
  }
  else {
    iVar1 = FUN_00417390(this,local_1c);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


