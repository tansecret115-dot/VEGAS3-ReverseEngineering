/* Module: erv23260.dll
   Function: FUN_637f3020
   Address: 637f3020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637f3020(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  local_8 = (**(code **)(*(int *)this + 0xc))(param_1,param_2);
  if (local_8 == 0) {
    piVar1 = param_1;
    piVar3 = (int *)((int)this + 0xc);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    if (*param_1 == 0x16) {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x2c) = 0x408f4000;
      *(undefined4 *)((int)this + 0x468) = 0x2000;
    }
    else {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(iVar2 + 0x28) = 0xeb851eb8;
      *(undefined4 *)(iVar2 + 0x2c) = 0x403df851;
      *(undefined4 *)((int)this + 0x468) = 0x100;
    }
    *(int *)(*(int *)((int)this + 0x2b4) + 0x5c) = *param_1;
    *(int *)((int)this + 8) = *param_1;
    FUN_637f2bb0(this);
    local_8 = FUN_637f4300(this,param_1[1],param_1[2]);
    if (local_8 == 0) {
      if ((*(int *)((int)this + 8) == 0x15) || (*(int *)((int)this + 8) == 0x16)) {
        piVar1 = FUN_637f3230(*(int **)((int)this + 0x2f4),param_1[1],param_1[2],
                              *(undefined4 *)((int)this + 700),&local_8);
        *(int **)((int)this + 0x2f4) = piVar1;
        if (local_8 != 0) {
          return;
        }
      }
      iVar2 = FUN_637f8180(*(void **)((int)this + 0x2c0),(int)param_1,(int)param_2);
      if (iVar2 == 0) {
        piVar1 = (int *)((int)this + 0x38);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar1 = *param_2;
          param_2 = param_2 + 1;
          piVar1 = piVar1 + 1;
        }
      }
    }
  }
  return;
}


