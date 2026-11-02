/* Module: sfppack3.dll
   Function: FUN_5cc7b9a0
   Address: 5cc7b9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5cc7b9a0(void *this,uchar *param_1,int param_2,uint param_3)

{
  int iVar1;
  uchar local_1c [28];
  
  FUN_5cc7aee0(this);
  if (param_2 == 0) {
    iVar1 = FUN_5cc7b6d0(this,(LPSTR)local_1c,0x19);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_5cc7c380(this,local_1c,(HKEY)0x19,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = FUN_5cc7c6f0(this,(LPSTR)local_1c,0x19);
  }
  else {
    iVar1 = FUN_5cc7bfe0(this,local_1c);
  }
  if (-1 < iVar1) {
    _mbscpy(param_1,local_1c);
  }
  return iVar1;
}


