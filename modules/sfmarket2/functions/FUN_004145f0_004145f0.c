/* Module: sfmarket2.dll
   Function: FUN_004145f0
   Address: 004145f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004145f0(void *this,uchar *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_004144c0(this,(LPCSTR)param_1,&local_4);
  if (-1 < iVar1) {
    if (*(LPCVOID *)this != (LPCVOID)0x0) {
      FUN_004028d0(*(LPCVOID *)this);
    }
    *(undefined4 *)this = local_4;
    _mbscpy((uchar *)((int)this + 4),param_1);
    return iVar1;
  }
  iVar2 = FUN_00418490(this);
  iVar3 = -0x7ffbfb50;
  if (iVar2 == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}


