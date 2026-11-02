/* Module: erv33260.dll
   Function: FUN_6708bad0
   Address: 6708bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_6708bad0(void *this,undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  
  switch(param_5) {
  case 2:
  case 5:
  case 6:
    iVar4 = 0;
    iVar2 = 0;
    if ((*param_3 != '\0') && (iVar4 = (int)*param_3 % 3, iVar4 < 0)) {
      iVar4 = iVar4 + 3;
    }
    if ((param_3[1] != '\0') && (iVar2 = (int)param_3[1] % 3, iVar2 < 0)) {
      iVar2 = iVar2 + 3;
    }
    (**(code **)(*(int *)((int)this + 0xf0) + (iVar4 + iVar2 * 4) * 4))(param_2,0x10);
    return;
  case 3:
    param_5 = 0;
    do {
      iVar4 = 0;
      iVar2 = 0;
      if ((*param_3 != '\0') && (iVar4 = (int)*param_3 % 3, iVar4 < 0)) {
        iVar4 = iVar4 + 3;
      }
      if ((param_3[1] != '\0') && (iVar2 = (int)param_3[1] % 3, iVar2 < 0)) {
        iVar2 = iVar2 + 3;
      }
      (**(code **)(*(int *)((int)this + 0xf0) + (iVar4 + iVar2 * 4) * 4))(param_2,8);
      if (param_5 == 1) {
        param_3 = param_3 + *(int *)((int)this + 0xa8) * 4 + -4;
      }
      else {
        param_3 = param_3 + 4;
      }
      param_5 = param_5 + 1;
    } while (param_5 < 4);
    return;
  case 4:
    uVar3 = 0;
    local_c = (int)this + 0x1cc;
    do {
      iVar2 = 0;
      iVar4 = 0;
      if ((*param_3 != '\0') && (iVar4 = (int)*param_3 % 3, iVar4 < 0)) {
        iVar4 = iVar4 + 3;
      }
      if ((param_3[1] != '\0') && (iVar2 = (int)param_3[1] % 3, iVar2 < 0)) {
        iVar2 = iVar2 + 3;
      }
      (**(code **)(*(int *)((int)this + 0xf0) + (iVar4 + iVar2 * 4) * 4))(param_2,4);
      piVar1 = (int *)(local_c + -0x60);
      local_c = local_c + 4;
      param_3 = param_3 + *piVar1 * 2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
  }
  return;
}


