/* Module: vegas30k.dll
   Function: Mixer_LoadMixerCfg
   Address: 0117a450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_LoadMixerCfg(void *,unsigned long,int) */

long Mixer_LoadMixerCfg(void *param_1,ulong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  LPCWSTR pWVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  bool bVar14;
  int *piVar15;
  int *piVar16;
  LPCWSTR pWVar17;
  int *piVar18;
  ISFMixerIn *pIVar19;
  int *piVar20;
  int iStack_130;
  ISFMixerIn *pIStack_128;
  undefined *puStack_124;
  undefined1 *puStack_120;
  int *piStack_11c;
  ISFGraphBuilder *pIStack_118;
  undefined *puStack_114;
  int iStack_110;
  ISFMixerIn *pIStack_f4;
  ISFGraphBuilder local_e4 [20];
  undefined4 local_d0 [14];
  int aiStack_98 [12];
  undefined4 local_68 [15];
  void *pvStack_2c;
  ulong uStack_28;
  int iStack_24;
  
  puVar9 = local_68;
                    /* 0x17a450  206  ?Mixer_LoadMixerCfg@@YGJPAXKH@Z */
  for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  puVar9 = local_d0;
  for (iVar7 = 0x1a; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if ((*(uint *)param_1 == 0) || (param_2 < *(uint *)param_1)) {
    lVar4 = 1;
  }
  else {
    lVar4 = Mixer_Unprepare();
    if (-1 < lVar4) {
      iStack_110 = 0x104;
      pIStack_118 = local_e4;
      puStack_114 = &DAT_012afeb4;
      piStack_11c = DAT_012b09c8;
      puStack_120 = (undefined1 *)0x117a4c8;
      (**(code **)(*DAT_012b09c8 + 0x2c))();
      piVar3 = DAT_012b09c4;
      puStack_120 = &stack0xfffffef4;
      puStack_124 = &DAT_012afeb4;
      pIStack_128 = pIStack_f4;
      (**(code **)(*DAT_012b09c4 + 0x4c))();
      iStack_130 = 0x1a;
      piVar20 = (int *)0x1;
      (**(code **)(*piStack_11c + 0x1c))(piStack_11c,1,&DAT_012afe4c);
      iVar7 = 4;
      bVar14 = true;
      piVar11 = &DAT_011ea540;
      piVar12 = param_1;
      do {
        piVar12 = piVar12 + 1;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar14 = *piVar11 == *piVar12;
        piVar11 = piVar11 + 1;
      } while (bVar14);
      lVar4 = 1;
      if (bVar14) {
        iVar7 = 4;
        bVar14 = true;
        piVar12 = &DAT_011ea570;
        piVar11 = (int *)((int)param_1 + 0x14);
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar14 = *piVar12 == *piVar11;
          piVar12 = piVar12 + 1;
          piVar11 = piVar11 + 1;
        } while (bVar14);
        if (bVar14) {
          iVar7 = *(int *)((int)param_1 + 0x34);
          iVar1 = *(int *)((int)param_1 + 0x38);
          puVar9 = (undefined4 *)((int)param_1 + 0x3c);
          if (iVar1 != 0) {
            puVar5 = &DAT_012afc4c;
            iVar8 = iVar1;
            do {
              uVar2 = *puVar9;
              puVar9 = puVar9 + 1;
              *puVar5 = uVar2;
              puVar5 = puVar5 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          puStack_124 = (undefined *)*puVar9;
          pWVar10 = (LPCWSTR)(puVar9 + 1);
          iStack_110 = iVar7;
          if ((pWVar10 == (LPCWSTR)0x0) || (*pWVar10 != L'\0')) {
            WideCharToMultiByte(0,0,pWVar10,-1,&DAT_012afeb4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else {
            DAT_012afeb4 = 0;
          }
          DAT_012affb7 = 0;
          iVar8 = lstrlenA(&DAT_012afeb4);
          pWVar10 = pWVar10 + iVar8 + 1;
          if (puStack_114 == (undefined *)0x0) {
            puStack_124 = (undefined *)0x0;
          }
          else {
            iVar8 = (**(code **)(*piVar3 + 0x30))(piVar3,&puStack_124,0,&DAT_012afeb4);
            if (iVar8 == -0x7ffb1ff6) {
              (**(code **)(*piVar3 + 0x24))(piVar3,&puStack_124);
            }
          }
          piStack_11c = (int *)0x0;
          if (0 < iVar7) {
            do {
              Mixer_GetMainBus(&pIStack_128,(ulong)piStack_11c,(ISFMixer *)0x0);
              piVar12 = piVar20;
              if (pIStack_128 != (ISFMixerIn *)0x0) {
                pIVar19 = pIStack_128;
                pWVar17 = pWVar10;
                (**(code **)(*(int *)pIStack_128 + 0x58))();
                piVar11 = *(int **)(pWVar10 + 8);
                iVar7 = iStack_130;
                (**(code **)(iRam0000001a + 0x84))();
                piVar15 = *(int **)(pWVar10 + 10);
                piVar12 = piVar20;
                (**(code **)(*piVar20 + 0x50))();
                piVar18 = *(int **)(pWVar10 + 0xc);
                (**(code **)(*(int *)pWVar17 + 0x44))();
                pWVar10 = pWVar10 + 0xe;
                if ((pWVar10 == (LPCWSTR)0x0) || (*pWVar10 != L'\0')) {
                  WideCharToMultiByte(0,0,pWVar10,-1,&DAT_012afb48,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                }
                else {
                  DAT_012afb48 = 0;
                }
                DAT_012afc4b = 0;
                (**(code **)(*piVar11 + 0x10))(piVar11,&DAT_012afb48);
                iVar8 = lstrlenA(&DAT_012afb48);
                pWVar10 = pWVar10 + iVar8 + 1;
                if ((pWVar10 == (LPCWSTR)0x0) || (*pWVar10 != L'\0')) {
                  WideCharToMultiByte(0,0,pWVar10,-1,&DAT_012afeb4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                }
                else {
                  DAT_012afeb4 = 0;
                }
                DAT_012affb7 = 0;
                piVar16 = (int *)&DAT_012afeb4;
                (**(code **)(*piVar15 + 0x24))();
                iVar8 = lstrlenA(&DAT_012afeb4);
                pWVar10 = pWVar10 + iVar8 + 1;
                iVar8 = *(int *)(pWVar10 + 2);
                (**(code **)(*piVar18 + 0x94))(piVar18,*(undefined4 *)pWVar10,pWVar10 + 4,iVar8);
                pWVar10 = (LPCWSTR)((int)(pWVar10 + 4) + iVar8);
                if ((((uint)pIVar19 & 0x10000) != 0) &&
                   (puVar9 = &DAT_012afc4c + (int)pWVar17,
                   ((&DAT_012afc4c)[(int)pWVar17] & 0x80000000) == 0)) {
                  if ((pWVar10 == (LPCWSTR)0x0) || (*pWVar10 != L'\0')) {
                    WideCharToMultiByte(0,0,pWVar10,-1,&DAT_012afeb4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else {
                    DAT_012afeb4 = 0;
                  }
                  DAT_012affb7 = 0;
                  iVar8 = lstrlenA(&DAT_012afeb4);
                  pWVar10 = pWVar10 + iVar8 + 1;
                  if (piVar20 == (int *)0x0) {
                    *puVar9 = 0;
                    if (iVar7 != 0) {
                      (**(code **)(*piVar15 + 0x2c))(piVar15,0,0,&DAT_012afa44,0x104);
LAB_0117a841:
                      SfErrorHandler_DetailsAddString
                                (0,"Remapped %s device from %s to %s",&DAT_012afb48,&DAT_012afeb4,
                                 &DAT_012afa44);
                    }
                  }
                  else {
                    iVar7 = (**(code **)(*piVar15 + 0x30))(piVar15,puVar9,0,&DAT_012afeb4);
                    if (iVar7 == -0x7ffb1ff6) {
                      *puVar9 = *(undefined4 *)(&DAT_012afe4c + (int)pWVar17 * 4);
                      (**(code **)(*piVar15 + 0x2c))(piVar15,piVar11,0,&DAT_012afa44,0x104);
                      goto LAB_0117a841;
                    }
                  }
                }
                (**(code **)(*piVar16 + 8))(piVar16);
                iVar7 = *(int *)pWVar10;
                iVar8 = *(int *)(pWVar10 + 2);
                pWVar10 = pWVar10 + 4;
                *(int *)(local_e4 + iVar7 * 4 + -0x1c) = iVar8;
                if (iVar8 != 0) {
                  aiStack_98[iVar7] = (int)pWVar10;
                  pWVar10 = (LPCWSTR)((int)pWVar10 + iVar8);
                }
              }
              piStack_11c = (int *)((int)piStack_11c + 1);
              piVar20 = piVar12;
            } while ((int)piStack_11c < iStack_110);
          }
          iVar7 = iStack_110;
          uVar13 = 0;
          if (0 < iStack_110) {
            do {
              if (((*(int *)(local_e4 + uVar13 * 4 + -0x1c) != 0) && (aiStack_98[uVar13] != 0)) &&
                 (iVar8 = _SfGraph_CreateFromMem_16
                                    (&pIStack_118,aiStack_98[uVar13],
                                     *(int *)(local_e4 + uVar13 * 4 + -0x1c),1), -1 < iVar8)) {
                Mixer_SetDeviceGraph(pIStack_118,1,uVar13);
                (**(code **)(*(int *)pIStack_118 + 8))(pIStack_118);
              }
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < iVar7);
          }
          (**(code **)(*DAT_012b09c8 + 100))(DAT_012b09c8,&DAT_012afc4c,iVar1);
          lVar4 = (**(code **)(*DAT_012b09c8 + 0xa8))(DAT_012b09c8,0x1a);
        }
        else {
          lVar4 = Mixer_LoadMixerCfgPrev(pvStack_2c,uStack_28,iStack_24);
        }
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      Mixer_Prepare();
      Mixer_UpdateAll();
      if (puStack_120 == (undefined1 *)0x1) {
        _SfErrorHandler_DetailsInit_0();
        return lVar4;
      }
      lVar6 = 0x4e015;
      if (puStack_120 < (undefined1 *)0x2) {
        lVar6 = lVar4;
      }
      return lVar6;
    }
  }
  return lVar4;
}


