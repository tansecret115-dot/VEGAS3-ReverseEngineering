/* Module: mp3plug.dll
   Function: FUN_5f71e9e0
   Address: 5f71e9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f71e9e0(void *this,uchar *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_5f71e8b0(this,(LPCSTR)param_1,&local_4);
  if (-1 < iVar1) {
    if (*(LPCVOID *)this != (LPCVOID)0x0) {
      FUN_5f681ba0(*(LPCVOID *)this);
    }
    *(undefined4 *)this = local_4;
    _mbscpy((uchar *)((int)this + 4),param_1);
    return iVar1;
  }
  iVar2 = FUN_5f722880(this);
  iVar3 = -0x7ffbfb50;
  if (iVar2 == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}


