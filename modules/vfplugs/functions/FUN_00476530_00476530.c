/* Module: vfplugs.dll
   Function: FUN_00476530
   Address: 00476530
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00476530(void *this,uchar *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_00476400(this,(LPCSTR)param_1,&local_4);
  if (-1 < iVar1) {
    if (*(LPCVOID *)this != (LPCVOID)0x0) {
      FUN_0040a640(*(LPCVOID *)this);
    }
    *(undefined4 *)this = local_4;
    _mbscpy((uchar *)((int)this + 4),param_1);
    return iVar1;
  }
  iVar2 = FUN_0047a3d0(this);
  iVar3 = -0x7ffbfb50;
  if (iVar2 == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}


