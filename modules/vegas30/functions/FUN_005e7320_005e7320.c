/* Module: vegas30.exe
   Function: FUN_005e7320
   Address: 005e7320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005e7320(undefined4 *param_1,undefined4 **param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 ***pppuVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 **ppuStack_640;
  undefined4 **ppuStack_63c;
  undefined4 **ppuStack_638;
  uint uStack_634;
  undefined4 *puStack_628;
  int iVar8;
  int *piStack_604;
  undefined4 **appuStack_5e8 [2];
  uint uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 local_5a4 [177];
  void *pvStack_2e0;
  void *pvStack_2cc;
  int *piStack_2a0;
  int *piStack_28c;
  undefined4 auStack_260 [2];
  WCHAR aWStack_258 [252];
  undefined4 uStack_60;
  undefined2 uStack_52;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uVar3 = 0;
  local_5a4[0] = 4;
  if (param_4 != 0) {
    local_5a4[0] = 0x80000004;
  }
  uStack_5dc = 0;
  appuStack_5e8[1] = (undefined4 **)local_5a4;
  uStack_5e0 = 4;
  appuStack_5e8[0] = param_2;
  iVar1 = (*(code *)(*param_2)[4])();
  if ((-1 < iVar1) && (iVar1 = (*(code *)(*param_2)[5])(), -1 < iVar1)) {
    piStack_604 = (int *)0x4;
    iVar1 = (*(code *)(*param_2)[4])();
    if (-1 < iVar1) {
      puVar4 = auStack_260;
      for (iVar1 = 0x8b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      auStack_260[0] = *param_1;
      auStack_260[1] = param_1[1];
      puStack_628 = (undefined4 *)0x5e73e2;
      MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 2),-1,aWStack_258,0x104);
      uStack_50 = param_1[0x43];
      uStack_48 = param_1[0x45];
      iStack_4c = param_1[0x44];
      uStack_44 = param_1[0x46];
      uStack_3c = param_1[0x48];
      uStack_38 = param_1[0x49];
      uStack_40 = param_1[0x47];
      iVar8 = 0x22c;
      uStack_52 = 0;
      iVar1 = (*(code *)(*param_2)[4])();
      if (-1 < iVar1) {
        if (param_1[0x45] != 0) {
          puVar4 = param_1 + 0x4a;
          do {
            puStack_628 = puVar4;
            iVar1 = (*(code *)(*param_2)[4])();
            if (iVar1 < 0) {
              return;
            }
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar3 < (uint)param_1[0x45]);
        }
        if (-1 < iVar1) {
          uVar3 = 0;
          if (param_1[0x46] != 0) {
            puVar4 = param_1 + 0xca;
            do {
              puStack_628 = puVar4;
              iVar1 = (*(code *)(*param_2)[4])();
              if (iVar1 < 0) {
                return;
              }
              uVar3 = uVar3 + 1;
              puVar4 = puVar4 + 1;
            } while (uVar3 < (uint)param_1[0x46]);
          }
          if (-1 < iVar1) {
            puStack_628 = param_1 + 0x14a;
            appuStack_5e8[1] = (undefined4 **)puStack_628;
            iVar1 = (*(code *)(*param_2)[4])();
            if (-1 < iVar1) {
              if (iStack_4c != 0) {
                piStack_604 = param_1 + 0x14c;
                uStack_634 = 4;
                ppuStack_63c = param_2;
                ppuStack_640 = (undefined4 **)0x5e755e;
                ppuStack_638 = (undefined4 **)piStack_604;
                iVar1 = (*(code *)(*param_2)[4])();
                if (iVar1 < 0) {
                  return;
                }
                ppuStack_640 = &puStack_628;
                iVar1 = (*(code *)(*param_2)[4])(param_2,&stack0xfffff9dc);
                if (iVar1 < 0) {
                  return;
                }
                if (iVar8 != 0) {
                  puVar4 = (undefined4 *)*piStack_604;
                  if (puVar4 == (undefined4 *)0xfffffffe) {
                    puVar4 = (undefined4 *)0x0;
                    param_1[0x14d] = 4;
                  }
                  if (puVar4 < (undefined4 *)param_1[0x45]) {
                    puVar2 = param_1 + (int)puVar4 + 0x4a;
                    do {
                      if (param_1[0x14d] != 4) break;
                      pppuVar5 = appuStack_5e8;
                      for (iVar1 = 0xda; iVar1 != 0; iVar1 = iVar1 + -1) {
                        *pppuVar5 = (undefined4 **)0x0;
                        pppuVar5 = pppuVar5 + 1;
                      }
                      appuStack_5e8[0] = (undefined4 **)(((*puVar2 & 0x80000000) != 0) + 3);
                      uStack_5e0 = *puVar2;
                      uStack_634 = *puVar2;
                      ppuStack_63c = (undefined4 **)(((uStack_634 & 0x80000000) != 0) + 3);
                      ppuStack_640 = (undefined4 **)0x5e7681;
                      ppuStack_638 = (undefined4 **)puVar4;
                      appuStack_5e8[1] = (undefined4 **)puVar4;
                      iVar1 = FUN_005e7df0();
                      if (iVar1 < 0) break;
                      uStack_634 = 1;
                      ppuStack_638 = (undefined4 **)0x0;
                      ppuStack_63c = (undefined4 **)0x0;
                      ppuStack_640 = param_2;
                      iVar1 = (*(code *)(*param_2)[5])();
                      if (iVar1 < 0) break;
                      uStack_634 = iStack_4c;
                      ppuStack_638 = param_2;
                      ppuStack_63c = (undefined4 **)0x5e76c0;
                      iVar1 = FUN_005e8430();
                      if (iVar1 < 0) break;
                      if (pvStack_2cc != (void *)0x0) {
                        uStack_634 = 0x5e76d6;
                        free(pvStack_2cc);
                      }
                      pvStack_2cc = (void *)0x0;
                      if (piStack_28c != (int *)0x0) {
                        uStack_634 = 0x5e76f1;
                        (**(code **)(*piStack_28c + 8))();
                      }
                      piStack_28c = (int *)0x0;
                      uStack_634 = 1;
                      ppuStack_638 = (undefined4 **)0x0;
                      ppuStack_63c = (undefined4 **)0x0;
                      ppuStack_640 = param_2;
                      iVar1 = (*(code *)(*param_2)[5])();
                      if (iVar1 < 0) break;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar2 = puVar2 + 1;
                    } while (puVar4 < (undefined4 *)param_1[0x45]);
                  }
                  puVar4 = (undefined4 *)*piStack_604;
                  if (puVar4 == (undefined4 *)0xfffffffe) {
                    puVar4 = (undefined4 *)0x0;
                    param_1[0x14d] = 5;
                  }
                  if (puVar4 < (undefined4 *)param_1[0x46]) {
                    do {
                      if (param_1[0x14d] != 5) break;
                      pppuVar5 = appuStack_5e8;
                      for (iVar1 = 0xda; iVar1 != 0; iVar1 = iVar1 + -1) {
                        *pppuVar5 = (undefined4 **)0x0;
                        pppuVar5 = pppuVar5 + 1;
                      }
                      uStack_634 = 0;
                      ppuStack_63c = (undefined4 **)0x5;
                      appuStack_5e8[0] = (undefined4 **)&DAT_00000005;
                      uStack_5e0 = 0;
                      ppuStack_640 = (undefined4 **)0x5e779c;
                      ppuStack_638 = (undefined4 **)puVar4;
                      appuStack_5e8[1] = (undefined4 **)puVar4;
                      iVar1 = FUN_005e7df0();
                      if (iVar1 < 0) {
                        return;
                      }
                      uStack_634 = 1;
                      ppuStack_638 = (undefined4 **)0x0;
                      ppuStack_63c = (undefined4 **)0x0;
                      ppuStack_640 = param_2;
                      iVar1 = (*(code *)(*param_2)[5])();
                      if (iVar1 < 0) {
                        return;
                      }
                      iVar1 = FUN_005e8430(param_2,uStack_60);
                      if (iVar1 < 0) {
                        return;
                      }
                      if (pvStack_2e0 != (void *)0x0) {
                        free(pvStack_2e0);
                      }
                      pvStack_2e0 = (void *)0x0;
                      if (piStack_2a0 != (int *)0x0) {
                        (**(code **)(*piStack_2a0 + 8))();
                      }
                      piStack_2a0 = (int *)0x0;
                      iVar1 = (*(code *)(*param_2)[5])(param_2,0,0,1);
                      if (iVar1 < 0) {
                        return;
                      }
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                    } while (puVar4 < (undefined4 *)param_1[0x46]);
                  }
                  if (iVar1 < 0) {
                    return;
                  }
                  if (*piStack_604 == -2) {
                    pppuVar5 = appuStack_5e8;
                    for (iVar1 = 0xda; iVar1 != 0; iVar1 = iVar1 + -1) {
                      *pppuVar5 = (undefined4 **)0x0;
                      pppuVar5 = pppuVar5 + 1;
                    }
                    appuStack_5e8[0] = (undefined4 **)0x7;
                    uStack_634 = _DAT_00000000;
                    ppuStack_638 = (undefined4 **)0xffffffff;
                    ppuStack_63c = (undefined4 **)0x7;
                    appuStack_5e8[1] = (undefined4 **)0xffffffff;
                    ppuStack_640 = (undefined4 **)0x5e78a6;
                    uStack_5e0 = uStack_634;
                    iVar1 = FUN_005e7df0();
                    if (iVar1 < 0) {
                      return;
                    }
                    uStack_634 = 1;
                    ppuStack_638 = (undefined4 **)0x0;
                    ppuStack_63c = (undefined4 **)0x0;
                    ppuStack_640 = param_2;
                    iVar1 = (*(code *)(*param_2)[5])();
                    if (iVar1 < 0) {
                      return;
                    }
                    FUN_005e8430(param_2,uStack_60);
                    if (pvStack_2e0 != (void *)0x0) {
                      free(pvStack_2e0);
                    }
                    pvStack_2e0 = (void *)0x0;
                    if (piStack_2a0 != (int *)0x0) {
                      (**(code **)(*piStack_2a0 + 8))();
                    }
                    piStack_2a0 = (int *)0x0;
                    iVar1 = (*(code *)(*param_2)[5])(param_2,0,0,1);
                    if (iVar1 < 0) {
                      return;
                    }
                  }
                }
              }
              uStack_634 = 1;
              ppuStack_638 = (undefined4 **)0x0;
              ppuStack_63c = (undefined4 **)0x0;
              ppuStack_640 = param_2;
              iVar1 = (*(code *)(*param_2)[5])();
              if (-1 < iVar1) {
                uVar7 = 0;
                uVar6 = 0;
                iVar1 = (*(code *)(*param_2)[5])(param_2,piStack_604,appuStack_5e8,0);
                if ((-1 < iVar1) &&
                   (iVar1 = (*(code *)(*param_2)[4])(param_2,&stack0xfffff9bc,4,&ppuStack_640),
                   -1 < iVar1)) {
                  (*(code *)(*param_2)[5])(param_2,uVar6,uVar7,0,0);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


