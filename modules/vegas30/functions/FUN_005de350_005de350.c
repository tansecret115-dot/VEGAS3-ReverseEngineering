/* Module: vegas30.exe
   Function: FUN_005de350
   Address: 005de350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005de909) */

int FUN_005de350(HANDLE param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  LPCSTR lpString1;
  LPCSTR lpString2;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  int local_26c;
  uint local_268;
  undefined8 local_260;
  uint local_258;
  int local_254;
  int local_24c;
  int local_248;
  int local_244 [4];
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  uint local_224;
  int local_220;
  DWORD local_21c;
  int local_218 [4];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  local_26c = -0x7ffb1ff8;
  iVar2 = FUN_005de1a0(param_1,&local_224,param_3 + 0x1cc);
  if (iVar2 != 0) {
    local_258 = local_224;
    local_254 = local_220;
    local_268 = local_224;
    if ((*(byte *)(param_5 + 0x1c) & 1) != 0) {
      return -0x7ffb1ff4;
    }
    uVar3 = __alldiv(0,0,local_224,local_220);
    FUN_004e7320(param_5,uVar3);
    riff64_SaveLocation(param_1,&local_234);
    local_26c = riff64_FindChunkHeader
                          (param_1,DAT_0062a510,DAT_0062a514,DAT_0062a518,DAT_0062a51c,&local_260,
                           &local_258);
    if (-1 < local_26c) {
      local_258 = local_224;
      local_254 = local_220;
      local_248 = 0;
      local_26c = FUN_005db0d0(param_1,param_2,&local_260,DAT_0062a510,DAT_0062a514,DAT_0062a518,
                               DAT_0062a51c,param_3,&local_248);
      if (-1 < local_26c) {
        if (local_248 != 0) {
          SfErrorHandler_DetailsAddString
                    (0x4e00e,
                     "This project will not be readable by older versions of Vegas if saved using this version of Vegas."
                    );
        }
        uVar6 = local_258;
        if ((*(byte *)(param_5 + 0x1c) & 1) != 0) {
          return -0x7ffb1ff4;
        }
        uVar13 = __allmul(local_258 - local_224,
                          (local_254 - local_220) - (uint)(local_258 < local_224),100,0);
        uVar3 = __alldiv(uVar13,uVar6,local_254);
        FUN_004e7320(param_5,uVar3);
        riff64_RestoreLocation(param_1,local_234,local_230);
        lVar14 = CONCAT44(local_260._4_4_,(uint)local_260);
        if (-1 < local_220) {
          iVar2 = local_220;
          if (0 < local_220) goto LAB_005de51a;
          do {
            local_260 = lVar14;
            lVar14 = local_260;
            if (local_268 < 0x18) break;
LAB_005de51a:
            do {
              local_26c = riff64_ReadChunkHeader(param_1,local_218,&local_260);
              if (local_26c < 0) {
                return local_26c;
              }
              uVar6 = local_268 - 0x18;
              iVar7 = 4;
              iVar2 = iVar2 + -1 + (uint)(0x17 < local_268);
              bVar12 = true;
              piVar10 = local_218;
              piVar11 = &DAT_0062a4d0;
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                bVar12 = *piVar10 == *piVar11;
                piVar10 = piVar10 + 1;
                piVar11 = piVar11 + 1;
              } while (bVar12);
              if (bVar12) {
                BVar4 = ReadFile(param_1,local_244,0x10,&local_21c,(LPOVERLAPPED)0x0);
                if (BVar4 == 0) {
                  return -0x7ffb1ff8;
                }
                riff64_SaveLocation(param_1,&local_22c);
                iVar7 = 4;
                iVar9 = (uint)local_260 - 0x10;
                local_24c = local_260._4_4_ - (uint)((uint)local_260 < 0x10);
                bVar12 = true;
                piVar10 = &DAT_0062a6e0;
                piVar11 = local_244;
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  bVar12 = *piVar10 == *piVar11;
                  piVar10 = piVar10 + 1;
                  piVar11 = piVar11 + 1;
                } while (bVar12);
                if (bVar12) {
                  local_26c = FUN_005db590(param_1,param_2,param_3 + 0xc40,iVar9,local_24c,param_3,4
                                           ,0xffffffff,0x7fffffff);
LAB_005de8a0:
                  if (local_26c < 0) {
                    return local_26c;
                  }
                }
                else {
                  iVar7 = 4;
                  bVar12 = true;
                  piVar10 = &DAT_0062a610;
                  piVar11 = local_244;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *piVar10 == *piVar11;
                    piVar10 = piVar10 + 1;
                    piVar11 = piVar11 + 1;
                  } while (bVar12);
                  if (bVar12) {
                    local_26c = FUN_005dd7e0(param_1,param_2,param_3 + 0x1bc,iVar9,local_24c);
                    goto LAB_005de8a0;
                  }
                  iVar7 = 4;
                  bVar12 = true;
                  piVar10 = &DAT_0062a5c0;
                  piVar11 = local_244;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *piVar10 == *piVar11;
                    piVar10 = piVar10 + 1;
                    piVar11 = piVar11 + 1;
                  } while (bVar12);
                  if (bVar12) {
                    uVar3 = FUN_005b8970(param_3);
LAB_005de69a:
                    local_26c = FUN_005dd8d0(param_1,param_2,param_3,iVar9,local_24c,uVar3);
                    goto LAB_005de8a0;
                  }
                  iVar7 = 4;
                  bVar12 = true;
                  piVar10 = &DAT_0062a5d0;
                  piVar11 = local_244;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *piVar10 == *piVar11;
                    piVar10 = piVar10 + 1;
                    piVar11 = piVar11 + 1;
                  } while (bVar12);
                  if (bVar12) {
                    uVar3 = FUN_005b8980(param_3);
                    goto LAB_005de69a;
                  }
                  iVar7 = 4;
                  bVar12 = true;
                  piVar10 = &DAT_0062a5e0;
                  piVar11 = local_244;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *piVar10 == *piVar11;
                    piVar10 = piVar10 + 1;
                    piVar11 = piVar11 + 1;
                  } while (bVar12);
                  if (bVar12) {
                    uVar3 = FUN_005b8990(param_3);
                    goto LAB_005de69a;
                  }
                  iVar7 = 4;
                  bVar12 = true;
                  piVar10 = &DAT_0062a5f0;
                  piVar11 = local_244;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *piVar10 == *piVar11;
                    piVar10 = piVar10 + 1;
                    piVar11 = piVar11 + 1;
                  } while (bVar12);
                  if (bVar12) {
                    uVar3 = FUN_005b89b0(param_3);
                    goto LAB_005de69a;
                  }
                  iVar7 = 4;
                  bVar12 = true;
                  piVar10 = &DAT_0062a630;
                  piVar11 = local_244;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *piVar10 == *piVar11;
                    piVar10 = piVar10 + 1;
                    piVar11 = piVar11 + 1;
                  } while (bVar12);
                  if (bVar12) {
                    local_26c = FUN_005e5a60(param_1,param_5,param_2,param_3,iVar9,local_24c);
                    goto LAB_005de8a0;
                  }
                  iVar7 = 4;
                  bVar12 = true;
                  piVar10 = &DAT_0062a520;
                  piVar11 = local_244;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *piVar10 == *piVar11;
                    piVar10 = piVar10 + 1;
                    piVar11 = piVar11 + 1;
                  } while (bVar12);
                  if (!bVar12) {
                    iVar7 = 4;
                    bVar12 = true;
                    piVar10 = &DAT_0062a7d0;
                    piVar11 = local_244;
                    do {
                      if (iVar7 == 0) break;
                      iVar7 = iVar7 + -1;
                      bVar12 = *piVar10 == *piVar11;
                      piVar10 = piVar10 + 1;
                      piVar11 = piVar11 + 1;
                    } while (bVar12);
                    if (bVar12) {
                      local_26c = FUN_005dcb60(param_1,param_2,param_3,iVar9,local_24c);
                    }
                    else {
                      iVar7 = 4;
                      bVar12 = true;
                      piVar10 = &DAT_0062a540;
                      piVar11 = local_244;
                      do {
                        if (iVar7 == 0) break;
                        iVar7 = iVar7 + -1;
                        bVar12 = *piVar10 == *piVar11;
                        piVar10 = piVar10 + 1;
                        piVar11 = piVar11 + 1;
                      } while (bVar12);
                      if (bVar12) {
                        local_26c = FUN_005dd6d0(param_1,param_2,param_3,iVar9,local_24c,param_6);
                      }
                      else {
                        iVar7 = 4;
                        bVar12 = true;
                        piVar10 = &DAT_0062a7f0;
                        piVar11 = local_244;
                        do {
                          if (iVar7 == 0) break;
                          iVar7 = iVar7 + -1;
                          bVar12 = *piVar10 == *piVar11;
                          piVar10 = piVar10 + 1;
                          piVar11 = piVar11 + 1;
                        } while (bVar12);
                        if (bVar12) {
                          local_26c = FUN_005dd9a0(param_1,param_2,param_3,iVar9,local_24c);
                        }
                      }
                    }
                    goto LAB_005de8a0;
                  }
                  local_104[0] = 0;
                  local_208[0] = 0;
                  lpString2 = (LPCSTR)(param_3 + 0xb8);
                  lpString1 = (LPCSTR)(param_5 + 0x30);
                  iVar7 = lstrcmpiA(lpString1,lpString2);
                  if (iVar7 != 0) {
                    _SfGetBasePathRelative_16(lpString2,lpString1,local_208,0x104);
                    _SfGetBasePathRelative_16(lpString1,lpString2,local_104,0x104);
                  }
                  uVar1 = local_258;
                  iVar7 = (local_258 - uVar6) * 100;
                  iVar7 = __alldiv(iVar7,iVar7 >> 0x1f,local_258,local_254);
                  iVar5 = ((iVar9 - uVar6) + uVar1) * 100;
                  iVar5 = __alldiv(iVar5,iVar5 >> 0x1f,uVar1,local_254);
                  local_26c = FUN_005dda70(param_1,param_3 + 0x1e4,param_2,iVar9,local_24c,param_5,
                                           iVar7,iVar5 + iVar7,param_5 + 0x30,local_104,local_208);
                  if (local_26c != 0x4e002) goto LAB_005de8a0;
                  local_26c = 0;
                  *(undefined4 *)(param_5 + 0x13c) = 1;
                }
                riff64_RestoreLocation(param_1,local_22c,local_228);
                SetFilePointer(param_1,-0x10,(PLONG)0x0,1);
                lVar14 = riff64_SkipChunk(param_1,local_260);
              }
              else {
                lVar14 = riff64_SkipChunk(param_1,local_260);
              }
              iVar7 = local_254;
              uVar1 = local_258;
              if (CONCAT44(iVar2,uVar6) < lVar14) {
                bVar12 = uVar6 < (uVar6 & 7);
                uVar8 = uVar6 - (uVar6 & 7);
                uVar6 = uVar8 + 8;
                iVar2 = (iVar2 - (uint)bVar12) + (uint)(0xfffffff7 < uVar8);
                if (lVar14 != CONCAT44(iVar2,uVar6)) {
                  return -0x7fffbffb;
                }
              }
              local_268 = uVar6 - (uint)lVar14;
              iVar2 = (iVar2 - (int)((ulonglong)lVar14 >> 0x20)) - (uint)(uVar6 < (uint)lVar14);
              if ((*(byte *)(param_5 + 0x1c) & 1) != 0) {
                return -0x7ffb1ff4;
              }
              local_260 = lVar14;
              uVar13 = __allmul(local_258 - local_268,
                                (local_254 - iVar2) - (uint)(local_258 < local_268),100,0);
              uVar3 = __alldiv(uVar13,uVar1,iVar7);
              FUN_004e7320(param_5,uVar3);
            } while (0 < iVar2);
            lVar14 = local_260;
          } while (-1 < iVar2);
        }
        if (-1 < local_26c) {
          local_260 = lVar14;
          riff64_RestoreLocation(param_1,local_234,local_230);
          FUN_004e7320(param_5,100);
        }
      }
    }
  }
  return local_26c;
}


