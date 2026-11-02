/* Module: vegas30.exe
   Function: FUN_005e8be0
   Address: 005e8be0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005e8be0(int *param_1,undefined4 param_2,int param_3)

{
  LPSTR pCVar1;
  size_t *psVar2;
  LPSTREAM *ppIVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  int *piStack_38;
  int local_24 [3];
  undefined4 uStack_18;
  int iStack_10;
  int iStack_c;
  int local_8 [2];
  
  piStack_38 = local_8;
  *(undefined4 *)(param_3 + 0x354) = 0;
  local_24[1] = 1;
  local_24[0] = 0;
  iVar5 = (**(code **)(*param_1 + 0x14))(param_1,0,0,1);
  if ((-1 < iVar5) &&
     (iVar5 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffffcc,4,&iStack_10), -1 < iVar5)) {
    if ((unaff_EDI & 0x7fffffff) == 1) {
      iVar5 = (**(code **)(*param_1 + 0xc))(param_1,local_8,4,&iStack_10);
      if ((-1 < iVar5) &&
         (iVar5 = (**(code **)(*param_1 + 0xc))(param_1,param_3,4,&iStack_10), -1 < iVar5)) {
        local_8[0] = local_8[0] - iStack_10;
        if (local_8[0] == 0) {
          return iVar5;
        }
        iVar5 = (**(code **)(*param_1 + 0xc))(param_1,param_3 + 4,4,&iStack_10);
        if (-1 < iVar5) {
          local_8[0] = local_8[0] - iStack_10;
          if (local_8[0] == 0) {
            return iVar5;
          }
          iVar5 = (**(code **)(*param_1 + 0xc))(param_1,param_3 + 8,4,&iStack_10);
          if (-1 < iVar5) {
            local_8[0] = local_8[0] - iStack_10;
            if (local_8[0] == 0) {
              return iVar5;
            }
            iVar5 = (**(code **)(*param_1 + 0xc))(param_1,&piStack_38,4,&iStack_10);
            if (-1 < iVar5) {
              local_8[0] = local_8[0] - iStack_10;
              if (local_8[0] == 0) {
                return iVar5;
              }
              iVar5 = (**(code **)(*param_1 + 0xc))
                                (param_1,&DAT_0065b59c,(int)piStack_38 * 2,&iStack_10);
              if (-1 < iVar5) {
                local_8[0] = local_8[0] - iStack_10;
                if (local_8[0] == 0) {
                  return iVar5;
                }
                pCVar1 = (LPSTR)(param_3 + 0xc);
                if (DAT_0065b59c == 0) {
                  if (pCVar1 != (LPSTR)0x0) {
                    *pCVar1 = '\0';
                  }
                }
                else {
                  WideCharToMultiByte(0,0,&DAT_0065b59c,-1,pCVar1,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                }
                *(undefined1 *)(param_3 + 0x10f) = 0;
                iVar5 = (**(code **)(*param_1 + 0xc))(param_1,&piStack_38,4,&iStack_10);
                if (-1 < iVar5) {
                  local_8[0] = local_8[0] - iStack_10;
                  if (local_8[0] == 0) {
                    return iVar5;
                  }
                  iVar5 = (**(code **)(*param_1 + 0xc))
                                    (param_1,&DAT_0065b59c,(int)piStack_38 * 2,&iStack_10);
                  if (-1 < iVar5) {
                    local_8[0] = local_8[0] - iStack_10;
                    if (local_8[0] == 0) {
                      return iVar5;
                    }
                    pCVar1 = (LPSTR)(param_3 + 0x110);
                    if (DAT_0065b59c == 0) {
                      if (pCVar1 != (LPSTR)0x0) {
                        *pCVar1 = '\0';
                      }
                    }
                    else {
                      WideCharToMultiByte(0,0,&DAT_0065b59c,-1,pCVar1,0x104,(LPCSTR)0x0,(LPBOOL)0x0)
                      ;
                    }
                    *(undefined1 *)(param_3 + 0x213) = 0;
                    iVar5 = (**(code **)(*param_1 + 0xc))(param_1,&piStack_38,4,&iStack_10);
                    if (-1 < iVar5) {
                      local_8[0] = local_8[0] - iStack_10;
                      if (local_8[0] == 0) {
                        return iVar5;
                      }
                      iVar5 = (**(code **)(*param_1 + 0xc))
                                        (param_1,&DAT_0065b59c,(int)piStack_38 * 2,&iStack_10);
                      if (-1 < iVar5) {
                        local_8[0] = local_8[0] - iStack_10;
                        if (local_8[0] == 0) {
                          return iVar5;
                        }
                        pCVar1 = (LPSTR)(param_3 + 0x214);
                        if (DAT_0065b59c == 0) {
                          if (pCVar1 != (LPSTR)0x0) {
                            *pCVar1 = '\0';
                          }
                        }
                        else {
                          WideCharToMultiByte(0,0,&DAT_0065b59c,-1,pCVar1,0x104,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
                        }
                        *(undefined1 *)(param_3 + 0x317) = 0;
                        iVar5 = (**(code **)(*param_1 + 0xc))(param_1,param_3 + 0x318,4,&iStack_10);
                        if (-1 < iVar5) {
                          local_8[0] = local_8[0] - iStack_10;
                          if (local_8[0] == 0) {
                            return iVar5;
                          }
                          psVar2 = (size_t *)(param_3 + 800);
                          iVar5 = (**(code **)(*param_1 + 0xc))(param_1,psVar2,4,&iStack_10);
                          if (-1 < iVar5) {
                            local_8[0] = local_8[0] - iStack_10;
                            if (local_8[0] == 0) {
                              return iVar5;
                            }
                            if (*psVar2 != 0) {
                              iVar5 = -0x7ff8fff2;
                              pvVar6 = calloc(1,*psVar2);
                              *(void **)(param_3 + 0x31c) = pvVar6;
                              if ((pvVar6 == (void *)0x0) ||
                                 (iVar5 = (**(code **)(*param_1 + 0xc))
                                                    (param_1,pvVar6,*psVar2,&iStack_10), iVar5 < 0))
                              goto LAB_005e924c;
                              local_8[0] = local_8[0] - iStack_10;
                              if (local_8[0] == 0) {
                                return iVar5;
                              }
                            }
                            iVar5 = (**(code **)(*param_1 + 0xc))
                                              (param_1,param_3 + 0x338,0x10,&iStack_10);
                            if (-1 < iVar5) {
                              local_8[0] = local_8[0] - iStack_10;
                              if (local_8[0] == 0) {
                                return iVar5;
                              }
                              iVar5 = (**(code **)(*param_1 + 0xc))
                                                (param_1,param_3 + 0x328,0x10,&iStack_10);
                              if (-1 < iVar5) {
                                local_8[0] = local_8[0] - iStack_10;
                                if (local_8[0] == 0) {
                                  return iVar5;
                                }
                                iVar5 = (**(code **)(*param_1 + 0xc))
                                                  (param_1,param_3 + 0x348,4,&iStack_10);
                                if (-1 < iVar5) {
                                  local_8[0] = local_8[0] - iStack_10;
                                  if (local_8[0] == 0) {
                                    return iVar5;
                                  }
                                  iVar5 = (**(code **)(*param_1 + 0xc))
                                                    (param_1,param_3 + 0x34c,4,&iStack_10);
                                  if (-1 < iVar5) {
                                    local_8[0] = local_8[0] - iStack_10;
                                    if (local_8[0] == 0) {
                                      return iVar5;
                                    }
                                    iVar5 = (**(code **)(*param_1 + 0xc))
                                                      (param_1,param_3 + 0x350,4,&iStack_10);
                                    if (-1 < iVar5) {
                                      local_8[0] = local_8[0] - iStack_10;
                                      if (local_8[0] == 0) {
                                        return iVar5;
                                      }
                                      if ((int)unaff_EDI < 0) {
                                        return iVar5;
                                      }
                                      *(undefined4 *)(param_3 + 0x354) = 1;
                                      iVar5 = (**(code **)(*param_1 + 0xc))
                                                        (param_1,(int *)(param_3 + 0x358),4,
                                                         &iStack_10);
                                      if (-1 < iVar5) {
                                        local_8[0] = local_8[0] - iStack_10;
                                        if (0 < *(int *)(param_3 + 0x358)) {
                                          *(undefined4 *)(param_3 + 0x354) = 0;
                                        }
                                        if (local_8[0] == 0) {
                                          return iVar5;
                                        }
                                        iVar5 = (**(code **)(*param_1 + 0xc))
                                                          (param_1,&stack0xffffffd4,8,&iStack_10);
                                        if (-1 < iVar5) {
                                          local_8[0] = local_8[0] - iStack_10;
                                          if (local_8[0] == 0) {
                                            return iVar5;
                                          }
                                          ppIVar3 = (LPSTREAM *)(param_3 + 0x35c);
                                          *ppIVar3 = (LPSTREAM)0x0;
                                          if (unaff_EBP != 0 || unaff_EBX != 0) {
                                            iVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,ppIVar3);
                                            if ((iVar5 < 0) ||
                                               (iVar5 = (**(code **)(*param_1 + 0x1c))
                                                                  (param_1,*ppIVar3,unaff_EBP,
                                                                   unaff_EBX,0,local_24), iVar5 < 0)
                                               ) goto LAB_005e924c;
                                            local_8[0] = local_8[0] - local_24[0];
                                          }
                                          if (*ppIVar3 != (LPSTREAM)0x0) {
                                            *(undefined4 *)(param_3 + 0x354) = 0;
                                          }
                                          if (local_8[0] == 0) {
                                            return iVar5;
                                          }
                                          if (iStack_c == 0) {
                                            return iVar5;
                                          }
                                          iVar5 = (**(code **)(*param_1 + 0xc))
                                                            (param_1,&stack0xffffffd4,8,&iStack_10);
                                          if (-1 < iVar5) {
                                            local_8[0] = local_8[0] - iStack_10;
                                            if (local_8[0] == 0) {
                                              return iVar5;
                                            }
                                            ppIVar3 = (LPSTREAM *)(param_3 + 0x360);
                                            *ppIVar3 = (LPSTREAM)0x0;
                                            if (unaff_EBP == 0 && unaff_EBX == 0) {
                                              return iVar5;
                                            }
                                            iVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,ppIVar3);
                                            if ((-1 < iVar5) &&
                                               (iVar5 = (**(code **)(*param_1 + 0x1c))
                                                                  (param_1,*ppIVar3,unaff_EBP,
                                                                   unaff_EBX,0,local_24), -1 < iVar5
                                               )) {
                                              return iVar5;
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
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x14))(param_1,local_24[2],uStack_18,0,0);
      iVar5 = -0x7ffb1fe4;
    }
  }
LAB_005e924c:
  piVar4 = *(int **)(param_3 + 0x35c);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(param_3 + 0x360);
  *(undefined4 *)(param_3 + 0x35c) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined4 *)(param_3 + 0x360) = 0;
  return iVar5;
}


