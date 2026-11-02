/* Module: vegas30.exe
   Function: FUN_005ff1d0
   Address: 005ff1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005ff1d0(int *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_005ff0a0(param_2,&local_4);
  if (-1 < iVar1) {
    if (*param_1 != 0) {
      FUN_0040bfc0(*param_1);
    }
    *param_1 = local_4;
    _mbscpy((uchar *)(param_1 + 1),param_2);
    return iVar1;
  }
  iVar2 = FUN_00603070();
  iVar3 = -0x7ffbfb50;
  if (iVar2 == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}


