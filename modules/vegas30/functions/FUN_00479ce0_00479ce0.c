/* Module: vegas30.exe
   Function: FUN_00479ce0
   Address: 00479ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00479ce0(int param_1,int param_2,int param_3,int param_4,int *param_5,undefined4 *param_6)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = **(uint **)(param_2 + 0x30);
  if (uVar1 != 0) {
    puVar2 = (uint *)(*(uint **)(param_2 + 0x30))[2];
    FUN_00479160(param_1,param_2,uVar1 - 1,&local_10,0);
    if (((local_10 <= param_3) && (*param_5 = uVar1 - 1, local_c + -5 <= param_4)) &&
       (param_4 <= local_c + 5)) {
      if (param_6 == (undefined4 *)0x0) {
        return 1;
      }
      param_6[1] = local_c - param_4;
      *param_6 = 0;
      return 1;
    }
    uVar5 = 1;
    puVar3 = puVar2;
    if (1 < uVar1) {
      do {
        if (((*(int *)(param_1 + 0x34) <= (int)puVar3[5]) &&
            ((*(int *)(param_1 + 0x34) < (int)puVar3[5] || (*(uint *)(param_1 + 0x30) <= puVar3[4]))
            )) && (FUN_00479160(param_1,param_2,uVar5,&local_8,1), param_3 < local_8)) {
          *param_5 = uVar5 - 1;
          FUN_00479160(param_1,param_2,uVar5 - 1,&local_10,1);
          if (param_3 + -5 < local_10) {
            return 0;
          }
          if (local_10 == local_8) {
            iVar4 = local_c;
            if (local_4 <= local_c) {
              iVar4 = local_4;
            }
            if (local_c <= local_4) {
              local_c = local_4;
            }
            if (param_4 < iVar4 + -5) {
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
          uVar1 = puVar2[uVar5 * 4 + -1];
          if (uVar1 < 0xfffffffd) {
            if (uVar1 != 0xfffffffc) {
              if (uVar1 == 2) {
                iVar4 = ftol();
                local_4 = local_4 - iVar4;
                goto LAB_00479f67;
              }
              if (uVar1 != 4) goto LAB_00479efd;
            }
          }
          else if (uVar1 != 0xfffffffe) {
LAB_00479efd:
            local_4 = ftol();
            local_4 = local_4 + local_c;
            goto LAB_00479f67;
          }
          local_4 = ftol();
          local_4 = local_4 + local_c;
LAB_00479f67:
          if (param_4 < local_4 + -5) {
            return 0;
          }
          if (local_4 + 5 < param_4) {
            return 0;
          }
          if (param_6 == (undefined4 *)0x0) {
            return 1;
          }
          *param_6 = 0;
          param_6[1] = local_4 - param_4;
          return 1;
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 4;
      } while (uVar5 < uVar1);
    }
  }
  return 0;
}


