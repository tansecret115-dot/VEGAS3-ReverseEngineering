/* Module: vidpcore.dll
   Function: FUN_5df0a570
   Address: 5df0a570
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5df0a570(int *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_5df0a440(param_2,&local_4);
  if (-1 < iVar1) {
    if (*param_1 != 0) {
      FUN_5de03b10(*param_1);
    }
    *param_1 = local_4;
    _mbscpy((uchar *)(param_1 + 1),param_2);
    return iVar1;
  }
  iVar2 = FUN_5df0e410();
  iVar3 = -0x7ffbfb50;
  if (iVar2 == 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}


