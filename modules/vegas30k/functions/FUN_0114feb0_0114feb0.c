/* Module: vegas30k.dll
   Function: FUN_0114feb0
   Address: 0114feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114feb0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  LPCVOID pMem;
  undefined4 *puVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = param_1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if ((param_1[0x71] != 0) && (local_1c = 0, param_1[0x18] != 0)) {
    iVar7 = 0;
    local_14 = 0;
    do {
      uVar8 = 0;
      iVar9 = local_14 + puVar4[0x70];
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0xc) != 0)) {
        switch(*(undefined4 *)(*(int *)(iVar9 + 0xc) + 4)) {
        case 1:
          if (*(int *)(iVar7 + 0x10 + puVar4[0x71]) != 0) {
            if (puVar4[0x17] != 0) {
              do {
                _FaderInst_Deinit_4(*(int *)(iVar7 + 0x10 + puVar4[0x71]) + uVar8 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < (uint)puVar4[0x17]);
            }
            pvVar5 = GlobalHandle(*(LPCVOID *)(iVar7 + 0x10 + puVar4[0x71]));
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle(*(LPCVOID *)(iVar7 + 0x10 + puVar4[0x71]));
            GlobalFree(pvVar5);
            *(undefined4 *)(iVar7 + 0x10 + puVar4[0x71]) = 0;
          }
          if ((*(int *)(iVar7 + 0x10 + puVar4[0x71]) == 0) && (puVar4[0x17] != 0)) {
            pvVar5 = GlobalAlloc(0x42,puVar4[0x17] * 300);
            pvVar6 = GlobalLock(pvVar5);
            *(LPVOID *)(iVar7 + 0x10 + puVar4[0x71]) = pvVar6;
            if (*(int *)(iVar7 + 0x10 + puVar4[0x71]) != 0) {
              param_1 = (undefined4 *)0x0;
              if (puVar4[0x17] != 0) {
                local_18 = 0;
                do {
                  iVar1 = *(int *)(iVar7 + 0x10 + puVar4[0x71]) + local_18;
                  _FaderInst_Init_28(iVar1,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x1c),&local_10,
                                     *puVar4,(uint)param_1 & 0xffff | local_1c << 0x10,&LAB_0114fd90
                                     ,puVar4);
                  _FaderInst_Message_16(iVar1,0x60e,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x10))
                  ;
                  _FaderInst_Message_16(iVar1,0x60f,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x14))
                  ;
                  _FaderInst_Message_16(iVar1,0x611,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x18))
                  ;
                  param_1 = (undefined4 *)((int)param_1 + 1);
                  local_18 = local_18 + 300;
                } while (param_1 < (uint)puVar4[0x17]);
              }
              *(undefined4 *)(iVar7 + puVar4[0x71]) = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x24);
              *(undefined4 *)(iVar7 + 4 + puVar4[0x71]) =
                   *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x20);
              iVar9 = *(int *)(iVar7 + 4 + puVar4[0x71]);
              piVar2 = (int *)(iVar7 + 4 + puVar4[0x71]);
joined_r0x011504a1:
              if (0 < iVar9) {
                *piVar2 = iVar9 + 0x14;
              }
            }
          }
          break;
        case 2:
          if (*(int *)(iVar7 + 0x14 + puVar4[0x71]) != 0) {
            if (puVar4[0x17] != 0) {
              do {
                _SpinnerInst_Deinit_4(*(int *)(iVar7 + 0x14 + puVar4[0x71]) + uVar8 * 4);
                uVar8 = uVar8 + 1;
              } while (uVar8 < (uint)puVar4[0x17]);
            }
            pvVar5 = GlobalHandle(*(LPCVOID *)(iVar7 + 0x14 + puVar4[0x71]));
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle(*(LPCVOID *)(iVar7 + 0x14 + puVar4[0x71]));
            GlobalFree(pvVar5);
            *(undefined4 *)(iVar7 + 0x14 + puVar4[0x71]) = 0;
          }
          if ((*(int *)(iVar7 + 0x14 + puVar4[0x71]) == 0) && (puVar4[0x17] != 0)) {
            pvVar5 = GlobalAlloc(0x42,puVar4[0x17] * 0xc0);
            pvVar6 = GlobalLock(pvVar5);
            *(LPVOID *)(iVar7 + 0x14 + puVar4[0x71]) = pvVar6;
            if (*(int *)(iVar7 + 0x14 + puVar4[0x71]) != 0) {
              param_1 = (undefined4 *)0x0;
              if (puVar4[0x17] != 0) {
                local_18 = 0;
                do {
                  iVar1 = *(int *)(iVar7 + 0x14 + puVar4[0x71]) + local_18;
                  _SpinnerInst_Init_28
                            (iVar1,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x18),&local_10,*puVar4,
                             (uint)param_1 & 0xffff | local_1c << 0x10,&LAB_0114fdc0,puVar4);
                  _SpinnerInst_Message_16
                            (iVar1,0x60e,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x10));
                  _SpinnerInst_Message_16
                            (iVar1,0x60f,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x14));
                  param_1 = (undefined4 *)((int)param_1 + 1);
                  local_18 = local_18 + 0xc0;
                } while (param_1 < (uint)puVar4[0x17]);
              }
              *(undefined4 *)(iVar7 + puVar4[0x71]) = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x28);
              *(undefined4 *)(iVar7 + 4 + puVar4[0x71]) =
                   *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x1c);
              *(undefined4 *)(iVar7 + 8 + puVar4[0x71]) =
                   *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x20);
              *(undefined4 *)(iVar7 + 0xc + puVar4[0x71]) =
                   *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x24);
            }
          }
          break;
        case 3:
          *(undefined4 *)(iVar7 + puVar4[0x71]) = 0;
          *(undefined4 *)(iVar7 + 4 + puVar4[0x71]) = 0;
          *(undefined4 *)(iVar7 + 8 + puVar4[0x71]) = 0;
          *(undefined4 *)(iVar7 + 0xc + puVar4[0x71]) = 0;
          *(undefined4 *)(iVar7 + 0x1c + puVar4[0x71]) =
               *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x10);
          *(undefined4 *)(iVar7 + 0x20 + puVar4[0x71]) =
               *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x14);
          iVar1 = *(int *)(iVar9 + 0xc);
          iVar3 = puVar4[0x71];
          *(undefined4 *)(iVar7 + 0x24 + iVar3) = *(undefined4 *)(iVar1 + 0x18);
          *(undefined4 *)(iVar7 + 0x28 + iVar3) = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)(iVar7 + 0x2c + puVar4[0x71]) =
               *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x20);
          break;
        case 4:
          pMem = *(LPCVOID *)(iVar7 + 0x18 + puVar4[0x71]);
          if (pMem != (LPCVOID)0x0) {
            pvVar5 = GlobalHandle(pMem);
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle(*(LPCVOID *)(iVar7 + 0x18 + puVar4[0x71]));
            GlobalFree(pvVar5);
            *(undefined4 *)(iVar7 + 0x18 + puVar4[0x71]) = 0;
          }
          if ((*(int *)(iVar7 + 0x18 + puVar4[0x71]) == 0) && (puVar4[0x17] != 0)) {
            pvVar5 = GlobalAlloc(0x42,puVar4[0x17] * 0xd4);
            pvVar6 = GlobalLock(pvVar5);
            *(LPVOID *)(iVar7 + 0x18 + puVar4[0x71]) = pvVar6;
            if (*(int *)(iVar7 + 0x18 + puVar4[0x71]) != 0) {
              param_1 = (undefined4 *)0x0;
              if (puVar4[0x17] != 0) {
                local_18 = 0;
                do {
                  iVar1 = *(int *)(iVar7 + 0x18 + puVar4[0x71]) + local_18;
                  _TrackbarInst_Init_28
                            (iVar1,*(uint *)(*(int *)(iVar9 + 0xc) + 0x1c) | 0x4000,&local_10,
                             *puVar4,(uint)param_1 & 0xffff | local_1c << 0x10,&LAB_0114fe30,puVar4)
                  ;
                  _TrackbarInst_Message_16
                            (iVar1,0x60e,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x10));
                  _TrackbarInst_Message_16
                            (iVar1,0x60f,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x14));
                  _TrackbarInst_Message_16
                            (iVar1,0x611,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x18));
                  _TrackbarInst_Message_16
                            (iVar1,0x61f,0,*(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x24));
                  param_1 = (undefined4 *)((int)param_1 + 1);
                  local_18 = local_18 + 0xd4;
                } while (param_1 < (uint)puVar4[0x17]);
              }
              *(undefined4 *)(iVar7 + puVar4[0x71]) = *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x28);
              *(undefined4 *)(iVar7 + 4 + puVar4[0x71]) =
                   *(undefined4 *)(*(int *)(iVar9 + 0xc) + 0x20);
              iVar9 = *(int *)(iVar7 + 4 + puVar4[0x71]);
              piVar2 = (int *)(iVar7 + 4 + puVar4[0x71]);
              goto joined_r0x011504a1;
            }
          }
        }
      }
      local_1c = local_1c + 1;
      local_14 = local_14 + 0x10;
      iVar7 = iVar7 + 0x30;
    } while (local_1c < (uint)puVar4[0x18]);
  }
  return;
}


