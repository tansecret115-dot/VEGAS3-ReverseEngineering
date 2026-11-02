/* Module: vegas30.exe
   Function: FUN_0055b370
   Address: 0055b370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0055b370(int param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = 0;
  FUN_004eb2b0(*(undefined4 *)(*(int *)(iVar2 + 8) + 8));
  uVar4 = *(uint *)(param_1 + 0x118) & 1;
  if ((*(uint *)(iVar2 + 0x10) >> 1 & 1) != uVar4) {
    iVar6 = FUN_005c9030(iVar2,2,uVar4);
    if (iVar6 < 0) goto LAB_0055b640;
  }
  if ((*(uint *)(iVar2 + 0x10) >> 1 & 4) != (*(uint *)(param_1 + 0x118) & 4)) {
    iVar6 = FUN_005c9030(iVar2,8,*(uint *)(param_1 + 0x118) >> 2 & 1);
  }
  if (-1 < iVar6) {
    if ((*(uint *)(iVar2 + 0x10) >> 7 & 2) != (*(uint *)(param_1 + 0x118) & 2)) {
      iVar6 = FUN_005c9030(iVar2,0x100,*(uint *)(param_1 + 0x118) >> 1 & 1);
    }
    if (-1 < iVar6) {
      if ((*(uint *)(iVar2 + 0x10) >> 2 & 8) != (*(uint *)(param_1 + 0x118) & 8)) {
        iVar6 = FUN_005c9030(iVar2,0x20,*(uint *)(param_1 + 0x118) >> 3 & 1);
      }
      if (-1 < iVar6) {
        uVar4 = *(uint *)(param_1 + 0x118) >> 4 & 1;
        if ((*(uint *)(iVar2 + 0xf8) & 1) != uVar4) {
          iVar6 = FUN_005c90e0(*(undefined4 *)(*(int *)(iVar2 + 8) + 8),iVar2,0,uVar4);
        }
        if (-1 < iVar6) {
          if ((*(uint *)(iVar2 + 0xf8) >> 2 & 0x20) != (*(uint *)(param_1 + 0x118) & 0x20)) {
            iVar6 = FUN_005c90e0(*(undefined4 *)(*(int *)(iVar2 + 8) + 8),iVar2,6,
                                 *(uint *)(param_1 + 0x118) >> 5 & 1);
          }
          if (-1 < iVar6) {
            if ((*(uint *)(iVar2 + 0xf8) >> 2 & 0x40) != (*(uint *)(param_1 + 0x118) & 0x40)) {
              iVar6 = FUN_005c90e0(*(undefined4 *)(*(int *)(iVar2 + 8) + 8),iVar2,7,
                                   *(uint *)(param_1 + 0x118) >> 6 & 1);
            }
            if (-1 < iVar6) {
              dVar1 = *(double *)(param_1 + 0x120);
              if (dVar1 != *(double *)(iVar2 + 0x28)) {
                uStack_14 = (undefined4)((ulonglong)dVar1 >> 0x20);
                dVar3 = *(double *)(iVar2 + 0x28);
                local_18 = SUB84(dVar1,0);
                iVar6 = FUN_005c7bd0(iVar2,local_18,uStack_14,1);
                if (iVar6 < 0) goto LAB_0055b640;
                dVar3 = dVar3 / *(double *)(iVar2 + 0x28);
                if (*(int *)(iVar2 + 0x140) != 0) {
                  iVar6 = FUN_0044ad60(*(int *)(iVar2 + 0x140),dVar3);
                }
                if (iVar6 < 0) goto LAB_0055b640;
                iVar6 = FUN_0050b580(iVar2 + 0x144,dVar3);
              }
              if (-1 < iVar6) {
                if (*(double *)(param_1 + 0x128) != *(double *)(iVar2 + 0x210)) {
                  *(undefined4 *)(iVar2 + 0x210) = *(undefined4 *)(param_1 + 0x128);
                  *(undefined4 *)(iVar2 + 0x214) = *(undefined4 *)(param_1 + 300);
                }
                *(undefined4 *)(iVar2 + 0x110) = *(undefined4 *)(param_1 + 0x130);
                *(undefined4 *)(iVar2 + 0x114) = *(undefined4 *)(param_1 + 0x134);
                *(undefined4 *)(iVar2 + 0x118) = *(undefined4 *)(param_1 + 0x138);
                *(undefined4 *)(iVar2 + 0x11c) = *(undefined4 *)(param_1 + 0x13c);
                *(undefined4 *)(iVar2 + 0x120) = *(undefined4 *)(param_1 + 0x140);
                *(undefined4 *)(iVar2 + 0x124) = *(undefined4 *)(param_1 + 0x144);
                *(undefined4 *)(iVar2 + 0x128) = *(undefined4 *)(param_1 + 0x148);
                *(undefined4 *)(iVar2 + 300) = *(undefined4 *)(param_1 + 0x14c);
                *(undefined4 *)(iVar2 + 0x130) = *(undefined4 *)(param_1 + 0x150);
                *(undefined4 *)(iVar2 + 0x134) = *(undefined4 *)(param_1 + 0x154);
                *(undefined4 *)(iVar2 + 0x138) = *(undefined4 *)(param_1 + 0x158);
                *(undefined4 *)(iVar2 + 0x13c) = *(undefined4 *)(param_1 + 0x15c);
                if (*(int *)(iVar2 + 0x50) != 0) {
                  iVar5 = lstrcmpA((LPCSTR)(param_1 + 8),*(LPCSTR *)(*(int *)(iVar2 + 0x50) + 0x20))
                  ;
                  if (iVar5 != 0) {
                    iVar6 = FUN_005c69a0(*(undefined4 *)(iVar2 + 0x50),(LPCSTR)(param_1 + 8));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0055b640:
  *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x80;
  DAT_0064767c = DAT_0064767c | 0x800;
  return iVar6;
}


