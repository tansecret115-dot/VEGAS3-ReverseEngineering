/* Module: rmbe3260.dll
   Function: FUN_66028820
   Address: 66028820
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66028820(int *param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float local_14;
  int local_10;
  float local_c;
  int *local_8;
  
  piVar2 = param_1;
  iVar3 = 0;
  if (param_2 == (float *)0x0) {
    return -0x7fffbffd;
  }
  if (param_1[-0x1a] == 0) {
    iVar3 = (**(code **)(*(int *)param_1[-0x21] + 0x28))((int *)param_1[-0x21]);
  }
  if ((-1 < iVar3) && (piVar1 = (int *)piVar2[-0xf], piVar1 != (int *)0x0)) {
    local_10 = 0;
    local_c = DAT_660674a0;
    (**(code **)(*piVar1 + 0x14))(piVar1,&local_10);
    if (local_10 != 0) {
      param_1 = (int *)0x0;
      iVar3 = (**(code **)(*(int *)piVar2[-0xf] + 0xc))((int *)piVar2[-0xf],&param_1);
      if (-1 < iVar3) {
        do {
          if (iVar3 == 0x40012) break;
          local_8 = (int *)0x0;
          iVar3 = (**(code **)*param_1)(param_1,&DAT_66065b28,&local_8);
          if ((-1 < iVar3) &&
             (iVar3 = (**(code **)(*local_8 + 0xc))(local_8,&local_14), local_c < local_14)) {
            local_c = local_14;
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            param_1 = (int *)0x0;
          }
          if (iVar3 < 0) {
            return iVar3;
          }
          iVar3 = (**(code **)(*(int *)piVar2[-0xf] + 0x10))((int *)piVar2[-0xf],&param_1);
        } while (-1 < iVar3);
        if ((-1 < iVar3) && (*param_2 = local_c, iVar3 == 0x40012)) {
          iVar3 = 0;
        }
      }
      return iVar3;
    }
  }
  return -0x7ffbfff9;
}


