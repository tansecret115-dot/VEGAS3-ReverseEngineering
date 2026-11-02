/* Module: vegas30.exe
   Function: FUN_005b7d40
   Address: 005b7d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_005b7d40(int param_1,ISFMixerIn *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  LPCVOID pvVar6;
  int *piVar7;
  int iVar8;
  HGLOBAL pvVar9;
  LPVOID pvVar10;
  long lVar11;
  ulong uVar12;
  int *unaff_retaddr;
  int *local_4;
  
  local_4 = (int *)0x0;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005b7ca0();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar7 = (int *)FUN_005b87b0(param_2);
  if (piVar7 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar7;
  }
  *(int *)(param_1 + 8) = iVar8;
  if (iVar8 < 1) {
LAB_005b7dde:
    lVar11 = Mixer_NumBusTypePorts(1);
    *(long *)(param_1 + 0x10) = lVar11;
    if (lVar11 < 1) {
LAB_005b7f3e:
      lVar11 = Mixer_NumBusTypePorts(4);
      *(long *)(param_1 + 0x18) = lVar11;
      if (lVar11 < 1) {
LAB_005b8023:
        if (-1 < (int)local_4) {
          *(undefined4 *)(param_1 + 4) = 1;
          return local_4;
        }
        goto LAB_005b7ea5;
      }
      pvVar9 = GlobalAlloc(0x40,lVar11 << 2);
      pvVar10 = GlobalLock(pvVar9);
      *(LPVOID *)(param_1 + 0x1c) = pvVar10;
      if (pvVar10 != (LPVOID)0x0) {
        uVar12 = 0;
        while (-1 < (int)local_4) {
          if (*(int *)(param_1 + 0x18) <= (int)uVar12) goto LAB_005b8023;
          param_2 = (ISFMixerIn *)0x0;
          local_4 = (int *)Mixer_GetDevice(&param_2,4,uVar12);
          if (-1 < (int)local_4) {
            if (param_2 == (ISFMixerIn *)0x0) {
              local_4 = (int *)0x80004005;
            }
            else {
              iVar8 = (**(code **)(*(int *)param_2 + 0x54))(param_2);
              puVar3 = (uint *)(*(int *)(param_1 + 0x1c) + uVar12 * 4);
              uVar5 = *puVar3;
              *puVar3 = (iVar8 == 0 ^ uVar5) & 1 ^ uVar5;
              iVar8 = (**(code **)(*unaff_retaddr + 0x48))(unaff_retaddr);
              puVar3 = (uint *)(*(int *)(param_1 + 0x1c) + uVar12 * 4);
              *puVar3 = (uint)(iVar8 == 0) << 1 | *puVar3 & 0xfffffffd;
              (**(code **)(*local_4 + 8))(local_4);
            }
          }
          uVar12 = uVar12 + 1;
        }
        goto LAB_005b7ea5;
      }
    }
    else {
      pvVar9 = GlobalAlloc(0x40,lVar11 << 2);
      pvVar10 = GlobalLock(pvVar9);
      *(LPVOID *)(param_1 + 0x14) = pvVar10;
      if (pvVar10 != (LPVOID)0x0) {
        uVar12 = 0;
        do {
          if (*(int *)(param_1 + 0x10) <= (int)uVar12) {
            if (-1 < (int)local_4) goto LAB_005b7f3e;
            break;
          }
          param_2 = (ISFMixerIn *)0x0;
          local_4 = (int *)Mixer_GetDevice(&param_2,1,uVar12);
          if (-1 < (int)local_4) {
            if (param_2 == (ISFMixerIn *)0x0) {
              local_4 = (int *)0x80004005;
            }
            else {
              iVar8 = (**(code **)(*(int *)param_2 + 0x54))(param_2);
              puVar3 = (uint *)(*(int *)(param_1 + 0x14) + uVar12 * 4);
              uVar5 = *puVar3;
              *puVar3 = (iVar8 == 0 ^ uVar5) & 1 ^ uVar5;
              iVar8 = (**(code **)(*unaff_retaddr + 0x48))(unaff_retaddr);
              puVar3 = (uint *)(*(int *)(param_1 + 0x14) + uVar12 * 4);
              *puVar3 = (uint)(iVar8 == 0) << 1 | *puVar3 & 0xfffffffd;
              (**(code **)(*local_4 + 8))(local_4);
            }
          }
          uVar12 = uVar12 + 1;
        } while (-1 < (int)local_4);
        goto LAB_005b7ea5;
      }
    }
  }
  else {
    pvVar9 = GlobalAlloc(0x40,iVar8 << 2);
    pvVar10 = GlobalLock(pvVar9);
    *(LPVOID *)(param_1 + 0xc) = pvVar10;
    if (pvVar10 != (LPVOID)0x0) {
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar4 = *(int *)(piVar7[2] + iVar8 * 4);
          *(uint *)(*(int *)(param_1 + 0xc) + iVar8 * 4) =
               *(uint *)(iVar4 + 0x10) >> 1 & 1 |
               *(uint *)(*(int *)(param_1 + 0xc) + iVar8 * 4) & 0xfffffffe;
          iVar1 = iVar8 * 4;
          iVar2 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(uint *)(*(int *)(param_1 + 0xc) + iVar2) =
               (*(uint *)(iVar4 + 0x10) & 1) << 1 |
               *(uint *)(*(int *)(param_1 + 0xc) + iVar1) & 0xfffffffd;
        } while (iVar8 < *(int *)(param_1 + 8));
      }
      goto LAB_005b7dde;
    }
  }
  local_4 = (int *)0x8007000e;
LAB_005b7ea5:
  pvVar6 = *(LPCVOID *)(param_1 + 0xc);
  if (pvVar6 != (LPCVOID)0x0) {
    pvVar9 = GlobalHandle(pvVar6);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(pvVar6);
    GlobalFree(pvVar9);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  pvVar6 = *(LPCVOID *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = 0;
  if (pvVar6 != (LPCVOID)0x0) {
    pvVar9 = GlobalHandle(pvVar6);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(pvVar6);
    GlobalFree(pvVar9);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  pvVar6 = *(LPCVOID *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (pvVar6 != (LPCVOID)0x0) {
    pvVar9 = GlobalHandle(pvVar6);
    GlobalUnlock(pvVar9);
    pvVar9 = GlobalHandle(pvVar6);
    GlobalFree(pvVar9);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return local_4;
}


