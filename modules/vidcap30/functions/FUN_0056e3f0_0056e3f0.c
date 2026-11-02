/* Module: vidcap30.exe
   Function: FUN_0056e3f0
   Address: 0056e3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0056e3f0(int *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_0056e2c0(param_2,&local_4);
  if (-1 < iVar1) {
    if (*param_1 != 0) {
      FUN_00404b20(*param_1);
    }
    *param_1 = local_4;
    _mbscpy((uchar *)(param_1 + 1),param_2);
    return iVar1;
  }
  iVar2 = FUN_00572290();
  iVar3 = -0x7ffbfb50;
  if (iVar2 == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}


