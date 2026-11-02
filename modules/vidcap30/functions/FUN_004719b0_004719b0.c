/* Module: vidcap30.exe
   Function: FUN_004719b0
   Address: 004719b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_004719b0(int param_1)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  HGLOBAL pvVar5;
  int iVar6;
  uint uVar7;
  int unaff_EBX;
  code *pcVar8;
  undefined4 unaff_ESI;
  LPCVOID *ppvVar9;
  SIZE_T dwBytes;
  UINT uFlags;
  LPVOID uFlags_00;
  LPCVOID pMem;
  LPVOID pvStack_26c;
  uint local_268;
  int iStack_264;
  undefined4 uStack_260;
  int iStack_25c;
  int iStack_258;
  int *local_254;
  int local_250;
  int in_stack_fffffdb4;
  int local_244;
  LPCVOID apvStack_240 [2];
  uint uStack_238;
  uint uStack_234;
  LPVOID pvStack_230;
  uint uStack_22c;
  uint uStack_228;
  undefined4 uStack_214;
  uint uStack_210;
  undefined1 auStack_20c [524];
  
  local_244 = 0;
  if (*(int *)(param_1 + 0x134) == 0) {
    local_244 = FUN_004713e0(&local_254);
    if (local_244 < 0) {
      return local_244;
    }
    (**(code **)(*local_254 + 8))(local_254);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x134) + 0x3c))(*(int **)(param_1 + 0x134),&local_250);
  if (-1 < iVar2) {
    if (*(int **)(param_1 + 0x120) == (int *)0x0) {
      iVar2 = _SfList_CreateExZ_32(param_1 + 0x120,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
    }
    else if (**(int **)(param_1 + 0x120) != iStack_258) {
      iVar2 = -0x7ffb1ff5;
      goto LAB_00471ed0;
    }
    if (-1 < iVar2) {
      pMem = (LPVOID)0x0;
      ppvVar9 = apvStack_240;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppvVar9 = (LPCVOID)0x0;
        ppvVar9 = ppvVar9 + 1;
      }
      pvStack_26c = (LPVOID)0x0;
      bVar1 = false;
      local_250 = 0;
      iStack_264 = 0;
      if (0 < iStack_258) {
        do {
          local_268 = 0;
          iVar2 = (**(code **)(**(int **)(param_1 + 0x134) + 0x48))
                            (*(int **)(param_1 + 0x134),iStack_264,&uStack_214,&local_244);
          if (iVar2 < 0) {
            iVar6 = FUN_00471610(0,local_250);
            if (iVar6 == 0) {
              iVar2 = _SfList_AllocAndInsertItem_20
                                (*(undefined4 *)(param_1 + 0x120),0,0x98,0xffffffff,&local_254);
              if (iVar2 < 0) goto LAB_00471e4b;
              if (*(int *)(*(int *)(*(int *)(param_1 + 0x120) + 8) + (int)local_254 * 4) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_00473970();
              }
            }
            else {
              iVar2 = 0;
              local_250 = local_250 + 1;
            }
            *(uint *)(iVar6 + 0x8c) = *(uint *)(iVar6 + 0x8c) | 1;
            *(int *)(iVar6 + 8) = param_1;
            *(int *)(iVar6 + 0x10) = iStack_264;
          }
          else {
            iStack_25c = 0;
            iVar6 = FUN_00470ca0(uStack_214);
            pvVar3 = pvStack_230;
            uVar7 = uStack_238;
            pMem = apvStack_240[1];
            uStack_210 = uStack_22c;
            pvStack_26c = pvStack_230;
            ppvVar9 = apvStack_240;
            for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
              *ppvVar9 = (LPCVOID)0x0;
              ppvVar9 = ppvVar9 + 1;
            }
            if (iVar6 == 1) {
              local_268 = 0x12;
            }
            else if (iVar6 == 2) {
              local_268 = 0x428;
            }
            iVar2 = (**(code **)(**(int **)(unaff_EBX + 0x134) + 0x44))
                              (*(int **)(unaff_EBX + 0x134),apvStack_240,iStack_264,1);
            pcVar8 = GlobalHandle_exref;
            if (-1 < iVar2) {
              if (uVar7 < uStack_234) {
                if (pMem == (LPCVOID)0x0) {
                  pvVar5 = GlobalAlloc(0x42,uStack_234);
                  pMem = GlobalLock(pvVar5);
                  pcVar8 = GlobalHandle_exref;
                }
                else {
                  pvVar5 = GlobalHandle(pMem);
                  GlobalUnlock(pvVar5);
                  uFlags = 0x42;
                  uVar7 = uStack_234;
                  pvVar5 = GlobalHandle(pMem);
                  pvVar5 = GlobalReAlloc(pvVar5,uVar7,uFlags);
                  pMem = GlobalLock(pvVar5);
                }
                if (pMem == (LPVOID)0x0) {
                  iVar2 = -0x7ff8fff2;
                }
                uStack_238 = uStack_234;
                uVar7 = uStack_238;
              }
              uStack_238 = uVar7;
              uVar7 = uStack_210;
              apvStack_240[1] = pMem;
              if (uStack_210 < uStack_228) {
                if (pvVar3 == (LPVOID)0x0) {
                  pvVar5 = GlobalAlloc(0x42,uStack_228);
                  pvVar3 = GlobalLock(pvVar5);
                }
                else {
                  uFlags_00 = pvVar3;
                  pvVar5 = (HGLOBAL)(*pcVar8)();
                  GlobalUnlock(pvVar5);
                  dwBytes = 0x42;
                  pvVar5 = (HGLOBAL)(*pcVar8)(pvVar3,uStack_22c);
                  pvVar5 = GlobalReAlloc(pvVar5,dwBytes,(UINT)uFlags_00);
                  pvVar3 = GlobalLock(pvVar5);
                }
                uVar7 = uStack_228;
                if (pvVar3 == (LPVOID)0x0) {
                  iVar2 = -0x7ff8fff2;
                }
              }
              pvStack_230 = pvVar3;
              pvStack_26c = pvStack_230;
              uStack_22c = uVar7;
              if (iVar2 < 0) goto LAB_00471e8c;
              iVar2 = (**(code **)(**(int **)(unaff_EBX + 0x134) + 0x44))
                                (*(int **)(unaff_EBX + 0x134),apvStack_240,iStack_264,1);
              if (-1 < iVar2) {
                local_268 = uStack_234;
                if (iVar6 == 1) {
                  if (uStack_234 < 0x12) {
                    local_268 = 0x12;
                  }
                }
                else if ((iVar6 == 2) && (uStack_234 < 0x428)) {
                  local_268 = 0x428;
                  iStack_25c = 1;
                  goto LAB_00471cf5;
                }
                iStack_25c = 1;
              }
            }
LAB_00471cf5:
            iVar2 = FUN_00471610(iVar6,local_244);
            if (iVar6 == 1) {
              if (iVar2 != 0) {
                FUN_00473e20();
                goto LAB_00471d14;
              }
LAB_00471d18:
              iVar2 = _SfList_AllocAndInsertItem_20
                                (*(undefined4 *)(unaff_EBX + 0x120),0,local_268 + 0x98,0xffffffff,
                                 &local_254);
              if (iVar2 < 0) goto LAB_00471e8c;
              if (*(int *)(*(int *)(*(int *)(unaff_EBX + 0x120) + 8) + (int)local_254 * 4) == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = FUN_00473970();
              }
            }
            else {
LAB_00471d14:
              if (iVar2 == 0) goto LAB_00471d18;
            }
            *(int *)(iVar2 + 4) = iVar6;
            *(int *)(iVar2 + 0x10) = iStack_264;
            *(int *)(iVar2 + 0xc) = local_244;
            uStack_260 = 0;
            if (iStack_25c == 0) {
              *(int *)(iVar2 + 8) = unaff_EBX;
              if (iVar6 == 1) {
                uStack_260 = 0xc56a;
              }
              else if (iVar6 == 2) {
                uStack_260 = 0xc56b;
              }
              iVar6 = iStack_264;
              uVar4 = _SfGetString_8(DAT_005ba2a0,uStack_260);
              SfPrintF(auStack_20c,uVar4,iVar6);
              FUN_00472c40(0x8004e011,auStack_20c);
              *(uint *)(iVar2 + 0x8c) = *(uint *)(iVar2 + 0x8c) | 3;
LAB_00471e37:
              bVar1 = true;
            }
            else {
              iVar2 = FUN_00474250(unaff_EBX,*(undefined4 *)(unaff_EBX + 0x134),apvStack_240,
                                   &uStack_260);
              if (iVar2 < 0) {
                iVar6 = iStack_264;
                uVar4 = _SfGetString_8(DAT_005ba2a0,uStack_260);
                SfPrintF(auStack_20c,uVar4,iVar6);
                FUN_00472c40(iVar2,auStack_20c);
                goto LAB_00471e37;
              }
            }
            iVar2 = 0;
            param_1 = unaff_EBX;
          }
LAB_00471e4b:
          iStack_264 = iStack_264 + 1;
        } while (iStack_264 < iStack_258);
      }
      pcVar8 = GlobalHandle_exref;
      if (-1 < iVar2) {
        if (bVar1) {
          iVar2 = 0x4e008;
        }
        *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xffffffdf;
        FUN_00471ef0();
        pcVar8 = GlobalHandle_exref;
      }
LAB_00471e8c:
      if (pMem != (LPVOID)0x0) {
        pvVar5 = (HGLOBAL)(*pcVar8)(pMem);
        GlobalUnlock(pvVar5);
        pvVar5 = (HGLOBAL)(*pcVar8)(unaff_ESI);
        GlobalFree(pvVar5);
      }
      if (pvStack_26c != (LPVOID)0x0) {
        pvVar5 = (HGLOBAL)(*pcVar8)(pvStack_26c);
        GlobalUnlock(pvVar5);
        pvVar5 = (HGLOBAL)(*pcVar8)(unaff_EBX);
        GlobalFree(pvVar5);
      }
      if (iVar2 == 0) goto LAB_00471ed4;
    }
  }
LAB_00471ed0:
  in_stack_fffffdb4 = iVar2;
LAB_00471ed4:
  if (-1 < in_stack_fffffdb4) {
    FUN_00471730();
  }
  return in_stack_fffffdb4;
}


