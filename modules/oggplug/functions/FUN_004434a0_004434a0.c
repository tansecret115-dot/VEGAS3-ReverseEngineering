/* Module: oggplug.dll
   Function: FUN_004434a0
   Address: 004434a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004434a0(int *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  longlong lVar10;
  uint local_1a0;
  int local_19c;
  int local_198 [4];
  int local_188 [4];
  uint local_178;
  uint local_174;
  int local_168 [90];
  
  if (1 < param_1[0x16]) {
    if (param_1[1] == 0) {
      return 0xffffff76;
    }
    if (-1 < (int)param_2) {
      iVar5 = *(int *)(param_1[0xe] + 4 + param_1[0xd] * 8);
      if (((int)param_2 >> 0x1f <= iVar5) &&
         (((int)param_2 >> 0x1f < iVar5 || (param_2 <= *(uint *)(param_1[0xe] + param_1[0xd] * 8))))
         ) {
        param_1[0x14] = -1;
        param_1[0x15] = -1;
        FUN_00443750((int)param_1);
        FUN_00442cc0(param_1,param_2);
        local_1a0 = 0;
        piVar8 = local_168;
        for (iVar5 = 0x5a; iVar3 = local_19c, iVar7 = 0, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        do {
          while ((param_1[0x16] != 3 || (iVar5 = FUN_00441bc0(local_168,local_188), iVar5 < 1))) {
            if (iVar7 != 0) {
              param_1[0x14] = -1;
              param_1[0x15] = -1;
              goto LAB_00443721;
            }
            uVar2 = FUN_00442990(param_1,local_198,0xffffffff);
            if ((int)uVar2 < 0) {
              lVar10 = FUN_004433a0((int)param_1,-1);
              *(longlong *)(param_1 + 0x14) = lVar10;
              goto LAB_00443721;
            }
            iVar5 = param_1[0x16];
            if (iVar5 == 3) {
              iVar5 = FUN_00440f10(local_198);
              if (param_1[0x17] != iVar5) {
                FUN_00443750((int)param_1);
                FUN_00441080(local_168);
              }
              iVar5 = param_1[0x16];
            }
            if (iVar5 < 3) {
              iVar3 = FUN_00440f10(local_198);
              iVar5 = param_1[0xd];
              iVar6 = 0;
              param_1[0x17] = iVar3;
              if (0 < iVar5) {
                piVar8 = (int *)param_1[0x10];
                do {
                  if (*piVar8 == iVar3) break;
                  iVar6 = iVar6 + 1;
                  piVar8 = piVar8 + 1;
                } while (iVar6 < iVar5);
              }
              if (iVar6 == iVar5) {
                param_1[0x14] = -1;
                param_1[0x15] = -1;
                FUN_00441080(local_168);
                FUN_00443750((int)param_1);
                return 0xffffff77;
              }
              param_1[0x18] = iVar6;
              FUN_00440fa0(param_1 + 0x1e,iVar3);
              FUN_00441b70((int)(param_1 + 0x1e));
              FUN_00440fa0(local_168,param_1[0x17]);
              FUN_00441b70((int)local_168);
              param_1[0x16] = 3;
            }
            FUN_00441860(param_1 + 0x1e,local_198);
            FUN_00441860(local_168,local_198);
            bVar1 = FUN_00440e20(local_198);
            iVar3 = CONCAT31(extraout_var,bVar1);
          }
          if (*(int *)(param_1[0x18] * 0x20 + 0x1c + param_1[0x12]) != 0) {
            local_19c = FUN_004324d0(param_1[0x18] * 0x20 + param_1[0x12],local_188);
          }
          if (iVar3 == 0) {
            if (iVar7 != 0) {
              local_1a0 = local_1a0 + (local_19c + iVar7 >> 2);
            }
          }
          else {
            FUN_00441bc0(param_1 + 0x1e,(int *)0x0);
          }
          iVar7 = local_19c;
        } while ((local_178 & local_174) == 0xffffffff);
        iVar5 = param_1[0x18];
        if (0 < iVar5) {
          puVar4 = (uint *)param_1[0x11];
          do {
            bVar9 = CARRY4(local_178,*puVar4);
            local_178 = local_178 + *puVar4;
            local_174 = local_174 + puVar4[1] + (uint)bVar9;
            puVar4 = puVar4 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        param_1[0x14] = local_178 - local_1a0;
        param_1[0x15] = (local_174 - ((int)local_1a0 >> 0x1f)) - (uint)(local_178 < local_1a0);
LAB_00443721:
        FUN_00441080(local_168);
        return 0;
      }
    }
  }
  return 0xffffff7d;
}


