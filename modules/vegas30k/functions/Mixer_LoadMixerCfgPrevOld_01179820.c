/* Module: vegas30k.dll
   Function: Mixer_LoadMixerCfgPrevOld
   Address: 01179820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_LoadMixerCfgPrevOld(void *,unsigned long,int) */

long Mixer_LoadMixerCfgPrevOld(void *param_1,ulong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPCWSTR pWVar5;
  int *unaff_ESI;
  ulong uVar6;
  uint *puVar7;
  int *unaff_EDI;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  bool bVar11;
  ISFMixerIn *pIVar12;
  int *piVar13;
  ISFMixerIn *local_3f8;
  ISFGraphBuilder *local_3f4;
  int local_3f0;
  uint local_3ec [4];
  long local_3dc;
  ulong local_3d8;
  undefined1 uStack_2f9;
  undefined1 uStack_2f1;
  undefined1 uStack_2e9;
  int local_2d0 [26];
  int local_268 [26];
  int aiStack_200 [128];
  
  piVar10 = local_268;
                    /* 0x179820  208  ?Mixer_LoadMixerCfgPrevOld@@YGJPAXKH@Z */
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  piVar10 = local_2d0;
  for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_3dc = 0;
  local_3f4 = (ISFGraphBuilder *)0x0;
  if ((*(uint *)param_1 == 0) || (param_2 < *(uint *)param_1)) {
    return 1;
  }
  local_3ec[0] = *(uint *)((int)param_1 + 4);
  local_3ec[1] = *(int *)((int)param_1 + 8);
  local_3ec[2] = *(int *)((int)param_1 + 0xc);
  iVar3 = 4;
  local_3ec[3] = *(int *)((int)param_1 + 0x10);
  bVar11 = true;
  puVar7 = &DAT_011ea540;
  puVar9 = local_3ec;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar11 = *puVar7 == *puVar9;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  } while (bVar11);
  if (bVar11) {
    local_3ec[0] = *(uint *)((int)param_1 + 0x14);
    local_3ec[1] = *(int *)((int)param_1 + 0x18);
    local_3ec[2] = *(int *)((int)param_1 + 0x1c);
    bVar11 = true;
    local_3ec[3] = *(int *)((int)param_1 + 0x20);
    iVar3 = 4;
    puVar7 = &DAT_011ea560;
    puVar9 = local_3ec;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar11 = *puVar7 == *puVar9;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      local_3f0 = *(int *)((int)param_1 + 0x24);
      pWVar5 = (LPCWSTR)((int)param_1 + 0x28);
      uVar8 = 0x28;
      local_3d8 = 0;
      if (0 < local_3f0) {
        do {
          Mixer_GetMainBus(&local_3f8,local_3d8,(ISFMixer *)0x0);
          if (local_3f8 != (ISFMixerIn *)0x0) {
            pIVar12 = local_3f8;
            (**(code **)(*(int *)local_3f8 + 0x58))(local_3f8,pWVar5);
            piVar13 = unaff_EDI;
            (**(code **)(*unaff_EDI + 0x84))(unaff_EDI,*(int *)(pWVar5 + 8));
            piVar10 = unaff_ESI;
            (**(code **)(*unaff_ESI + 0x50))(unaff_ESI,*(int *)(pWVar5 + 10));
            (**(code **)(*(int *)pIVar12 + 0x44))(pIVar12,*(int *)(pWVar5 + 0xc));
            pWVar5 = pWVar5 + 0xe;
            if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
              WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)&local_3f4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (&stack0x00000000 != (undefined1 *)0x3f4) {
              local_3f4 = (ISFGraphBuilder *)((uint)local_3f4 & 0xffffff00);
            }
            uStack_2f1 = 0;
            (**(code **)(*piVar13 + 0x10))(piVar13,&local_3f4);
            iVar3 = lstrlenA(&stack0xfffffc04);
            pWVar5 = pWVar5 + iVar3 + 1;
            if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
              WideCharToMultiByte(0,0,pWVar5,-1,&stack0xfffffc04,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            uStack_2f9 = 0;
            (**(code **)(*piVar10 + 0x24))(piVar10,&stack0xfffffc04);
            iVar2 = lstrlenA(&stack0xfffffbfc);
            pWVar5 = pWVar5 + iVar2 + 1;
            (**(code **)(*(int *)pIVar12 + 8))(pIVar12);
            iVar4 = *(int *)pWVar5;
            iVar1 = *(int *)(pWVar5 + 2);
            pWVar5 = pWVar5 + 4;
            local_2d0[iVar4] = iVar1;
            uVar8 = uVar8 + (iVar3 + 1) * 2 + 0x24 + (iVar2 + 1) * 2;
            if (iVar1 != 0) {
              local_268[iVar4] = (int)pWVar5;
              pWVar5 = (LPCWSTR)((int)pWVar5 + iVar1);
              uVar8 = uVar8 + iVar1;
            }
          }
          local_3d8 = local_3d8 + 1;
        } while ((int)local_3d8 < local_3f0);
      }
      uVar6 = 0;
      if (0 < local_3f0) {
        do {
          if (((local_2d0[uVar6] != 0) && (local_268[uVar6] != 0)) &&
             (iVar3 = _SfGraph_CreateFromMem_16(&local_3f4,local_268[uVar6],local_2d0[uVar6],1),
             -1 < iVar3)) {
            Mixer_SetDeviceGraph(local_3f4,1,uVar6);
            (**(code **)(*(int *)local_3f4 + 8))(local_3f4);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < local_3f0);
      }
      if (((uVar8 < param_2) && (3 < param_2 - uVar8)) && (*(int *)pWVar5 != 0)) {
        local_3ec[0] = *(uint *)(pWVar5 + 2);
        local_3ec[1] = *(int *)(pWVar5 + 4);
        local_3ec[2] = *(int *)(pWVar5 + 6);
        iVar3 = 4;
        bVar11 = true;
        local_3ec[3] = *(int *)(pWVar5 + 8);
        puVar7 = &DAT_011ea590;
        puVar9 = local_3ec;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar11 = *puVar7 == *puVar9;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (bVar11);
        if (bVar11) {
          iVar3 = *(int *)(pWVar5 + 10);
          if (iVar3 != 0) {
            pWVar5 = pWVar5 + 0xc;
            piVar10 = aiStack_200;
            for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar10 = *(int *)pWVar5;
              pWVar5 = pWVar5 + 2;
              piVar10 = piVar10 + 1;
            }
          }
          local_3ec[1] = (**(code **)(*DAT_012b09c8 + 100))(DAT_012b09c8,aiStack_200,iVar3);
          Mixer_UpdateAll();
          return local_3ec[1];
        }
      }
    }
    else {
      iVar3 = 4;
      bVar11 = true;
      puVar7 = &DAT_011ea550;
      puVar9 = local_3ec;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar11 = *puVar7 == *puVar9;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (bVar11);
      if (bVar11) {
        iVar3 = *(int *)((int)param_1 + 0x24);
        iVar4 = (int)param_1 + 0x28;
        uVar6 = 0;
        if (0 < iVar3) {
          do {
            Mixer_GetMainBus(&local_3f8,uVar6,(ISFMixer *)0x0);
            if (local_3f8 != (ISFMixerIn *)0x0) {
              pIVar12 = local_3f8;
              (**(code **)(*(int *)local_3f8 + 0x58))(local_3f8,iVar4);
              piVar13 = unaff_EDI;
              (**(code **)(*unaff_EDI + 0x84))(unaff_EDI,*(undefined4 *)(iVar4 + 0x10));
              piVar10 = unaff_ESI;
              (**(code **)(*unaff_ESI + 0x50))(unaff_ESI,*(undefined4 *)(iVar4 + 0x14));
              (**(code **)(*(int *)pIVar12 + 0x44))(pIVar12,*(undefined4 *)(iVar4 + 0x18));
              pWVar5 = (LPCWSTR)(iVar4 + 0x1c);
              if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
                WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)&local_3f4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              else if (&stack0x00000000 != (undefined1 *)0x3f4) {
                local_3f4 = (ISFGraphBuilder *)((uint)local_3f4 & 0xffffff00);
              }
              uStack_2f1 = 0;
              (**(code **)(*piVar13 + 0x10))(piVar13,&local_3f4);
              pWVar5 = (LPCWSTR)(iVar4 + 0x224);
              if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
                WideCharToMultiByte(0,0,pWVar5,-1,&stack0xfffffc04,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              uStack_2f9 = 0;
              (**(code **)(*piVar10 + 0x24))(piVar10,&stack0xfffffc04);
              (**(code **)(*(int *)pIVar12 + 8))(pIVar12);
              iVar1 = *(int *)(iVar4 + 0x42c);
              iVar2 = *(int *)(iVar4 + 0x430);
              iVar4 = iVar4 + 0x434;
              local_2d0[iVar1] = iVar2;
              if (iVar2 != 0) {
                local_268[iVar1] = iVar4;
                iVar4 = iVar4 + iVar2;
              }
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < iVar3);
        }
        uVar6 = 0;
        if (0 < iVar3) {
          do {
            if (((local_2d0[uVar6] != 0) && (local_268[uVar6] != 0)) &&
               (iVar4 = _SfGraph_CreateFromMem_16(&local_3f4,local_268[uVar6],local_2d0[uVar6],1),
               -1 < iVar4)) {
              Mixer_SetDeviceGraph(local_3f4,1,uVar6);
              (**(code **)(*(int *)local_3f4 + 8))(local_3f4);
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < iVar3);
          Mixer_UpdateAll();
          return local_3dc;
        }
      }
      else {
        uVar8 = *(uint *)((int)param_1 + 0x14);
        iVar3 = (int)param_1 + 0x18;
        uVar6 = 0;
        if (0 < (int)uVar8) {
          do {
            Mixer_GetMainBus(&local_3f8,uVar6,(ISFMixer *)0x0);
            if (local_3f8 != (ISFMixerIn *)0x0) {
              pIVar12 = local_3f8;
              (**(code **)(*(int *)local_3f8 + 0x58))(local_3f8,iVar3);
              piVar13 = unaff_EDI;
              (**(code **)(*unaff_EDI + 0x84))(unaff_EDI,*(undefined4 *)(iVar3 + 0x10));
              piVar10 = unaff_ESI;
              (**(code **)(*unaff_ESI + 0x50))(unaff_ESI,*(undefined4 *)(iVar3 + 0x14));
              pWVar5 = (LPCWSTR)(iVar3 + 0x18);
              if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
                WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)local_3ec,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              else if (&stack0x00000000 != (undefined1 *)0x3ec) {
                local_3ec[0] = local_3ec[0] & 0xffffff00;
              }
              uStack_2e9 = 0;
              (**(code **)(*(int *)pIVar12 + 0x10))(pIVar12,local_3ec);
              pWVar5 = (LPCWSTR)(iVar3 + 0x220);
              if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
                WideCharToMultiByte(0,0,pWVar5,-1,(LPSTR)&local_3f4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
              }
              else if (&stack0x00000000 != (undefined1 *)0x3f4) {
                local_3f4 = (ISFGraphBuilder *)((uint)local_3f4 & 0xffffff00);
              }
              uStack_2f1 = 0;
              (**(code **)(*piVar13 + 0x24))(piVar13,&local_3f4);
              (**(code **)(*piVar10 + 8))(piVar10);
              iVar4 = *(int *)(iVar3 + 0x428);
              iVar1 = *(int *)(iVar3 + 0x42c);
              iVar3 = iVar3 + 0x430;
              local_2d0[iVar4] = iVar1;
              if (iVar1 != 0) {
                local_268[iVar4] = iVar3;
                iVar3 = iVar3 + iVar1;
              }
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar8);
        }
        uVar6 = 0;
        if (0 < (int)uVar8) {
          do {
            if (((local_2d0[uVar6] != 0) && (local_268[uVar6] != 0)) &&
               (iVar3 = _SfGraph_CreateFromMem_16(&local_3f4,local_268[uVar6],local_2d0[uVar6],1),
               -1 < iVar3)) {
              Mixer_SetDeviceGraph(local_3f4,1,uVar6);
              (**(code **)(*(int *)local_3f4 + 8))(local_3f4);
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar8);
        }
      }
    }
  }
  Mixer_UpdateAll();
  return local_3dc;
}


