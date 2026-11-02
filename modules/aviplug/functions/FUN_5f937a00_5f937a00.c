/* Module: aviplug.dll
   Function: FUN_5f937a00
   Address: 5f937a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f937a00(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  int iVar6;
  SIZE_T SVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  SIZE_T unaff_ESI;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  longlong lVar15;
  undefined8 uVar16;
  double dVar17;
  int iVar18;
  undefined8 uStack_2dc;
  undefined4 *puStack_2d4;
  undefined1 auStack_2cc [4];
  undefined4 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 auStack_28c [5];
  undefined4 uStack_278;
  int iStack_274;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_24c [12];
  uint uStack_240;
  
  if (param_1[0x4c] == 0) {
    return -0x7fff0001;
  }
  local_2c8 = 0;
  puVar1 = (undefined4 *)(param_1[0x4c] + param_1[0x4b] * 0x48);
  iVar2 = (**(code **)*param_2)(param_2,&DAT_5f9d9cb0,puVar1);
  if (-1 < iVar2) {
    pvVar3 = GlobalAlloc(0x42,0x108);
    pvVar4 = GlobalLock(pvVar3);
    puVar1[0x11] = pvVar4;
    if (pvVar4 == (LPVOID)0x0) {
LAB_5f9382a0:
      iVar2 = -0x7ff8fff2;
    }
    else {
      iVar2 = (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,puVar1 + 8);
      if (-1 < iVar2) {
        iVar18 = 0;
        iVar2 = (**(code **)(*(int *)*puVar1 + 0x38))((int *)*puVar1,0,0,&stack0xfffffd1c,0,0,0);
        if (-1 < iVar2) {
          pvVar3 = GlobalAlloc(0x42,unaff_ESI);
          pvVar4 = GlobalLock(pvVar3);
          *(LPVOID *)(puVar1[0x11] + 8) = pvVar4;
          if (*(int *)(puVar1[0x11] + 8) == 0) goto LAB_5f9382a0;
          iVar2 = (**(code **)(*(int *)*puVar1 + 0x38))
                            ((int *)*puVar1,*(int *)(puVar1[0x11] + 8),unaff_ESI,0,auStack_2cc,0x40,
                             0);
          if (-1 < iVar2) {
            iVar11 = 0;
            iVar6 = *(int *)(*(int *)(param_1[0x61] + 0x428) + 0x94);
            if (iVar6 != 0) {
              iVar11 = *(int *)(iVar6 + 0x14);
              iVar18 = iVar6 + 0x10;
            }
            uStack_2dc = (double)CONCAT44(uStack_2b8,uStack_2bc);
            if (_DAT_5f9d7cc8 <= ABS(_DAT_5f9d7cd0 - (double)CONCAT44(uStack_2b8,uStack_2bc))) {
              if (_DAT_5f9d7cb8 <= ABS(_DAT_5f9d7cc0 - (double)CONCAT44(uStack_2b8,uStack_2bc))) {
                iVar8 = 0;
                *(undefined4 *)(puVar1[0x11] + 0x2c) = 1;
                do {
                  dVar17 = floor(uStack_2dc);
                  if (dVar17 == uStack_2dc) break;
                  uStack_2dc = uStack_2dc * _DAT_5f9d78e8;
                  iVar8 = iVar8 + 1;
                  *(int *)(puVar1[0x11] + 0x2c) = *(int *)(puVar1[0x11] + 0x2c) * 10;
                } while (iVar8 < 6);
                uVar5 = ftol();
                *(undefined4 *)(puVar1[0x11] + 0x28) = uVar5;
              }
              else {
                *(undefined4 *)(puVar1[0x11] + 0x28) = 15000;
                *(undefined4 *)(puVar1[0x11] + 0x2c) = 0x3e9;
              }
            }
            else {
              *(undefined4 *)(puVar1[0x11] + 0x28) = 30000;
              *(undefined4 *)(puVar1[0x11] + 0x2c) = 0x3e9;
            }
            *(undefined4 *)(puVar1[0x11] + 0x44) = uStack_2c0;
            puVar12 = (undefined4 *)(puVar1[0x11] + 0xb0);
            for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            *(undefined4 *)(puVar1[0x11] + 0xb0) = 0x48;
            if (((iVar11 == 0) || (iVar11 == 0x20424944)) || (iVar11 == 0x656e6f4e)) {
              puVar1[3] = 1;
              iVar18 = *(int *)(puVar1[0x11] + 8);
              uVar10 = (uint)*(ushort *)(iVar18 + 0xe) * *(int *)(iVar18 + 4) + 0x1f;
              *(int *)(puVar1[0x11] + 0x24) =
                   ((int)((uVar10 & 0xffffffe0) + ((int)uVar10 >> 0x1f & 7U)) >> 3) *
                   *(int *)(iVar18 + 8);
              puVar1[4] = *(undefined4 *)(puVar1[0x11] + 0x24);
              *(undefined4 *)(puVar1[0x11] + 4) = 0;
LAB_5f9381f8:
              iVar18 = puVar1[0x11];
              uVar10 = *(uint *)(iVar18 + 0x2c);
              lVar15 = __allmul(uVar10,(int)uVar10 >> 0x1f,10000000,0);
              *(longlong *)(puVar1 + 0xc) = lVar15;
              uVar10 = *(uint *)(iVar18 + 0x28);
              if (uVar10 != 0) {
                uVar16 = __alldiv(puVar1[0xc],puVar1[0xd],uVar10,(int)uVar10 >> 0x1f);
                *(undefined8 *)(puVar1 + 0xc) = uVar16;
              }
              lVar15 = __allmul(puVar1[8],puVar1[9],puVar1[0xc],puVar1[0xd]);
              *(longlong *)(puVar1 + 10) = lVar15;
              param_1[0x4b] = param_1[0x4b] + 1;
LAB_5f93825d:
              if (-1 < iVar2) goto LAB_5f93826d;
            }
            else {
              iVar2 = -0x7ffb1fe1;
              uVar5 = ICOpen(0x63646976,*(undefined4 *)(iVar18 + 4),1);
              *(undefined4 *)puVar1[0x11] = uVar5;
              iVar11 = *(int *)puVar1[0x11];
              if (iVar11 != 0) {
                iVar11 = ICSendMessage(iVar11,0x4006,((int *)puVar1[0x11])[2],0);
                if (iVar11 == 0) {
                  if (*(int *)(iVar18 + 0x24) != 0) {
                    *(int *)(iVar18 + 0x20) = iVar6 + 0x40;
                    pvVar3 = GlobalAlloc(0x42,*(SIZE_T *)(iVar18 + 0x24));
                    puStack_2d4 = GlobalLock(pvVar3);
                    if (puStack_2d4 == (undefined4 *)0x0) goto LAB_5f9382a0;
                    uVar10 = *(uint *)(iVar18 + 0x24);
                    puVar12 = *(undefined4 **)(iVar18 + 0x20);
                    puVar13 = puStack_2d4;
                    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *puVar13 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar13 = puVar13 + 1;
                    }
                    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                      *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                      puVar13 = (undefined4 *)((int)puVar13 + 1);
                    }
                    iVar6 = ICSendMessage(*(undefined4 *)puVar1[0x11],0x5001,puStack_2d4,
                                          *(undefined4 *)(iVar18 + 0x24));
                    if (iVar6 < 0) goto LAB_5f938263;
                  }
                  SVar7 = ICSendMessage(*(undefined4 *)puVar1[0x11],0x4004,
                                        ((undefined4 *)puVar1[0x11])[2],0);
                  if (0 < (int)SVar7) {
                    pvVar3 = GlobalAlloc(0x42,SVar7);
                    pvVar4 = GlobalLock(pvVar3);
                    *(LPVOID *)(puVar1[0x11] + 0xc) = pvVar4;
                    puVar12 = (undefined4 *)puVar1[0x11];
                    if (puVar12[3] == 0) goto LAB_5f9382a0;
                    iVar6 = ICSendMessage(*puVar12,0x4004,puVar12[2],puVar12[3]);
                    if ((iVar6 == 0) &&
                       (iVar6 = ICGetInfo(*(undefined4 *)puVar1[0x11],auStack_24c,0x238), iVar6 != 0
                       )) {
                      *(uint *)(puVar1[0x11] + 0x30) = uStack_240 >> 1 & 1;
                      if ((uStack_240 & 1) == 0) {
                        *(undefined4 *)(puVar1[0x11] + 0x18) = 0xffffffff;
                      }
                      else {
                        *(undefined4 *)(puVar1[0x11] + 0x34) = 1;
                        if (*(int *)(iVar18 + 0xc) == -1) {
                          iVar6 = ICSendMessage(*(undefined4 *)puVar1[0x11],0x501e,
                                                (undefined4 *)puVar1[0x11] + 6,0);
                          if (iVar6 != 0) goto LAB_5f938263;
                        }
                        else {
                          *(int *)(puVar1[0x11] + 0x18) = *(int *)(iVar18 + 0xc);
                        }
                      }
                      if (((uStack_240 & 4) == 0) && ((uStack_240 & 0x20) == 0)) {
                        *(undefined4 *)(puVar1[0x11] + 0x20) = 1;
                      }
                      else if ((*(uint *)(iVar18 + 0x14) & 4) == 0) {
                        *(undefined4 *)(puVar1[0x11] + 0x20) = 1;
                      }
                      else {
                        *(undefined4 *)(puVar1[0x11] + 0x20) = *(undefined4 *)(iVar18 + 8);
                      }
                      iVar6 = puVar1[0x11];
                      if (*(int *)(*(int *)(iVar6 + 0xc) + 0x10) == 0x64737664) {
                        *(undefined4 *)(iVar6 + 4) = 0x64737664;
                        iVar6 = puVar1[0x11];
                        if (((*(int *)(iVar6 + 0x28) == 30000) && (*(int *)(iVar6 + 0x2c) == 0x3e9))
                           || ((*(int *)(iVar6 + 0x28) == 0x19 && (*(int *)(iVar6 + 0x2c) == 1)))) {
                          iVar2 = FUN_5f94ccb0(*(int *)(iVar6 + 0xc),0,(undefined4 *)(iVar6 + 0x48))
                          ;
                          if (iVar2 < 0) goto LAB_5f938263;
                          param_1[0x56] = 1;
                          if (*(int *)(puVar1[0x11] + 0x28) == 0x19) {
                            bVar14 = _DAT_5f9d7cb0 != (double)CONCAT44(uStack_2b0,uStack_2b4);
                            *(byte *)((int)param_1 + 0x162) = *(byte *)((int)param_1 + 0x162) | 0x20
                            ;
                            *(byte *)((int)param_1 + 0x16a) = *(byte *)((int)param_1 + 0x16a) | 0x20
                            ;
                            param_1[0x57] = 0xc;
                          }
                          else {
                            bVar14 = _DAT_5f9d7ca8 != (double)CONCAT44(uStack_2b0,uStack_2b4);
                            param_1[0x57] = 10;
                          }
                          if (!bVar14) {
                            *(byte *)((int)param_1 + 0x165) =
                                 *(byte *)((int)param_1 + 0x165) & 0xfa | 2;
                          }
                          switch(uStack_2c0) {
                          case 0:
                            *(byte *)((int)param_1 + 0x166) =
                                 *(byte *)((int)param_1 + 0x166) & 0xf7 | 0x50;
                            break;
                          case 1:
                            *(byte *)((int)param_1 + 0x166) =
                                 *(byte *)((int)param_1 + 0x166) & 0xbf | 0x18;
                            break;
                          case 0xffffffff:
                          case 2:
                            *(byte *)((int)param_1 + 0x166) = *(byte *)((int)param_1 + 0x166) | 0x58
                            ;
                          }
                        }
                      }
                      else {
                        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar18 + 4);
                      }
                      iVar6 = puVar1[0x11];
                      if ((*(uint *)(iVar18 + 0x14) & 2) == 0) {
                        *(undefined4 *)(iVar6 + 0x38) = 0;
                        *(undefined4 *)(puVar1[0x11] + 0x3c) = *(undefined4 *)(puVar1[0x11] + 0x18);
                      }
                      else {
                        iVar6 = MulDiv(*(int *)(iVar18 + 0x10),*(int *)(iVar6 + 0x2c),
                                       *(int *)(iVar6 + 0x28));
                        *(int *)(puVar1[0x11] + 0x38) = iVar6;
                        *(undefined4 *)(puVar1[0x11] + 0x3c) = 10000;
                      }
                      iVar6 = puVar1[8];
                      if ((puVar1[9] != 0) || (iVar6 < 0)) {
                        iVar6 = 0x7ffffffe;
                      }
                      puVar12 = auStack_28c;
                      for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                        *puVar12 = 0;
                        puVar12 = puVar12 + 1;
                      }
                      puVar12 = (undefined4 *)puVar1[0x11];
                      auStack_28c[1] = puVar12[3];
                      auStack_28c[3] = puVar12[2];
                      uStack_26c = *(undefined4 *)(iVar18 + 0x10);
                      uStack_278 = 0;
                      uStack_268 = puVar12[8];
                      uStack_264 = puVar12[10];
                      uStack_260 = puVar12[0xb];
                      iStack_274 = iVar6;
                      ICSendMessage(*puVar12,0x4046,auStack_28c,0x40);
                      puVar12 = (undefined4 *)puVar1[0x11];
                      iVar18 = ICSendMessage(*puVar12,0x4007,puVar12[2],puVar12[3]);
                      if (iVar18 == 0) {
                        puVar12 = (undefined4 *)puVar1[0x11];
                        uVar5 = ICSendMessage(*puVar12,0x4005,puVar12[2],puVar12[3]);
                        *(undefined4 *)(puVar1[0x11] + 0x24) = uVar5;
                        if (((uStack_240 & 4) != 0) && ((uStack_240 & 0x20) == 0)) {
                          SVar7 = ICSendMessage(*(undefined4 *)puVar1[0x11],0x400a,
                                                ((undefined4 *)puVar1[0x11])[3],0);
                          pvVar3 = GlobalAlloc(0x42,SVar7);
                          pvVar4 = GlobalLock(pvVar3);
                          if (pvVar4 != (LPVOID)0x0) {
                            *(LPVOID *)(puVar1[0x11] + 0x10) = pvVar4;
                            iVar2 = ICSendMessage(*(undefined4 *)puVar1[0x11],0x400a,
                                                  ((undefined4 *)puVar1[0x11])[3],pvVar4);
                            if (iVar2 < 0) {
                              iVar2 = -0x7ffb1fe5;
                              goto LAB_5f938263;
                            }
                            uVar10 = (uint)*(ushort *)((int)pvVar4 + 0xe) *
                                     *(int *)((int)pvVar4 + 4) + 0x1f;
                            SVar7 = ((int)((uVar10 & 0xffffffe0) + ((int)uVar10 >> 0x1f & 7U)) >> 3)
                                    * *(int *)((int)pvVar4 + 8);
                            *(SIZE_T *)((int)pvVar4 + 0x14) = SVar7;
                            pvVar3 = GlobalAlloc(0x42,SVar7);
                            pvVar4 = GlobalLock(pvVar3);
                            *(LPVOID *)(puVar1[0x11] + 0x14) = pvVar4;
                            puVar12 = (undefined4 *)puVar1[0x11];
                            if (puVar12[5] != 0) {
                              iVar2 = ICSendMessage(*puVar12,0x400c,puVar12[3],puVar12[4]);
                              if (iVar2 != 0) goto LAB_5f9382b4;
                              goto LAB_5f938110;
                            }
                          }
                          goto LAB_5f9382a0;
                        }
LAB_5f938110:
                        iVar18 = puVar1[0x11];
                        puVar1[3] = 2;
                        puVar1[4] = 0;
                        iVar2 = 0;
                        *(undefined4 *)(iVar18 + 0xb4) = DAT_5f9f2bc0;
                        *(undefined4 *)(iVar18 + 0xb8) = DAT_5f9f2bc4;
                        *(undefined4 *)(iVar18 + 0xbc) = DAT_5f9f2bc8;
                        *(undefined4 *)(iVar18 + 0xc0) = DAT_5f9f2bcc;
                        *(undefined4 *)(puVar1[0x11] + 0xc4) =
                             *(undefined4 *)(*(int *)(puVar1[0x11] + 0xc) + 0x10);
                        *(uint *)(puVar1[0x11] + 200) =
                             (uint)*(ushort *)(*(int *)(puVar1[0x11] + 0xc) + 0xe);
                        *(undefined4 *)(puVar1[0x11] + 0xcc) =
                             *(undefined4 *)(*(int *)(puVar1[0x11] + 0xc) + 4);
                        *(undefined4 *)(puVar1[0x11] + 0xd0) =
                             *(undefined4 *)(*(int *)(puVar1[0x11] + 0xc) + 8);
                        iVar18 = puVar1[0x11];
                        *(undefined4 *)(iVar18 + 0xd8) = uStack_2b4;
                        *(undefined4 *)(iVar18 + 0xdc) = uStack_2b0;
                        iVar18 = puVar1[0x11];
                        *(undefined4 *)(iVar18 + 0xe0) = 0xffffffff;
                        *(undefined4 *)(iVar18 + 0xe4) = 0xffffffff;
                        *(undefined4 *)(puVar1[0x11] + 0xe8) = 0;
                        goto LAB_5f9381f8;
                      }
                      goto LAB_5f93825d;
                    }
                  }
                }
                else {
LAB_5f9382b4:
                  iVar2 = -0x7ffb1fc5;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_5f938263:
  (**(code **)(*param_1 + 0x68))(param_1,puVar1);
LAB_5f93826d:
  if (puStack_2d4 != (undefined4 *)0x0) {
    pvVar3 = GlobalHandle(puStack_2d4);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(puStack_2d4);
    GlobalFree(pvVar3);
  }
  return iVar2;
}


