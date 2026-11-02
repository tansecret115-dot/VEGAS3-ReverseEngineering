/* Module: sfmarket2.dll
   Function: FUN_0040f2c0
   Address: 0040f2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040f2c0(int *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  size_t sVar2;
  int iVar3;
  int unaff_ESI;
  int *piVar4;
  int *piVar5;
  int local_4;
  
  pwVar1 = param_2;
  sVar2 = wcslen(param_2);
  piVar4 = &local_4;
  local_4 = sVar2 << 1;
  piVar5 = (int *)0x4;
  param_2 = (wchar_t *)0x0;
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1,piVar4,4,&param_2);
  if (-1 < iVar3) {
    if (unaff_ESI == 4) {
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1,pwVar1,piVar5,&stack0xfffffff8);
      if (iVar3 < 0) {
        return iVar3;
      }
      if (piVar5 == piVar4) {
        return iVar3;
      }
    }
    iVar3 = -0x7ffb1fc7;
  }
  return iVar3;
}


