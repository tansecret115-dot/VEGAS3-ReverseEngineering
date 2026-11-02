/* Module: sfppack1.dll
   Function: FUN_5ce06010
   Address: 5ce06010
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5ce06010(void *this,uchar *param_1,int param_2,uint param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_5ce05550(this);
  if (param_2 == 0) {
    iVar1 = FUN_5ce05d40(this,(LPSTR)local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_5ce069f0(this,local_1c,(HKEY)&DAT_00000019,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_5ce06d60(this,(LPSTR)local_1c,0x19);
  }
  else {
    iVar1 = FUN_5ce06650(this,local_1c);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


