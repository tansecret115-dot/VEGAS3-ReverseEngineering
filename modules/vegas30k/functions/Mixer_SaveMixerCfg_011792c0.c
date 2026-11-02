/* Module: vegas30k.dll
   Function: Mixer_SaveMixerCfg
   Address: 011792c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SaveMixerCfg(void * *,unsigned long *) */

long Mixer_SaveMixerCfg(void **param_1,ulong *param_2)

{
  int *piVar1;
  ISFGraphBuilder *pIVar2;
  int iVar3;
  long lVar4;
  HGLOBAL pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  LPWSTR pWVar10;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  int iVar11;
  int *piVar12;
  ISFMixerIn *unaff_EDI;
  ISFMixerIn *pIVar13;
  LPWSTR pWVar14;
  undefined1 *puVar15;
  int *piVar16;
  int *piStack_32c;
  int *piVar17;
  int *piVar18;
  ISFGraphBuilder **ppIVar19;
  uint uStack_2f0;
  ISFGraphBuilder *pIStack_2e8;
  ISFGraphBuilder *local_2e4;
  int aiStack_2e0 [2];
  ISFGraphBuilder *local_2d8;
  uint auStack_278 [7];
  uint auStack_25c [10];
  uint auStack_234 [10];
  int aiStack_20c [129];
  undefined4 *puStack_8;
  
                    /* 0x1792c0  221  ?Mixer_SaveMixerCfg@@YGJPAPAXPAK@Z */
  uVar9 = 0;
  *param_2 = 0;
  *param_1 = (void *)0x0;
  pIVar2 = (ISFGraphBuilder *)Mixer_GetNumMainBuses((ISFMixer *)0x0);
  piVar1 = DAT_012b09c8;
  ppIVar19 = &local_2e4;
  local_2e4 = (ISFGraphBuilder *)0x0;
  iVar11 = (int)(pIVar2 + 2) * 0x1c;
  local_2d8 = pIVar2;
  iVar3 = (**(code **)(*DAT_012b09c8 + 0x60))();
  if (-1 < iVar3) {
    iVar11 = iVar11 + 4 + uStack_2f0 * 4;
  }
  Mixer_GetDeviceHardwareName(&DAT_012b072c,0x104,0x10,0);
  iVar3 = lstrlenA(&DAT_012b072c);
  pIVar13 = (ISFMixerIn *)(iVar11 + 6 + iVar3 * 2);
  pIStack_2e8 = (ISFGraphBuilder *)0x0;
  if (0 < (int)pIVar2) {
    do {
      Mixer_GetMainBus((ISFMixerIn **)&stack0xfffffd04,uVar9,(ISFMixer *)0x0);
      piVar18 = (int *)&DAT_012b072c;
      (**(code **)(*unaff_ESI + 0xc))();
      iVar11 = lstrlenA(&DAT_012b072c);
      piVar12 = aiStack_20c + 3;
      (**(code **)(aiStack_20c[3] + 0x20))();
      piStack_32c = (int *)0x117939f;
      iVar3 = lstrlenA(&DAT_012b072c);
      piStack_32c = (int *)0x0;
      (**(code **)(*piVar18 + 0x98))(piVar18,&stack0xfffffd08);
      pIVar13 = unaff_EDI + (int)((int)piVar18 + iVar11 * 2 + (iVar3 + 1) * 2 + 10);
      if (((DAT_012b0830 & 0x10000) != 0) && ((auStack_234[uVar9] & 0x80000000) == 0)) {
        (**(code **)(*piVar12 + 0x28))(piVar12,&DAT_012b072c,0x104);
        iVar11 = lstrlenA(&DAT_012b072c);
        pIVar13 = pIVar13 + iVar11 * 2 + 2;
      }
      (**(code **)(*piVar12 + 8))(piVar12);
      pIVar13 = pIVar13 + 8;
      aiStack_2e0[uVar9 + 1] = 0;
      auStack_278[uVar9 + 1] = 0;
      lVar4 = Mixer_GetDeviceGraph(&pIStack_2e8,1,uVar9);
      if (-1 < lVar4) {
        unaff_EBP = 0;
        (**(code **)(*(int *)pIStack_2e8 + 0x70))();
        if (ppIVar19 == (ISFGraphBuilder **)0x0) {
          Mixer_SetDeviceGraph((ISFGraphBuilder *)0x0,1,uVar9);
        }
        else {
          iVar11 = _SfGraph_SaveToMem_12();
          if (-1 < iVar11) {
            unaff_EDI = pIVar13 + auStack_278[uVar9 + 1];
          }
        }
        (**(code **)(*(int *)pIVar13 + 8))();
      }
      uVar9 = uVar9 + 1;
      pIVar2 = local_2e4;
    } while ((int)uVar9 < (int)local_2e4);
  }
  pvVar5 = GlobalAlloc(2,(SIZE_T)pIVar13);
  puVar6 = GlobalLock(pvVar5);
  *puStack_8 = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = pIVar13;
    puVar6[1] = DAT_011ea540;
    puVar6[2] = DAT_011ea544;
    puVar6[3] = DAT_011ea548;
    puVar6[4] = DAT_011ea54c;
    puVar6[5] = DAT_011ea570;
    puVar6[6] = DAT_011ea574;
    puVar6[7] = DAT_011ea578;
    puVar6[8] = DAT_011ea57c;
    puVar6[9] = DAT_012b0830;
    puVar6[10] = DAT_012b09cc;
    puVar6[0xb] = DAT_012b09d0;
    puVar6[0xc] = DAT_012b0ad8;
    puVar6[0xd] = pIVar2;
    uVar7 = 0;
    puVar6[0xe] = uStack_2f0;
    piVar12 = puVar6 + 0xf;
    if (uStack_2f0 != 0) {
      piVar18 = aiStack_20c;
      do {
        iVar11 = *piVar18;
        piVar18 = piVar18 + 1;
        *piVar12 = iVar11;
        piVar12 = piVar12 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uStack_2f0);
    }
    piVar18 = DAT_012b09c8;
    iVar11 = (**(code **)(*DAT_012b09c8 + 0xac))();
    *piVar12 = iVar11;
    Mixer_GetDeviceHardwareName(&DAT_012b072c,0x104,0x10,0);
    iVar11 = lstrlenA(&DAT_012b072c);
    piStack_32c = (int *)0x11795cb;
    MultiByteToWideChar(0,1,&DAT_012b072c,-1,(LPWSTR)(piVar12 + 1),iVar11 + 1);
    pWVar10 = (LPWSTR)((int)(piVar12 + 1) + (iVar11 + 1) * 2);
    pWVar10[-1] = L'\0';
    pIVar13 = (ISFMixerIn *)0x0;
    if (0 < (int)pIVar2) {
      do {
        Mixer_GetMainBus((ISFMixerIn **)&stack0xfffffd00,(ulong)pIVar13,(ISFMixer *)0x0);
        if (unaff_EDI != (ISFMixerIn *)0x0) {
          pWVar14 = pWVar10;
          (**(code **)(*(int *)unaff_EDI + 0x5c))();
          iVar11 = (**(code **)(aiStack_20c[3] + 0x88))();
          *(uint *)(pWVar10 + 8) = (uint)(iVar11 == 0);
          piVar16 = piVar1;
          iVar11 = (**(code **)(*piVar1 + 0x54))();
          *(uint *)(pWVar10 + 10) = (uint)(iVar11 == 0);
          iVar11 = (**(code **)(*piVar18 + 0x48))();
          piStack_32c = (int *)&DAT_012b072c;
          *(uint *)(pWVar10 + 0xc) = (uint)(iVar11 == 0);
          (**(code **)(*(int *)pWVar14 + 0xc))(pWVar14);
          iVar11 = lstrlenA(&DAT_012b072c);
          MultiByteToWideChar(0,1,&DAT_012b072c,-1,pWVar10 + 0xe,iVar11 + 1);
          pWVar10 = pWVar10 + 0xe + iVar11 + 1;
          pWVar10[-1] = L'\0';
          piVar17 = piVar16;
          (**(code **)(*piVar16 + 0x20))(piVar16,&DAT_012b072c,0x104);
          iVar11 = lstrlenA(&DAT_012b072c);
          MultiByteToWideChar(0,1,&DAT_012b072c,-1,pWVar10,iVar11 + 1);
          pWVar10 = pWVar10 + iVar11 + 1;
          puVar15 = &stack0xfffffcf0;
          pWVar10[-1] = L'\0';
          piVar12 = piStack_32c;
          (**(code **)(*piStack_32c + 0x98))(piStack_32c,puVar15,0,&stack0xfffffce4);
          *(int **)pWVar10 = piVar17;
          *(int **)(pWVar10 + 2) = piStack_32c;
          (**(code **)(*piVar16 + 0x98))(piVar16,&stack0xfffffce0,pWVar10 + 4,&piStack_32c);
          pWVar10 = (LPWSTR)((int)(pWVar10 + 4) + (int)piVar16);
          if (((DAT_012b0830 & 0x10000) != 0) && ((auStack_25c[(int)puVar15] & 0x80000000) == 0)) {
            (**(code **)(*piVar12 + 0x28))(piVar12,&DAT_012b072c,0x104);
            iVar11 = lstrlenA(&DAT_012b072c);
            MultiByteToWideChar(0,1,&DAT_012b072c,-1,pWVar10,iVar11 + 1);
            pWVar10[iVar11] = L'\0';
            pWVar10 = pWVar10 + iVar11 + 1;
          }
          (**(code **)(*piVar12 + 8))(piVar12);
          *(undefined1 **)pWVar10 = puVar15;
          uVar7 = auStack_278[(int)puVar15];
          if ((uVar7 == 0) || (aiStack_2e0[(int)puVar15] == 0)) {
            uVar7 = 0;
          }
          *(uint *)(pWVar10 + 2) = uVar7;
          uVar7 = auStack_278[(int)puVar15];
          pWVar10 = pWVar10 + 4;
          pIVar2 = pIStack_2e8;
          if ((uVar7 != 0) && ((int *)aiStack_2e0[(int)pIVar13] != (int *)0x0)) {
            piVar12 = (int *)aiStack_2e0[(int)pIVar13];
            pWVar14 = pWVar10;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(int *)pWVar14 = *piVar12;
              piVar12 = piVar12 + 1;
              pWVar14 = pWVar14 + 2;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(char *)pWVar14 = (char)*piVar12;
              piVar12 = (int *)((int)piVar12 + 1);
              pWVar14 = (LPWSTR)((int)pWVar14 + 1);
            }
            pvVar5 = GlobalHandle((LPCVOID)aiStack_2e0[(int)pIVar13]);
            GlobalUnlock(pvVar5);
            pvVar5 = GlobalHandle((LPCVOID)aiStack_2e0[(int)pIVar13]);
            GlobalFree(pvVar5);
            aiStack_2e0[(int)pIVar13] = 0;
            pWVar10 = (LPWSTR)((int)pWVar10 + auStack_278[(int)pIVar13]);
            pIVar2 = pIStack_2e8;
          }
        }
        pIVar13 = pIVar13 + 1;
      } while ((int)pIVar13 < (int)pIVar2);
    }
    *puStack_8 = unaff_EBP;
    return 0;
  }
  return -0x7ff8fff2;
}


