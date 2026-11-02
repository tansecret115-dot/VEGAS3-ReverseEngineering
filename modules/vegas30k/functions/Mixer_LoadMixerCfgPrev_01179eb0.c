/* Module: vegas30k.dll
   Function: Mixer_LoadMixerCfgPrev
   Address: 01179eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_LoadMixerCfgPrev(void *,unsigned long,int) */

long Mixer_LoadMixerCfgPrev(void *param_1,ulong param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  LPCWSTR pWVar9;
  ulong uVar10;
  bool bVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  LPCWSTR pWVar15;
  int *piVar16;
  undefined **ppuVar17;
  int *piVar18;
  int *piVar19;
  ISFMixerIn *pIStack_138;
  undefined4 uStack_134;
  undefined *puStack_130;
  ulong uStack_12c;
  int *piStack_128;
  ISFGraphBuilder *pIStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  ISFMixerIn *pIStack_118;
  undefined *apuStack_114 [2];
  int iStack_10c;
  ISFGraphBuilder *pIStack_f4;
  undefined1 local_e4 [4];
  undefined4 local_e0;
  undefined4 local_d0 [9];
  int aiStack_ac [17];
  undefined4 local_68 [15];
  void *pvStack_2c;
  ulong uStack_28;
  int iStack_24;
  
  puVar8 = local_68;
                    /* 0x179eb0  207  ?Mixer_LoadMixerCfgPrev@@YGJPAXKH@Z */
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_d0;
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_e0 = 0;
  if ((*(uint *)param_1 == 0) || (param_2 < *(uint *)param_1)) {
    return 1;
  }
  lVar3 = Mixer_Unprepare();
  if (lVar3 < 0) {
    return lVar3;
  }
  iStack_10c = 0x104;
  apuStack_114[0] = local_e4;
  apuStack_114[1] = &DAT_012b0628;
  pIStack_118 = DAT_012b09c8;
  puStack_11c = (undefined1 *)0x1179f28;
  (**(code **)(*(int *)DAT_012b09c8 + 0x2c))();
  puStack_11c = &stack0xfffffef8;
  puStack_120 = &DAT_012b0628;
  pIStack_124 = pIStack_f4;
  piStack_128 = DAT_012b09c4;
  uStack_12c = 0x1179f46;
  (**(code **)(*DAT_012b09c4 + 0x4c))();
  uStack_12c = 0x1a;
  puStack_130 = &DAT_012b05c0;
  uStack_134 = 1;
  pIStack_138 = pIStack_118;
  (**(code **)(*(int *)pIStack_118 + 0x1c))();
  iVar6 = 4;
  bVar11 = true;
  piVar18 = &DAT_011ea540;
  piVar16 = param_1;
  do {
    piVar16 = piVar16 + 1;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar11 = *piVar18 == *piVar16;
    piVar18 = piVar18 + 1;
  } while (bVar11);
  lVar3 = 1;
  if (!bVar11) goto LAB_0117a400;
  iVar6 = 4;
  bVar11 = true;
  piVar16 = &DAT_011ea560;
  piVar18 = (int *)((int)param_1 + 0x14);
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar11 = *piVar16 == *piVar18;
    piVar16 = piVar16 + 1;
    piVar18 = piVar18 + 1;
  } while (bVar11);
  if (!bVar11) {
    lVar3 = Mixer_LoadMixerCfgPrevOld(pvStack_2c,uStack_28,iStack_24);
    goto LAB_0117a400;
  }
  iVar6 = *(int *)((int)param_1 + 0x28);
  iVar7 = *(int *)((int)param_1 + 0x2c);
  puVar8 = (undefined4 *)((int)param_1 + 0x30);
  if (iVar7 != 0) {
    puVar4 = &DAT_012b03c0;
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  puStack_120 = (undefined *)*puVar8;
  pWVar9 = (LPCWSTR)(puVar8 + 1);
  iStack_10c = iVar6;
  if ((pWVar9 == (LPCWSTR)0x0) || (*pWVar9 != L'\0')) {
    WideCharToMultiByte(0,0,pWVar9,-1,&DAT_012b0628,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    DAT_012b0628 = 0;
  }
  DAT_012b072b = 0;
  iVar7 = lstrlenA(&DAT_012b0628);
  pWVar9 = pWVar9 + iVar7 + 1;
  if (apuStack_114[0] == (undefined1 *)0x0) {
    piVar18 = (int *)&DAT_012b02bc;
    puStack_120 = (undefined *)0x0;
    piVar16 = (int *)0x0;
    (**(code **)(*piStack_128 + 0x2c))(piStack_128,0,0,&DAT_012b02bc,0x104);
    iVar7 = lstrcmpA(&DAT_012b0628,&DAT_012b02bc);
    if (iVar7 != 0) {
LAB_0117a0b1:
      SfErrorHandler_DetailsAddString
                (0,"Remapped Preview device from %s to %s",&DAT_012b0628,&DAT_012b02bc);
      puStack_130 = (undefined *)0x1;
    }
  }
  else {
    piVar19 = (int *)&DAT_012b0628;
    ppuVar17 = &puStack_120;
    piVar18 = (int *)0x0;
    piVar16 = piStack_128;
    iVar7 = (**(code **)(*piStack_128 + 0x30))();
    if (iVar7 == -0x7ffb1ff6) {
      (**(code **)(*piVar19 + 0x24))(piVar19,&uStack_134);
      (**(code **)(*ppuVar17 + 0x2c))(ppuVar17,piVar19,0,&DAT_012b02bc,0x104);
      goto LAB_0117a0b1;
    }
  }
  uStack_12c = 0;
  piVar19 = piVar18;
  if (0 < iVar6) {
    do {
      Mixer_GetMainBus(&pIStack_138,uStack_12c,(ISFMixer *)0x0);
      piVar18 = piVar19;
      if (pIStack_138 != (ISFMixerIn *)0x0) {
        pWVar15 = pWVar9;
        (**(code **)(*(int *)pIStack_138 + 0x58))(pIStack_138);
        piVar13 = *(int **)(pWVar9 + 8);
        piVar18 = piVar19;
        (**(code **)(*piVar19 + 0x84))();
        piVar12 = *(int **)(pWVar9 + 10);
        (**(code **)(*piVar16 + 0x50))(piVar16);
        piVar14 = *(int **)(pWVar9 + 0xc);
        (**(code **)(*(int *)pWVar15 + 0x44))();
        pWVar9 = pWVar9 + 0xe;
        if ((pWVar9 == (LPCWSTR)0x0) || (*pWVar9 != L'\0')) {
          WideCharToMultiByte(0,0,pWVar9,-1,&DAT_012b01b8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else {
          DAT_012b01b8 = 0;
        }
        DAT_012b02bb = 0;
        (**(code **)(*piVar13 + 0x10))(piVar13,&DAT_012b01b8);
        iVar6 = lstrlenA(&DAT_012b01b8);
        pWVar9 = pWVar9 + iVar6 + 1;
        if ((pWVar9 == (LPCWSTR)0x0) || (*pWVar9 != L'\0')) {
          WideCharToMultiByte(0,0,pWVar9,-1,&DAT_012b0628,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else {
          DAT_012b0628 = 0;
        }
        DAT_012b072b = 0;
        piVar13 = (int *)&DAT_012b0628;
        (**(code **)(*piVar12 + 0x24))();
        iVar6 = lstrlenA(&DAT_012b0628);
        pWVar9 = pWVar9 + iVar6 + 1;
        iVar6 = *(int *)(pWVar9 + 2);
        (**(code **)(*piVar14 + 0x94))(piVar14,*(undefined4 *)pWVar9,pWVar9 + 4,iVar6);
        pWVar9 = (LPCWSTR)((int)(pWVar9 + 4) + iVar6);
        if ((((uint)piVar19 & 0x10000) != 0) &&
           (puVar8 = &DAT_012b03c0 + (int)pWVar15, ((&DAT_012b03c0)[(int)pWVar15] & 0x80000000) == 0
           )) {
          if ((pWVar9 == (LPCWSTR)0x0) || (*pWVar9 != L'\0')) {
            WideCharToMultiByte(0,0,pWVar9,-1,&DAT_012b0628,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else {
            DAT_012b0628 = 0;
          }
          DAT_012b072b = 0;
          iVar6 = lstrlenA(&DAT_012b0628);
          pWVar9 = pWVar9 + iVar6 + 1;
          if (piVar14 == (int *)0x0) {
            *puVar8 = 0;
            (**(code **)(*piVar12 + 0x2c))(piVar12,0,0,&DAT_012b02bc,0x104);
            iVar6 = lstrcmpA(&DAT_012b01b8,&DAT_012b02bc);
            if (iVar6 != 0) {
LAB_0117a303:
              SfErrorHandler_DetailsAddString
                        (0,"Remapped %s device from %s to %s",&DAT_012b01b8,&DAT_012b0628,
                         &DAT_012b02bc);
            }
          }
          else {
            iVar6 = (**(code **)(*piVar12 + 0x30))(piVar12,puVar8,0,&DAT_012b0628);
            if (iVar6 == -0x7ffb1ff6) {
              uVar1 = *(undefined4 *)(&DAT_012b05c0 + (int)pWVar15 * 4);
              *puVar8 = uVar1;
              (**(code **)(*piVar12 + 0x2c))(piVar12,uVar1,0,&DAT_012b02bc,0x104);
              goto LAB_0117a303;
            }
          }
        }
        (**(code **)(*piVar13 + 8))(piVar13);
        iVar6 = *(int *)pWVar9;
        puVar2 = *(undefined **)(pWVar9 + 2);
        pWVar9 = pWVar9 + 4;
        apuStack_114[iVar6] = puVar2;
        if (puVar2 != (undefined *)0x0) {
          aiStack_ac[iVar6] = (int)pWVar9;
          pWVar9 = (LPCWSTR)((int)pWVar9 + (int)puVar2);
        }
      }
      uStack_12c = uStack_12c + 1;
      piVar19 = piVar18;
    } while ((int)uStack_12c < (int)puStack_120);
  }
  puVar2 = puStack_120;
  uVar10 = 0;
  if (0 < (int)puStack_120) {
    do {
      if (((apuStack_114[uVar10] != (undefined *)0x0) && (aiStack_ac[uVar10] != 0)) &&
         (iVar6 = _SfGraph_CreateFromMem_16(&pIStack_124,aiStack_ac[uVar10],apuStack_114[uVar10],1),
         -1 < iVar6)) {
        Mixer_SetDeviceGraph(pIStack_124,1,uVar10);
        (**(code **)(*(int *)pIStack_124 + 8))(pIStack_124);
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)puVar2);
  }
  (**(code **)(*(int *)DAT_012b09c8 + 100))(DAT_012b09c8,&DAT_012b03c0,pIStack_118);
  lVar3 = (**(code **)(*(int *)DAT_012b09c8 + 0xa8))(DAT_012b09c8,piVar18);
LAB_0117a400:
  if (piStack_128 != (int *)0x0) {
    (**(code **)(*piStack_128 + 8))(piStack_128);
  }
  piStack_128 = (int *)0x0;
  Mixer_Prepare();
  Mixer_UpdateAll();
  lVar5 = 0x4e015;
  if (puStack_11c == (undefined1 *)0x0) {
    lVar5 = lVar3;
  }
  return lVar5;
}


