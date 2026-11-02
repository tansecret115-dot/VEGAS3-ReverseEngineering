/* Module: g2plug.dll
   Function: FUN_5f80a4b0
   Address: 5f80a4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f80a4b0(uint param_1,int *param_2,uint param_3,double *param_4)

{
  double dVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *local_18;
  float local_14;
  undefined8 local_10;
  
  iVar4 = 0;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  if (param_2 != (int *)0x0) {
    if (param_2[1] != 100) {
      return -0x7ff8ffa9;
    }
    if (*param_2 == 0x10) {
      uVar2 = 0x10;
      if (0xf < param_3) {
        iVar4 = 0;
        piVar3 = param_2 + 4;
        dVar1 = _DAT_5f86b0d0;
        while( true ) {
          if (param_2[2] <= iVar4) {
            *param_4 = dVar1;
            return 0;
          }
          uVar2 = uVar2 + *piVar3;
          if (param_3 < uVar2) break;
          if (dVar1 < (double)(float)piVar3[0xb]) {
            dVar1 = (double)(float)piVar3[0xb];
          }
          iVar4 = iVar4 + 1;
          piVar3 = (int *)((int)piVar3 + *piVar3);
        }
      }
      return -0x7ff8ffa9;
    }
    return -0x7ff8ffa9;
  }
  if (DAT_5f8774a0 == (int *)0x0) {
    return -0x7fffbffb;
  }
  local_10 = 0.0;
  iVar5 = 0;
  do {
    if (8 < iVar5) break;
    if (((param_1 & 1) != 0) &&
       (iVar4 = (**(code **)(*DAT_5f8774a0 + 0xc))(DAT_5f8774a0,iVar5,&local_18), iVar4 == 0)) {
      iVar4 = (**(code **)(*local_18 + 0x2c))(local_18,&local_14);
      if ((iVar4 == 0) && ((float)local_10 < local_14)) {
        local_10 = (double)local_14;
      }
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))(local_18);
        local_18 = (int *)0x0;
      }
    }
    param_1 = param_1 >> 1;
    iVar5 = iVar5 + 1;
  } while (-1 < iVar4);
  *(undefined4 *)param_4 = (undefined4)local_10;
  *(undefined4 *)((int)param_4 + 4) = local_10._4_4_;
  return iVar4;
}


