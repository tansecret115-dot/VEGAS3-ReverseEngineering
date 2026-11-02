/* Module: sfxpfx1.dll
   Function: FUN_5c977694
   Address: 5c977694
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c977694(void *this,int *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_8;
  
  piVar1 = param_3;
  local_8 = this;
  iVar2 = (**(code **)(*param_3 + 0x14))(param_3);
  if (-1 < iVar2) {
    param_3 = (int *)0x0;
    local_8 = (void *)0x0;
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_3,&local_8);
    iVar2 = 0;
    while (iVar3 == 0) {
      if ((param_2 == (char *)0x0) || (iVar3 = FUN_5c97c72e(param_3,param_2), iVar3 != 0)) {
        iVar3 = FUN_5c9775e7(this,param_1);
        if (((iVar3 < 0) && (((-1 < iVar2 && (iVar3 != -0x7fffbffb)) && (iVar3 != -0x7ff8ffa9)))) &&
           (iVar3 != -0x7ffbfdd6)) {
          iVar2 = iVar3;
        }
      }
      else {
        iVar3 = -0x7ffbfdf9;
      }
      FUN_5c97c7b8(param_3);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_3,&local_8);
    }
    if (iVar2 == 0) {
      iVar2 = -0x7ffbfdf9;
    }
  }
  return iVar2;
}


