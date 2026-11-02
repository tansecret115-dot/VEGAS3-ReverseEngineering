/* Module: vegas30.exe
   Function: FUN_0055a0a0
   Address: 0055a0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0055a330) */

uint FUN_0055a0a0(int param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar7 = 0;
  local_10 = (double)(CONCAT44(local_10._4_4_,*(uint *)(iVar2 + 0x10) >> 0x1c) & 0xffffffff00000003)
  ;
  FUN_004eb2b0();
  uVar5 = *(uint *)(param_1 + 0x124) & 1;
  if (((*(uint *)(iVar2 + 0x10) >> 1 & 1) == uVar5) ||
     (uVar7 = FUN_005c9030(iVar2,2,uVar5), -1 < (int)uVar7)) {
    if ((*(uint *)(iVar2 + 0x10) >> 1 & 4) != (*(uint *)(param_1 + 0x124) & 4)) {
      uVar7 = FUN_005c9030(iVar2,8,*(uint *)(param_1 + 0x124) >> 2 & 1);
    }
    if (-1 < (int)uVar7) {
      if ((*(uint *)(iVar2 + 0x10) >> 7 & 2) != (*(uint *)(param_1 + 0x124) & 2)) {
        uVar7 = FUN_005c9030(iVar2,0x100,*(uint *)(param_1 + 0x124) >> 1 & 1);
      }
      if (-1 < (int)uVar7) {
        uVar5 = *(uint *)(param_1 + 0x120);
        if (uVar5 != (*(uint *)(iVar2 + 0x10) >> 0x1c & 3)) {
          uVar7 = FUN_005c7e80(iVar2,uVar5 & ((int)uVar5 < 0) - 1);
        }
        if (-1 < (int)uVar7) {
          if ((*(uint *)(iVar2 + 0x10) >> 0x14 & 0xe0) != (*(uint *)(param_1 + 0x124) & 0xe0)) {
            uVar7 = FUN_005c7de0(iVar2,*(uint *)(param_1 + 0x124) >> 5 & 7);
          }
          if (-1 < (int)uVar7) {
            uVar5 = *(uint *)(param_1 + 0x124);
            local_18 = (double)(CONCAT44(local_18._4_4_,uVar5) & 0xffffffff00000008);
            if (((*(uint *)(iVar2 + 0x10) >> 6 & 8) != (uVar5 & 8)) ||
               (((int)local_18 != 0 && (*(float *)(param_1 + 0x128) != *(float *)(iVar2 + 100))))) {
              uVar7 = FUN_005c7f20(iVar2,uVar5 >> 3 & 1,(double)*(float *)(param_1 + 0x128));
            }
            if (-1 < (int)uVar7) {
              uVar5 = *(uint *)(param_1 + 0x124) >> 4 & 1;
              if ((*(uint *)(iVar2 + 0xfc) & 1) != uVar5) {
                *(uint *)(iVar2 + 0xfc) = *(uint *)(iVar2 + 0xfc) & 0xfffffffe | uVar5;
                uVar7 = uVar5;
              }
              if (-1 < (int)uVar7) {
                if ((*(int *)(iVar2 + 0x50) != 0) &&
                   (iVar6 = lstrcmpA((LPCSTR)(param_1 + 0x10),
                                     *(LPCSTR *)(*(int *)(iVar2 + 0x50) + 0x20)), iVar6 != 0)) {
                  uVar7 = FUN_005c69a0(*(undefined4 *)(iVar2 + 0x50),param_1 + 0x10);
                }
                if ((-1 < (int)uVar7) &&
                   ((dVar1 = *(double *)(param_1 + 0x138), local_18 = dVar1,
                    dVar1 != *(double *)(iVar2 + 0x28) ||
                    (*(int *)(param_1 + 0x120) != (int)local_10)))) {
                  local_18._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
                  uVar3 = local_18._4_4_;
                  local_18._0_4_ = SUB84(dVar1,0);
                  uVar4 = (int)local_18;
                  uVar7 = FUN_005c7bd0(iVar2,uVar4,uVar3,0);
                  if (-1 < (int)uVar7) {
                    if (*(int *)(param_1 + 0x120) == 1) {
                      local_10 = *(double *)(param_1 + 0x140);
                    }
                    else {
                      local_10 = *(double *)(param_1 + 0x140) / *(double *)(iVar2 + 0x28);
                    }
                    FUN_00477d70(iVar2 + 0x98,(int)local_10,(int)((ulonglong)local_10 >> 0x20));
                    iVar6 = *(int *)(iVar2 + 0x50);
                    if (iVar6 != 0) {
                      uVar8 = ftol();
                      *(undefined8 *)(iVar6 + 8) = uVar8;
                    }
                    local_18 = (double)ftol();
                    if ((longlong)local_18 < 1) {
                      local_18 = 4.94065645841247e-324;
                    }
                    uVar7 = FUN_005c7760(iVar2,0,&local_18,3,0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(uint *)(*(int *)(iVar2 + 8) + 0x10) = *(uint *)(*(int *)(iVar2 + 8) + 0x10) | 0x200000;
  FUN_005b8da0(*(undefined4 *)(*(int *)(iVar2 + 8) + 8),0,1);
  return uVar7;
}


