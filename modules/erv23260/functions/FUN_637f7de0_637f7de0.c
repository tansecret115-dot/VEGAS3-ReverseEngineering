/* Module: erv23260.dll
   Function: FUN_637f7de0
   Address: 637f7de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f7de0(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  iVar1 = *param_4;
  iVar2 = iVar1;
  if (iVar1 == 0) {
    while ((0 < param_3 &&
           (piVar3 = FUN_637f3230((int *)0x0,param_1,param_2,*(undefined4 *)((int)this + 0xc),
                                  &local_8), local_8 == 0))) {
      FUN_637f7da0(param_4,(int)piVar3);
      param_3 = param_3 + -1;
    }
  }
  else {
    do {
      if (iVar2 == 0) break;
      iVar2 = *(int *)(iVar2 + 0x90);
    } while (iVar1 != iVar2);
    if (0 < param_3) {
      while (piVar3 = FUN_637f3230((int *)*param_4,param_1,param_2,*(undefined4 *)((int)this + 0xc),
                                   &local_8), local_8 == 0) {
        if (piVar3 != (int *)*param_4) {
          FUN_637f97a0(*param_4,(int)piVar3);
          FUN_637f1080((void *)*param_4);
          *param_4 = (int)piVar3;
        }
        param_3 = param_3 + -1;
        *param_4 = *(int *)(*param_4 + 0x90);
        if (param_3 < 1) {
          return local_8;
        }
      }
    }
  }
  return local_8;
}


