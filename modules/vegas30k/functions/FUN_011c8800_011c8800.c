/* Module: vegas30k.dll
   Function: FUN_011c8800
   Address: 011c8800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c8800(int param_1)

{
  LPHMIXER phmx;
  byte bVar1;
  uint uVar2;
  HMIXEROBJ hmxobj;
  MMRESULT MVar3;
  int iVar4;
  HWND pHVar5;
  tagMIXERLINEA *ptVar6;
  tagMIXERCONTROLA *ptVar7;
  tMIXERCONTROLDETAILS *ptVar8;
  DWORD *pDVar9;
  tagMIXERLINECONTROLSA *ptVar10;
  tagMIXERCONTROLA *ptVar11;
  DWORD *local_ba4;
  tagMIXERLINECONTROLSA local_ba0;
  int local_b88;
  DWORD *local_b84 [2];
  tMIXERCONTROLDETAILS local_b7c;
  tagMIXERLINEA local_b64;
  tagMIXERCONTROLA local_abc;
  tagMIXERLINEA local_a28;
  DWORD local_980 [32];
  DWORD local_900 [576];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  ptVar6 = &local_a28;
  for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar6->cbStruct = 0;
    ptVar6 = (tagMIXERLINEA *)&ptVar6->dwDestination;
  }
  *(uint *)(param_1 + 0x5c) = uVar2 & 0xffffff3f;
  phmx = (LPHMIXER)(param_1 + 0x3dc);
  local_b88 = 0;
  *phmx = (HMIXER)0x0;
  local_a28.cbStruct = 0xa8;
  MVar3 = mixerGetLineInfoA(*(HMIXEROBJ *)(param_1 + 0x44),&local_a28,0x20000000);
  if (MVar3 == 0) {
    MVar3 = mixerGetID(*(HMIXEROBJ *)(param_1 + 0x44),(UINT *)(param_1 + 0x3d8),0x20000000);
    if ((MVar3 == 0) && (MVar3 = mixerOpen(phmx,*(UINT *)(param_1 + 0x3d8),0,0,0), MVar3 == 0)) {
      if (local_a28.cControls != 0) {
        ptVar10 = &local_ba0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar10->cbStruct = 0;
          ptVar10 = (tagMIXERLINECONTROLSA *)&ptVar10->dwLineID;
        }
        ptVar7 = &local_abc;
        for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar7->cbStruct = 0;
          ptVar7 = (tagMIXERCONTROLA *)&ptVar7->dwControlID;
        }
        local_ba0.cbmxctrl = 0x94;
        local_abc.cbStruct = 0x94;
        local_ba0.dwLineID = local_a28.dwLineID;
        local_ba0.pamxctrl = &local_abc;
        local_ba0.cbStruct = 0x18;
        local_ba0.u.dwControlID = 0x50030001;
        local_ba0.cControls = 1;
        MVar3 = mixerGetLineControlsA((HMIXEROBJ)*phmx,&local_ba0,2);
        if (MVar3 == 0) {
          ptVar6 = &local_b64;
          pDVar9 = (DWORD *)(param_1 + 0x3e0);
          for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pDVar9 = ptVar6->cbStruct;
            ptVar6 = (tagMIXERLINEA *)&ptVar6->dwDestination;
            pDVar9 = pDVar9 + 1;
          }
LAB_011c8b34:
          local_b88 = 1;
          ptVar7 = (tagMIXERCONTROLA *)(param_1 + 0x4a0);
          ptVar10 = &local_ba0;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            ptVar10->cbStruct = 0;
            ptVar10 = (tagMIXERLINECONTROLSA *)&ptVar10->dwLineID;
          }
          ptVar11 = ptVar7;
          for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
            ptVar11->cbStruct = 0;
            ptVar11 = (tagMIXERCONTROLA *)&ptVar11->dwControlID;
          }
          hmxobj = (HMIXEROBJ)*phmx;
          local_ba0.dwLineID = *(DWORD *)(param_1 + 0x3ec);
          ptVar7->cbStruct = 0x94;
          local_ba0.cbStruct = 0x18;
          local_ba0.u.dwControlID = 0x50030001;
          local_ba0.cControls = 1;
          local_ba0.cbmxctrl = 0x94;
          local_ba0.pamxctrl = ptVar7;
          MVar3 = mixerGetLineControlsA(hmxobj,&local_ba0,2);
          if (MVar3 == 0) {
            *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x4a4);
            bVar1 = *(byte *)(param_1 + 0x4ac);
            *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x3fc);
            ((LPMIXERCONTROLDETAILS)(param_1 + 0x488))->cbStruct = 0x18;
            if ((bVar1 & 1) != 0) {
              *(undefined4 *)(param_1 + 0x490) = 1;
            }
            *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x4b0);
            *(undefined4 *)(param_1 + 0x498) = 4;
            *(DWORD ***)(param_1 + 0x49c) = local_b84;
            MVar3 = mixerGetControlDetailsA
                              ((HMIXEROBJ)*phmx,(LPMIXERCONTROLDETAILS)(param_1 + 0x488),0);
            if (MVar3 == 0) {
              *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x40;
            }
            *(undefined4 *)(param_1 + 0x49c) = 0;
          }
          *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xfffffe7f;
          goto LAB_011c8c12;
        }
        ptVar10 = &local_ba0;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar10->cbStruct = 0;
          ptVar10 = (tagMIXERLINECONTROLSA *)&ptVar10->dwLineID;
        }
        ptVar7 = &local_abc;
        for (iVar4 = 0x25; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar7->cbStruct = 0;
          ptVar7 = (tagMIXERCONTROLA *)&ptVar7->dwControlID;
        }
        local_ba0.dwLineID = local_a28.dwLineID;
        local_ba0.cbmxctrl = 0x94;
        local_abc.cbStruct = 0x94;
        local_ba0.pamxctrl = &local_abc;
        local_ba0.cbStruct = 0x18;
        local_ba0.u.dwControlID = 0x70010001;
        local_ba0.cControls = 1;
        MVar3 = mixerGetLineControlsA((HMIXEROBJ)*phmx,&local_ba0,2);
        if (MVar3 == 0) {
          ptVar8 = &local_b7c;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            ptVar8->cbStruct = 0;
            ptVar8 = (tMIXERCONTROLDETAILS *)&ptVar8->dwControlID;
          }
          local_b7c.cbStruct = 0x18;
          local_b7c.dwControlID = local_abc.dwControlID;
          if (((byte)local_abc.fdwControl & 1) != 0) {
            local_b7c.cChannels = 1;
          }
          if (((byte)local_abc.fdwControl & 2) != 0) {
            local_b7c.u.cMultipleItems = local_abc.cMultipleItems;
          }
          pDVar9 = local_980;
          for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pDVar9 = 0;
            pDVar9 = pDVar9 + 1;
          }
          local_b7c.paDetails = local_980;
          local_b7c.cbDetails = 4;
          MVar3 = mixerGetControlDetailsA((HMIXEROBJ)*phmx,&local_b7c,0);
          if (MVar3 == 0) {
            pDVar9 = local_900;
            for (iVar4 = 0x240; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pDVar9 = 0;
              pDVar9 = pDVar9 + 1;
            }
            local_b7c.paDetails = local_900;
            local_b7c.cbDetails = 0x48;
            MVar3 = mixerGetControlDetailsA((HMIXEROBJ)*phmx,&local_b7c,1);
            if ((MVar3 == 0) && (pHVar5 = (HWND)0x0, local_b7c.u.hwndOwner != (HWND)0x0)) {
              local_b84[0] = local_900;
              local_ba4 = local_980;
              do {
                if (*local_ba4 != 0) {
                  ptVar6 = &local_b64;
                  for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
                    ptVar6->cbStruct = 0;
                    ptVar6 = (tagMIXERLINEA *)&ptVar6->dwDestination;
                  }
                  local_b64.dwLineID = *local_b84[0];
                  local_b64.cbStruct = 0xa8;
                  local_b64.dwDestination = local_a28.dwDestination;
                  local_b64.dwSource = (DWORD)pHVar5;
                  MVar3 = mixerGetLineInfoA((HMIXEROBJ)*phmx,&local_b64,2);
                  if (MVar3 != 0) goto LAB_011c8aa5;
                  ptVar6 = &local_b64;
                  pDVar9 = (DWORD *)(param_1 + 0x3e0);
                  for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
                    *pDVar9 = ptVar6->cbStruct;
                    ptVar6 = (tagMIXERLINEA *)&ptVar6->dwDestination;
                    pDVar9 = pDVar9 + 1;
                  }
                  goto LAB_011c8b34;
                }
LAB_011c8aa5:
                pHVar5 = (HWND)((int)&pHVar5->unused + 1);
                local_ba4 = local_ba4 + 1;
                local_b84[0] = local_b84[0] + 0x12;
              } while (pHVar5 < local_b7c.u.hwndOwner);
            }
          }
        }
      }
      pHVar5 = (HWND)0x0;
      if ((HWND)local_a28.cConnections != (HWND)0x0) {
        do {
          ptVar6 = &local_b64;
          for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
            ptVar6->cbStruct = 0;
            ptVar6 = (tagMIXERLINEA *)&ptVar6->dwDestination;
          }
          local_b64.cbStruct = 0xa8;
          local_b64.dwDestination = local_a28.dwDestination;
          local_b64.dwSource = (DWORD)pHVar5;
          mixerGetLineInfoA((HMIXEROBJ)*phmx,&local_b64,1);
          pHVar5 = (HWND)((int)&pHVar5->unused + 1);
        } while (pHVar5 < local_a28.cConnections);
      }
    }
  }
LAB_011c8c12:
  if ((*phmx != (HMIXER)0x0) && (local_b88 == 0)) {
    mixerClose(*phmx);
    *phmx = (HMIXER)0x0;
  }
  return 0x80040037;
}


