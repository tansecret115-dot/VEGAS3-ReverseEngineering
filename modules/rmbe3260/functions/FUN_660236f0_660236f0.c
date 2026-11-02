/* Module: rmbe3260.dll
   Function: FUN_660236f0
   Address: 660236f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660236f0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  piVar2 = (int *)0x0;
  local_8 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (0 < *(int *)((int)this + 0x40)) {
      do {
        piVar2 = *(int **)(*(int *)((int)this + 0x3c) + iVar3 * 4);
        (**(code **)(piVar2[4] + 0x10))(piVar2 + 4,&local_10);
        (**(code **)(*(int *)(*param_1 + 0x10) + 0x10))((int *)(*param_1 + 0x10),&local_18);
        if ((local_10 == local_18) && (local_c == local_14)) {
          local_8 = 1;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)this + 0x40));
    }
    if ((local_8 != 0) && (piVar2 != (int *)0x0)) {
      piVar1 = (int *)*param_1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *param_1 = 0;
      }
      *param_1 = (int)piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return;
    }
    (**(code **)(*(int *)*param_1 + 4))((int *)*param_1);
    FUN_6605cf30((void *)((int)this + 0x3c),*(int *)((int)this + 0x40),*param_1);
  }
  return;
}


