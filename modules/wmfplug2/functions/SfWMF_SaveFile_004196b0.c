/* Module: wmfplug2.dll
   Function: SfWMF_SaveFile
   Address: 004196b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00419bb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfWMF_SaveFile(struct HWND__ *,char const *,struct SFASF3_PARAMS *) */

long SfWMF_SaveFile(HWND__ *param_1,char *param_2,SFASF3_PARAMS *param_3)

{
  bool bVar1;
  longlong lVar2;
  SFASF3_PARAMS *pSVar3;
  int iVar4;
  long lVar5;
  HGLOBAL pvVar6;
  int *piVar7;
  short *psVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  HANDLE hObject;
  int *piVar13;
  HANDLE hHandle;
  DWORD DVar14;
  uint uVar15;
  int unaff_EBX;
  int *unaff_EBP;
  uint *puVar16;
  int *unaff_ESI;
  int **ppiVar17;
  int *unaff_EDI;
  uint uVar18;
  undefined4 *puVar19;
  WCHAR *pWVar20;
  float10 fVar21;
  undefined8 uVar22;
  longlong lVar23;
  int *piVar24;
  undefined1 *puVar25;
  int *piVar26;
  undefined1 *puVar27;
  LPCVOID pMem;
  int *piVar28;
  WCHAR *pWVar29;
  int **ppiVar30;
  int *piStack_384;
  int local_380;
  int *local_37c;
  undefined8 local_378;
  uint uStack_370;
  int local_36c;
  double dStack_368;
  undefined1 auStack_360 [8];
  undefined8 uStack_358;
  int iStack_34c;
  int iStack_344;
  int local_334;
  uint local_328 [5];
  uint local_314 [5];
  uint local_300 [5];
  int local_2ec [12];
  undefined1 local_2bc [4];
  int local_2b8 [38];
  undefined1 auStack_220 [8];
  WCHAR aWStack_218 [254];
  int iStack_1c;
  undefined2 uStack_12;
  SFASF3_PARAMS *pSStack_c;
  LPCSTR pCStack_8;
  
                    /* 0x196b0  38  ?SfWMF_SaveFile@@YGJPAUHWND__@@PBDPAUSFASF3_PARAMS@@@Z */
  local_36c = 0;
  dStack_368 = (double)(ulonglong)dStack_368._0_4_;
  iVar4 = FUN_0041a470();
  if (iVar4 < 0) {
    return iVar4;
  }
  if ((param_3[0x124] != (SFASF3_PARAMS)0x0) &&
     (lVar5 = SfWMF_ProcessScriptFile((char *)(param_3 + 0x124),param_3), lVar5 < 0)) {
    return lVar5;
  }
  if (local_334 == 0) {
    iVar4 = FUN_00414290((int)local_300,(int *)0x0,0,0,(undefined4 *)0xffffffff,(int)&local_36c);
  }
  else {
    local_378._0_4_ = 0;
    local_380 = 0;
    piVar13 = local_2b8;
    puVar16 = local_314;
    do {
      if (puVar16[-5] != 0) {
        uVar18 = *puVar16;
        piVar28 = local_2ec;
        piVar7 = piVar13 + -1;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar28;
          piVar28 = piVar28 + 1;
          piVar7 = piVar7 + 1;
        }
        if (uVar18 < local_300[0]) {
          return -0x7ff8ffa9;
        }
        local_378._0_4_ = (int)local_378 + 1;
        *piVar13 = uVar18 - local_300[0];
        piVar13 = piVar13 + 9;
      }
      puVar16 = puVar16 + 1;
      local_380 = local_380 + 1;
    } while (local_380 < 5);
    iVar4 = FUN_00414290((int)local_300,(int *)0x0,(ushort)(int)local_378,(int)local_2bc,
                         (undefined4 *)0xffffffff,(int)&local_36c);
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  ppiVar30 = &local_37c;
  iVar4 = WMCreateWriter();
  if (iVar4 < 0) {
    if (local_378._4_4_ == (int *)0x0) {
      return iVar4;
    }
    (**(code **)(*local_378._4_4_ + 8))();
    return iVar4;
  }
  piVar13 = local_378._4_4_;
  iVar4 = (**(code **)(*piStack_384 + 0x10))();
  if (iVar4 < 0) {
    if (local_37c == (int *)0x0) {
      return iVar4;
    }
    (**(code **)(*local_37c + 8))(local_37c);
    return iVar4;
  }
  if (local_37c != (int *)0x0) {
    (**(code **)(*local_37c + 8))(local_37c);
  }
  local_37c = (int *)0x0;
  MultiByteToWideChar(0,1,pCStack_8,-1,aWStack_218,0x104);
  pWVar20 = aWStack_218;
  uStack_12 = 0;
  piVar28 = unaff_EBP;
  iVar4 = (**(code **)(*unaff_EBP + 0x14))();
  if (iVar4 < 0) {
    if (unaff_EDI == (int *)0x0) {
      return iVar4;
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    return iVar4;
  }
  FUN_0042c080((int *)&local_37c,4,-1,-1,0x80000000);
  if (local_37c == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar4 = FUN_0041a480(unaff_EDI);
  if (iVar4 < 0) {
    if (unaff_EDI == (int *)0x0) {
      return iVar4;
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    return iVar4;
  }
  pvVar6 = GlobalAlloc(0x42,0x80);
  piVar7 = GlobalLock(pvVar6);
  if (piVar7 == (int *)0x0) {
    iVar4 = -0x7ff8fff2;
    goto LAB_0041a0da;
  }
  unaff_EBX = 0;
  iVar4 = (**(code **)(**(int **)(param_3 + 0x10) + 0x18))();
  if (iVar4 != 0) {
    iVar4 = FUN_00419680(0,local_37c);
    pSVar3 = pSStack_c;
    piVar7[4] = iVar4;
    if (iVar4 == -1) {
      iVar4 = -0x7fffbffb;
      goto LAB_0041a0da;
    }
    piVar7[5] = 1;
    piVar7[6] = *(int *)(pSStack_c + 0x10);
    uVar22 = (**(code **)(**(int **)(pSStack_c + 0x10) + 0x3c))();
    *(undefined8 *)(piVar7 + 0xc) = uVar22;
    psVar8 = (short *)(**(code **)(**(int **)(pSVar3 + 0x10) + 0x38))();
    if (psVar8 != (short *)0x0) {
      if ((*psVar8 == 3) || (*psVar8 == 1)) {
        uVar18 = 0x10;
      }
      else {
        uVar18 = (ushort)psVar8[8] + 0x12;
      }
      pvVar6 = GlobalAlloc(0x42,uVar18);
      puVar9 = GlobalLock(pvVar6);
      if (puVar9 == (undefined4 *)0x0) {
        iVar4 = -0x7ff8fff2;
        goto LAB_0041a0da;
      }
      puVar19 = puVar9;
      for (uVar15 = uVar18 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar19 = *(undefined4 *)psVar8;
        psVar8 = psVar8 + 2;
        puVar19 = puVar19 + 1;
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(char *)puVar19 = (char)*psVar8;
        psVar8 = (short *)((int)psVar8 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      iVar4 = puVar9[1];
      piVar7[0xe] = iVar4;
      piVar7[0xf] = (uint)*(ushort *)(puVar9 + 3) * iVar4;
      piVar7[7] = (int)puVar9;
    }
    unaff_EBX = 1;
    param_3 = pSStack_c;
  }
  iVar4 = (**(code **)(**(int **)(param_3 + 0x10) + 0x14))();
  if (iVar4 != 0) {
    iVar4 = FUN_00419680(1,local_37c);
    piVar7[unaff_EBX * 0x10 + 4] = iVar4;
    if (iVar4 == -1) {
      iVar4 = -0x7fffbffb;
      goto LAB_0041a0da;
    }
    piVar7[unaff_EBX * 0x10 + 5] = 0;
    piVar7[unaff_EBX * 0x10 + 6] = *(int *)(param_3 + 0x10);
    uVar22 = (**(code **)(**(int **)(param_3 + 0x10) + 0x28))();
    *(undefined8 *)(piVar7 + unaff_EBX * 0x10 + 0xc) = uVar22;
    piVar7[unaff_EBX * 0x10 + 0xe] = 1;
    iVar4 = (**(code **)(**(int **)(param_3 + 0x10) + 0x20))(&stack0xfffffc68);
    if (iVar4 < 0) goto LAB_0041a0da;
    if (ppiVar30[4] == (int *)0x3) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = (int)ppiVar30[8] << 2;
    }
    uVar18 = (int)*ppiVar30 + iVar4;
    pvVar6 = GlobalAlloc(0x42,uVar18);
    piVar10 = GlobalLock(pvVar6);
    if (piVar10 == (int *)0x0) {
      iVar4 = -0x7ff8fff2;
      goto LAB_0041a0da;
    }
    ppiVar17 = ppiVar30;
    piVar26 = piVar10;
    for (uVar15 = uVar18 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *piVar26 = (int)*ppiVar17;
      ppiVar17 = ppiVar17 + 1;
      piVar26 = piVar26 + 1;
    }
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)piVar26 = *(undefined1 *)ppiVar17;
      ppiVar17 = (int **)((int)ppiVar17 + 1);
      piVar26 = (int *)((int)piVar26 + 1);
    }
    piVar7[unaff_EBX * 0x10 + 0xf] = piVar10[5];
    piVar7[unaff_EBX * 0x10 + 7] = (int)piVar10;
    fVar21 = (float10)(**(code **)(**(int **)(pSStack_c + 0x10) + 0x2c))();
    *(double *)(piVar7 + unaff_EBX * 0x10 + 8) = (double)fVar21;
    unaff_EBX = unaff_EBX + 1;
    param_3 = pSStack_c;
  }
  if (((*(int *)(param_3 + 0x274) == 0) || (*(int *)(param_3 + 0x27c) < 1)) &&
     (iVar4 = (**(code **)*unaff_EDI)(unaff_EDI,&DAT_0047b600,&stack0xfffffc68), -1 < iVar4)) {
    FUN_0041a180((int)param_3,(int *)ppiVar30);
    (*(code *)(*ppiVar30)[2])(ppiVar30);
  }
  iVar4 = (**(code **)(*unaff_EDI + 0x2c))(unaff_EDI);
  if (-1 < iVar4) {
    lVar2 = 0;
    uStack_370 = 0;
    local_36c = 0;
    local_378._0_4_ = 0;
    local_378._4_4_ = (int *)0x0;
    lVar23 = 0;
    if (unaff_EBX != 0) {
      piVar10 = piVar7 + 0xc;
      iVar11 = unaff_EBX;
      do {
        if (piVar10[-7] == 0) {
LAB_00419b99:
          lVar23 = ftol();
        }
        else {
          if (*(uint *)(piVar10[-5] + 4) != 0) {
            dStack_368 = (double)(ulonglong)*(uint *)(piVar10[-5] + 4);
            goto LAB_00419b99;
          }
          lVar23 = 0;
        }
        if (lVar2 < lVar23) {
          lVar2 = lVar23;
        }
        piVar10 = piVar10 + 0x10;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      ppiVar30 = (int **)0x0;
      lVar23 = lVar2;
    }
    uStack_358 = CONCAT44(uStack_358._4_4_,(uint)uStack_358);
    if ((iStack_34c != 0) &&
       (uStack_358 = CONCAT44(uStack_358._4_4_,(uint)uStack_358), iStack_344 != 0)) {
      local_378 = lVar23;
      uStack_358 = ftol();
      lVar23 = uStack_358 + lVar23;
    }
    dStack_368 = _DAT_0047cd78 / (double)lVar23;
    if (*(int **)(pSStack_c + 0x14) != (int *)0x0) {
      iVar11 = **(int **)(pSStack_c + 0x14);
      local_378 = lVar23;
      uVar12 = ftol();
      (**(code **)(iVar11 + 4))("Windows Media Format..",uVar12);
      lVar23 = local_378;
    }
    bVar1 = true;
    do {
      if (iVar4 < 0) goto LAB_00419ee7;
      local_378 = lVar23;
      piVar10 = FUN_0041ac80(piVar7,unaff_EBX);
      if (piVar10 == (int *)0x0) {
        bVar1 = false;
      }
      else {
        iVar4 = piVar10[3];
        if ((local_36c <= iVar4) && ((local_36c < iVar4 || (uStack_370 < (uint)piVar10[2])))) {
          uStack_370 = piVar10[2];
          local_36c = iVar4;
        }
        if (piVar10[5] == 0) {
          (**(code **)(*unaff_EDI + 0x34))(unaff_EDI,piVar10[0xf],&stack0xfffffc64);
          puVar27 = &stack0xfffffc64;
          pWVar29 = pWVar20;
          (**(code **)(*(int *)pWVar20 + 0x1c))(pWVar20,&stack0xfffffc5c);
          piVar26 = (int *)0x0;
          puVar25 = &stack0xfffffc70;
          iVar4 = (**(code **)(*(int *)piVar10[6] + 0x24))(piVar10[10],piVar10[0xb],puVar25,0);
          if (iVar4 == 0) {
            uVar18 = piVar10[10];
            piVar10[10] = uVar18 + 1;
            piVar10[0xb] = piVar10[0xb] + (uint)(0xfffffffe < uVar18);
            piVar24 = piStack_384;
            for (uVar18 = (uint)puVar27 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(int *)pWVar20 = *piVar24;
              piVar24 = piVar24 + 1;
              pWVar20 = pWVar20 + 2;
            }
            for (uVar18 = (uint)puVar27 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(char *)pWVar20 = (char)*piVar24;
              piVar24 = (int *)((int)piVar24 + 1);
              pWVar20 = (WCHAR *)((int)pWVar20 + 1);
            }
            (**(code **)(*piVar26 + 0x10))(piVar26,puVar27);
            piVar24 = (int *)0x0;
            iVar4 = (**(code **)(*piVar26 + 0x38))
                              (piVar26,piVar10[4],piVar10[2],piVar10[3],0,puVar25);
            uVar22 = ftol();
            *(undefined8 *)(piVar10 + 2) = uVar22;
            (**(code **)(*piVar24 + 8))(piVar24);
            pWVar20 = pWVar29;
          }
          else {
            *piVar10 = 1;
            if (iVar4 == 1) {
              iVar4 = 0;
            }
            (**(code **)(*piVar26 + 8))(piVar26);
            pWVar20 = pWVar29;
          }
        }
        else {
          puVar27 = &stack0xfffffc64;
          (**(code **)(*unaff_EDI + 0x34))(unaff_EDI,piVar10[0xf],puVar27);
          puVar25 = &stack0xfffffc64;
          (**(code **)(*(int *)pWVar20 + 0x1c))(pWVar20,&stack0xfffffc5c);
          uVar18 = (uint)pWVar20 / (uint)*(ushort *)(piVar10[7] + 0xc);
          piVar26 = (int *)0x0;
          iVar4 = (**(code **)(*(int *)piVar10[6] + 0x44))
                            (piVar10[10],piVar10[0xb],uVar18,puVar27,0,&stack0xfffffc5c);
          if ((iVar4 == 0) && (0 < (int)puVar25)) {
            uVar15 = piVar10[10];
            piVar10[10] = (int)(puVar25 + uVar15);
            piVar10[0xb] = piVar10[0xb] + ((int)puVar25 >> 0x1f) +
                           (uint)CARRY4(uVar15,(uint)puVar25);
            (**(code **)(*piVar26 + 0x10))
                      (piVar26,(uint)*(ushort *)(piVar10[7] + 0xc) * (int)puVar25);
            piVar24 = (int *)0x0;
            iVar4 = (**(code **)(*piVar26 + 0x38))
                              (piVar26,piVar10[4],piVar10[2],piVar10[3],0,uVar18);
            if (*(int *)(piVar10[7] + 4) == 0) {
              piVar10[2] = 0;
              piVar10[3] = 0;
              (**(code **)(*piVar24 + 8))(piVar24);
            }
            else {
              piVar28 = (int *)0x0;
              uVar22 = ftol();
              *(undefined8 *)(piVar10 + 2) = uVar22;
              (**(code **)(*piVar24 + 8))(piVar24);
            }
          }
          else {
            *piVar10 = 1;
            if (iVar4 == 1) {
              iVar4 = 0;
            }
            (**(code **)(*piVar26 + 8))(piVar26);
          }
        }
      }
      lVar23 = local_378;
      if (*(int **)(pSStack_c + 0x14) != (int *)0x0) {
        iVar4 = **(int **)(pSStack_c + 0x14);
        uVar12 = ftol();
        iVar4 = (**(code **)(iVar4 + 8))(uVar12);
        lVar23 = local_378;
        if (iVar4 < 0) {
          iVar4 = -0x7ffb1ff4;
        }
      }
    } while (bVar1);
    if (iVar4 < 0) {
LAB_00419ee7:
      local_378 = lVar23;
      (**(code **)(*unaff_EDI + 0x30))(unaff_EDI);
    }
    else {
      local_378 = lVar23;
      iVar4 = (**(code **)(*unaff_EDI + 0x30))(unaff_EDI);
    }
    if (-1 < iVar4) {
      if ((*(int *)(pSStack_c + 0x274) != 0) && (0 < *(int *)(pSStack_c + 0x27c))) {
        iVar4 = WMCreateEditor(&stack0xfffffc70);
        if (-1 < iVar4) {
          iVar4 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,auStack_220);
          if (-1 < iVar4) {
            iVar4 = (*(code *)**ppiVar30)(ppiVar30,&DAT_0047b600,&stack0xfffffc6c);
            if (-1 < iVar4) {
              iVar4 = FUN_0041a180((int)pSStack_c,piVar13);
              (**(code **)(*piVar13 + 8))(piVar13);
            }
            (**(code **)(*piStack_384 + 0x14))(piStack_384);
          }
          (*(code *)(*ppiVar30)[2])(ppiVar30);
        }
      }
      if ((iStack_34c != 0) && (iStack_344 != 0)) {
        iVar4 = WMCreateIndexer(&stack0xfffffc74);
        if (-1 < iVar4) {
          hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
          pvVar6 = GlobalAlloc(0x40,0x28);
          piVar13 = GlobalLock(pvVar6);
          if (piVar13 != (int *)0x0) {
            piVar13[2] = 1;
            *piVar13 = (int)&PTR_LAB_0047c5b8;
            hHandle = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
            piVar13[1] = 0;
            piVar13[3] = (int)hHandle;
            piVar13[4] = (int)auStack_360;
            uVar22 = __alldiv((uint)uStack_358,uStack_358._4_4_,100,0);
            *(undefined8 *)(piVar13 + 6) = uVar22;
            piVar13[8] = uStack_370;
            piVar13[9] = local_36c;
            iVar4 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,auStack_220,piVar13,&stack0xfffffc64);
            if (-1 < iVar4) {
              DVar14 = WaitForSingleObject(piVar28,0);
              while (DVar14 != 0) {
                WaitForSingleObject(hHandle,0xffffffff);
                ResetEvent(hHandle);
                if (*(int **)(iStack_1c + 0x14) != (int *)0x0) {
                  iVar4 = **(int **)(iStack_1c + 0x14);
                  uVar12 = ftol();
                  iVar4 = (**(code **)(iVar4 + 8))(uVar12);
                  if (iVar4 < 0) {
                    piVar13[1] = 1;
                    break;
                  }
                }
                DVar14 = WaitForSingleObject(piVar28,0);
              }
              WaitForSingleObject(piVar28,0xffffffff);
            }
            (**(code **)(*piVar13 + 8))(piVar13);
          }
          CloseHandle(hObject);
          if (unaff_EBP != (int *)0x0) {
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          }
        }
      }
    }
  }
LAB_0041a0da:
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  if (local_37c != (int *)0x0) {
    FUN_0042bfb0(local_37c);
  }
  if (piVar7 != (int *)0x0) {
    if (0 < unaff_EBX) {
      piVar13 = piVar7 + 7;
      do {
        if (piVar13[-2] == 0) {
          pvVar6 = GlobalHandle((LPCVOID)*piVar13);
          GlobalUnlock(pvVar6);
          pMem = (LPCVOID)*piVar13;
        }
        else {
          pvVar6 = GlobalHandle((LPCVOID)*piVar13);
          GlobalUnlock(pvVar6);
          pMem = (LPCVOID)*piVar13;
        }
        pvVar6 = GlobalHandle(pMem);
        GlobalFree(pvVar6);
        piVar13 = piVar13 + 0x10;
        unaff_EBX = unaff_EBX + -1;
      } while (unaff_EBX != 0);
    }
    pvVar6 = GlobalHandle(piVar7);
    GlobalUnlock(pvVar6);
    pvVar6 = GlobalHandle(piVar7);
    GlobalFree(pvVar6);
  }
  return iVar4;
}


