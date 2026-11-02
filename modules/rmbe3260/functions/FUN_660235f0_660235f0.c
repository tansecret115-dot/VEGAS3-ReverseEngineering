/* Module: rmbe3260.dll
   Function: FUN_660235f0
   Address: 660235f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660235f0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  int local_c;
  void *local_8;
  
  piVar2 = param_1;
  piVar3 = (int *)0x0;
  local_c = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_1 = (int *)0x0;
    local_8 = this;
    if (0 < *(int *)((int)this + 0x50)) {
      do {
        piVar3 = *(int **)(*(int *)((int)local_8 + 0x4c) + (int)param_1 * 4);
        piVar1 = piVar3 + 4;
        (**(code **)(piVar3[4] + 0x10))(piVar1,&local_1c);
        (**(code **)(*(int *)(*piVar2 + 0x10) + 0x10))((int *)(*piVar2 + 0x10),&local_24);
        (**(code **)(*piVar1 + 0x18))(piVar1,&local_10);
        (**(code **)(*(int *)(*piVar2 + 0x10) + 0x18))((int *)(*piVar2 + 0x10),&local_14);
        if (((local_1c == local_24) && (local_18 == local_20)) && (local_10 == local_14)) {
          local_c = 1;
          break;
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < *(int *)((int)local_8 + 0x50));
    }
    if ((local_c != 0) && (piVar3 != (int *)0x0)) {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
      *piVar2 = (int)piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
      return;
    }
    (**(code **)(*(int *)*piVar2 + 4))((int *)*piVar2);
    FUN_6605cf30((void *)((int)local_8 + 0x4c),*(int *)((int)local_8 + 0x50),*piVar2);
  }
  return;
}


