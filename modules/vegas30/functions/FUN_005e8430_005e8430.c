/* Module: vegas30.exe
   Function: FUN_005e8430
   Address: 005e8430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005e8430(int *param_1,IStream *param_2,undefined4 param_3,int param_4,int param_5)

{
  LPSTREAM *ppstm;
  IStream *This;
  int iVar1;
  LARGE_INTEGER dlibMove;
  LARGE_INTEGER dlibMove_00;
  LARGE_INTEGER dlibMove_01;
  HRESULT HVar2;
  int iVar3;
  ULONG UVar4;
  int *piVar5;
  ULARGE_INTEGER *unaff_EBX;
  ULARGE_INTEGER *unaff_EBP;
  ULARGE_INTEGER *unaff_ESI;
  ULARGE_INTEGER *unaff_EDI;
  uint *puVar6;
  ULONG local_80;
  int local_7c;
  ULONG local_78;
  ULONG UStack_74;
  ULARGE_INTEGER UStack_70;
  int iStack_68;
  ULONG UStack_64;
  int *piStack_60;
  int aiStack_5c [2];
  uint uStack_54;
  ULARGE_INTEGER UStack_50;
  uint auStack_44 [2];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [56];
  
  UStack_70.s.HighPart = 1;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  if (param_4 != 0) {
    UStack_70.s.HighPart = 0x80000001;
  }
  HVar2 = (*param_2->lpVtbl->Write)(param_2,&UStack_70.s.HighPart,4,(ULONG *)0x0);
  if ((((-1 < HVar2) &&
       (HVar2 = (*param_2->lpVtbl->Seek)
                          (param_2,(LARGE_INTEGER)0x100000000,(DWORD)&UStack_50,unaff_EDI),
       -1 < HVar2)) &&
      (HVar2 = (*param_2->lpVtbl->Write)(param_2,&local_7c,4,&local_78), -1 < HVar2)) &&
     (HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1,4,&local_78), -1 < HVar2)) {
    local_7c = local_7c + local_78;
    HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 1,4,&local_78);
    if (-1 < HVar2) {
      local_7c = local_7c + local_78;
      HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 2,4,&local_78);
      if (-1 < HVar2) {
        local_7c = local_7c + local_78;
        iVar3 = lstrlenA((LPCSTR)(param_1 + 3));
        UStack_74 = iVar3 + 1;
        UStack_64 = UStack_74;
        MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 3),-1,(LPWSTR)&DAT_0065b8a8,UStack_74);
        *(undefined2 *)(&DAT_0065b8a6 + UStack_64 * 2) = 0;
        HVar2 = (*param_2->lpVtbl->Write)(param_2,&UStack_74,4,&local_78);
        if (-1 < HVar2) {
          local_7c = local_7c + local_78;
          HVar2 = (*param_2->lpVtbl->Write)(param_2,&DAT_0065b8a8,UStack_74 * 2,&local_78);
          if (-1 < HVar2) {
            local_7c = local_7c + local_78;
            iVar3 = lstrlenA((LPCSTR)(param_1 + 0x44));
            UStack_74 = iVar3 + 1;
            UStack_64 = UStack_74;
            MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x44),-1,(LPWSTR)&DAT_0065b8a8,UStack_74);
            *(undefined2 *)(&DAT_0065b8a6 + UStack_64 * 2) = 0;
            HVar2 = (*param_2->lpVtbl->Write)(param_2,&UStack_74,4,&local_78);
            if (-1 < HVar2) {
              local_7c = local_7c + local_78;
              HVar2 = (*param_2->lpVtbl->Write)(param_2,&DAT_0065b8a8,UStack_74 * 2,&local_78);
              if (-1 < HVar2) {
                local_7c = local_7c + local_78;
                iVar3 = lstrlenA((LPCSTR)(param_1 + 0x85));
                UVar4 = iVar3 + 1;
                UStack_74 = UVar4;
                MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x85),-1,(LPWSTR)&DAT_0065b8a8,UVar4);
                *(undefined2 *)(&DAT_0065b8a6 + UVar4 * 2) = 0;
                HVar2 = (*param_2->lpVtbl->Write)(param_2,&UStack_74,4,&local_78);
                if (-1 < HVar2) {
                  local_7c = local_7c + local_78;
                  HVar2 = (*param_2->lpVtbl->Write)(param_2,&DAT_0065b8a8,UStack_74 * 2,&local_78);
                  if (-1 < HVar2) {
                    local_7c = local_7c + local_78;
                    HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 0xc6,4,&local_78);
                    if (-1 < HVar2) {
                      local_7c = local_7c + local_78;
                      HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 200,4,&local_78);
                      if (-1 < HVar2) {
                        UVar4 = param_1[200];
                        local_7c = local_7c + local_78;
                        if (UVar4 != 0) {
                          HVar2 = (*param_2->lpVtbl->Write)
                                            (param_2,(void *)param_1[199],UVar4,&local_78);
                          if (HVar2 < 0) {
                            return;
                          }
                          local_7c = local_7c + local_78;
                        }
                        HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 0xce,0x10,&local_78);
                        if (-1 < HVar2) {
                          local_7c = local_7c + local_78;
                          HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 0xca,0x10,&local_78);
                          if (-1 < HVar2) {
                            local_7c = local_7c + local_78;
                            HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 0xd2,4,&local_78);
                            if (-1 < HVar2) {
                              local_7c = local_7c + local_78;
                              HVar2 = (*param_2->lpVtbl->Write)(param_2,param_1 + 0xd3,4,&local_78);
                              if (-1 < HVar2) {
                                local_7c = local_7c + local_78;
                                HVar2 = (*param_2->lpVtbl->Write)
                                                  (param_2,param_1 + 0xd4,4,&local_78);
                                if (-1 < HVar2) {
                                  local_7c = local_7c + local_78;
                                  if (param_5 == 0) {
                                    HVar2 = (*param_2->lpVtbl->Write)
                                                      (param_2,param_1 + 0xd6,4,&local_78);
                                    if (HVar2 < 0) {
                                      return;
                                    }
                                    local_7c = local_7c + local_78;
                                    puVar6 = auStack_44;
                                    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
                                      *puVar6 = 0;
                                      puVar6 = puVar6 + 1;
                                    }
                                    This = (IStream *)param_1[0xd7];
                                    if (This == (IStream *)0x0) {
                                      HVar2 = (*param_2->lpVtbl->Write)
                                                        (param_2,auStack_3c,8,&local_78);
                                      if (HVar2 < 0) {
                                        return;
                                      }
                                      local_7c = local_7c + local_78;
                                    }
                                    else {
                                      HVar2 = (*This->lpVtbl->Seek)
                                                        (This,(LARGE_INTEGER)0x0,0,unaff_ESI);
                                      if (HVar2 < 0) {
                                        return;
                                      }
                                      unaff_ESI = (ULARGE_INTEGER *)0x1;
                                      (**(code **)(*(int *)param_1[0xd7] + 0x30))
                                                ((int *)param_1[0xd7],auStack_44 + 1);
                                      HVar2 = (*param_2->lpVtbl->Write)
                                                        (param_2,auStack_44,8,&local_80);
                                      if (HVar2 < 0) {
                                        return;
                                      }
                                      unaff_EBX = (ULARGE_INTEGER *)((int)unaff_EBX + local_80);
                                      iVar3 = (**(code **)(*(int *)param_1[0xd7] + 0x1c))
                                                        ((int *)param_1[0xd7],param_2,0xffffffff,
                                                         0x7fffffff,0,aiStack_5c);
                                      if (iVar3 < 0) {
                                        return;
                                      }
                                      local_7c = local_7c + uStack_54;
                                    }
                                    if (param_4 != 0) {
                                      ppstm = (LPSTREAM *)(param_1 + 0xd8);
                                      if (param_1[0xd8] == 0) {
                                        HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,ppstm);
                                        if (HVar2 < 0) {
                                          return;
                                        }
                                        HVar2 = (*(*ppstm)->lpVtbl->Seek)
                                                          (*ppstm,(LARGE_INTEGER)0x100000000,
                                                           (DWORD)aiStack_5c,unaff_ESI);
                                        if (HVar2 < 0) {
                                          return;
                                        }
                                        UStack_70.s.HighPart = 0;
                                        HVar2 = (*(*ppstm)->lpVtbl->Write)
                                                          (*ppstm,&UStack_70.s.HighPart,4,&UStack_74
                                                          );
                                        if (HVar2 < 0) {
                                          return;
                                        }
                                        local_78 = local_78 + UStack_74;
                                        piVar5 = (int *)FUN_005b87b0(DAT_0064b138);
                                        iStack_68 = 0;
                                        aiStack_5c[0] = *piVar5;
                                        piStack_60 = piVar5;
                                        if (0 < aiStack_5c[0]) {
                                          do {
                                            if (piVar5 == (int *)0x0) {
                                              iVar3 = 0;
                                            }
                                            else {
                                              iVar3 = *piVar5;
                                            }
                                            if ((iStack_68 < 0) || (iVar3 + -1 < iStack_68)) {
                                              iVar3 = 0;
                                            }
                                            else {
                                              iVar3 = *(int *)(piVar5[2] + iStack_68 * 4);
                                            }
                                            if (*(int *)(iVar3 + 4) == 2) {
                                              if (*param_1 == 4) {
                                                iVar1 = param_1[1];
                                                if ((iVar1 == *(int *)(iVar3 + 0x44)) ||
                                                   ((iVar1 != 0 &&
                                                    (*(float *)(iVar3 + 0x158 + iVar1 * 8) !=
                                                     (float)_DAT_00610fd8)))) {
                                                  HVar2 = (*(*ppstm)->lpVtbl->Write)
                                                                    (*ppstm,(void *)(iVar3 + 0x1c),4
                                                                     ,&UStack_74);
                                                  if ((HVar2 < 0) ||
                                                     (iVar3 = FUN_005bd0a0(*ppstm,0,iVar3),
                                                     iVar3 < 0)) break;
LAB_005e8a88:
                                                  UStack_70.s.HighPart = UStack_70.s.HighPart + 1;
                                                  piVar5 = piStack_60;
                                                }
                                              }
                                              else if ((*param_1 == 5) &&
                                                      (*(float *)(iVar3 + 0x60 + param_1[1] * 8) !=
                                                       (float)_DAT_00610fd8)) {
                                                HVar2 = (*(*ppstm)->lpVtbl->Write)
                                                                  (*ppstm,(void *)(iVar3 + 0x1c),4,
                                                                   &UStack_74);
                                                if ((-1 < HVar2) &&
                                                   (iVar3 = FUN_005bd0a0(*ppstm,0,iVar3), -1 < iVar3
                                                   )) goto LAB_005e8a88;
                                                break;
                                              }
                                            }
                                            iStack_68 = iStack_68 + 1;
                                          } while (iStack_68 < aiStack_5c[0]);
                                        }
                                        dlibMove.s.HighPart = 0;
                                        dlibMove.s.LowPart = uStack_54;
                                        HVar2 = (*(*ppstm)->lpVtbl->Seek)
                                                          (*ppstm,dlibMove,0,unaff_EBP);
                                        if (HVar2 < 0) {
                                          return;
                                        }
                                        unaff_EBP = &UStack_70;
                                        unaff_ESI = (ULARGE_INTEGER *)0x4;
                                        HVar2 = (*(*ppstm)->lpVtbl->Write)
                                                          (*ppstm,&iStack_68,4,(ULONG *)unaff_EBP);
                                        if (HVar2 < 0) {
                                          return;
                                        }
                                      }
                                      HVar2 = (*(*ppstm)->lpVtbl->Seek)
                                                        (*ppstm,(LARGE_INTEGER)0x0,0,unaff_ESI);
                                      if (HVar2 < 0) {
                                        return;
                                      }
                                      puVar6 = auStack_44;
                                      for (iVar3 = 0x12; puVar6 = (uint *)((int)puVar6 + 4),
                                          iVar3 != 0; iVar3 = iVar3 + -1) {
                                        *puVar6 = 0;
                                      }
                                      (*(*ppstm)->lpVtbl->Stat)
                                                (*ppstm,(STATSTG *)(auStack_44 + 1),1);
                                      HVar2 = (*param_2->lpVtbl->Write)
                                                        (param_2,auStack_38,8,&UStack_74);
                                      if (HVar2 < 0) {
                                        return;
                                      }
                                      local_78 = local_78 + UStack_74;
                                      unaff_ESI = &UStack_50;
                                      HVar2 = (*(*ppstm)->lpVtbl->CopyTo)
                                                        (*ppstm,param_2,
                                                         (ULARGE_INTEGER)0x7fffffffffffffff,
                                                         (ULARGE_INTEGER *)0x0,unaff_ESI);
                                      if (HVar2 < 0) {
                                        return;
                                      }
                                      local_78 = local_78 + UStack_50.s.LowPart;
                                    }
                                  }
                                  HVar2 = (*param_2->lpVtbl->Seek)
                                                    (param_2,(LARGE_INTEGER)0x100000000,
                                                     (DWORD)aiStack_5c,unaff_ESI);
                                  if (((-1 < HVar2) &&
                                      (dlibMove_00.s.HighPart = 0,
                                      dlibMove_00.s.LowPart = auStack_44[0],
                                      HVar2 = (*param_2->lpVtbl->Seek)
                                                        (param_2,dlibMove_00,0,unaff_EBP),
                                      -1 < HVar2)) &&
                                     (HVar2 = (*param_2->lpVtbl->Write)
                                                        (param_2,&UStack_74,4,(ULONG *)&UStack_70),
                                     -1 < HVar2)) {
                                    dlibMove_01.s.HighPart = 0;
                                    dlibMove_01.s.LowPart = UStack_50.s.LowPart;
                                    (*param_2->lpVtbl->Seek)(param_2,dlibMove_01,0,unaff_EBX);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


