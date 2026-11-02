/* Module: sftrkfx1.dll
   Function: FUN_5cbaa3b0
   Address: 5cbaa3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5cbaa3b0(int param_1,int param_2,int param_3,int param_4,int *param_5,undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = 1;
  if (*(int *)(param_2 + 0x28) != 0) {
    FUN_5cba9850(param_1,param_2,*(int *)(param_2 + 0x28) * 0x20 + 0x10 + param_2,&local_10);
    if (((local_10 <= param_3) &&
        (*param_5 = *(int *)(param_2 + 0x28) + -1, local_c + -5 <= param_4)) &&
       (param_4 <= local_c + 5)) {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 0;
        param_6[1] = local_c - param_4;
      }
      return 1;
    }
    if (1 < *(uint *)(param_2 + 0x28)) {
      piVar3 = (int *)(param_2 + 0x50);
      do {
        if ((*(int *)(param_1 + 0x1c) <= *piVar3) &&
           (FUN_5cba9850(param_1,param_2,piVar3,&local_8), param_3 < local_8)) {
          iVar2 = uVar1 * 0x20 + param_2;
          *param_5 = uVar1 - 1;
          FUN_5cba9850(param_1,param_2,iVar2 + 0x10,&local_10);
          if (param_3 + -5 < local_10) {
            return 0;
          }
          if (local_10 != local_8) {
            iVar2 = *(int *)(iVar2 + 0x1c);
            if (iVar2 == 2) {
              iVar2 = ftol();
              local_4 = local_4 - iVar2;
            }
            else if (iVar2 == -2) {
              local_4 = ftol();
              local_4 = local_4 + local_c;
            }
            else {
              local_4 = ftol();
              local_4 = local_4 + local_c;
            }
            if (param_4 < local_4 + -5) {
              return 0;
            }
            if (local_4 + 5 < param_4) {
              return 0;
            }
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = 0;
              param_6[1] = local_4 - param_4;
            }
            return 1;
          }
          iVar2 = local_c;
          if (local_4 <= local_c) {
            iVar2 = local_4;
          }
          if (local_c <= local_4) {
            local_c = local_4;
          }
          if (param_4 < iVar2 + -5) {
            return 0;
          }
          if (local_c + 5 < param_4) {
            return 0;
          }
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = 0;
            param_6[1] = 0;
          }
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar3 = piVar3 + 8;
      } while (uVar1 < *(uint *)(param_2 + 0x28));
    }
  }
  return 0;
}


