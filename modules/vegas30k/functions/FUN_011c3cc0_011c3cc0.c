/* Module: vegas30k.dll
   Function: FUN_011c3cc0
   Address: 011c3cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011c3cc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  MMRESULT MVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  int iVar8;
  UINT_PTR UVar9;
  tagWAVEOUTCAPSA *ptVar10;
  int iVar11;
  tagWAVEINCAPSA *ptVar12;
  int *local_78;
  UINT local_74;
  int *local_70;
  int *piStack_68;
  tagWAVEINCAPSA tStack_64;
  tagWAVEOUTCAPSA local_34;
  
  UVar9 = 0;
  local_78 = (int *)0x0;
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return -0x7fff0001;
  }
  piVar1 = (int *)(param_1 + 0x118);
  if (*(int **)(param_1 + 0x118) == (int *)0x0) {
    iVar4 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  }
  else {
    iVar4 = **(int **)(param_1 + 0x118);
    if ((*(byte *)(param_1 + 0x110) & 0x20) == 0) {
      iVar8 = 0;
      if (0 < iVar4) {
        do {
          piVar2 = *(int **)(*(int *)(*piVar1 + 8) + iVar8 * 4);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
      }
    }
    else {
      iVar8 = 0;
      if (0 < iVar4) {
        do {
          piVar2 = *(int **)(*(int *)(*piVar1 + 8) + iVar8 * 4);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
      }
    }
    iVar4 = _SfList_DeleteList_16(*piVar1,0,0xffffffff,1);
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  local_74 = waveOutGetNumDevs();
  if (local_74 != 0) {
    if (local_74 != 0) {
      do {
        ptVar10 = &local_34;
        for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
          ptVar10->wMid = 0;
          ptVar10->wPid = 0;
          ptVar10 = (tagWAVEOUTCAPSA *)&ptVar10->vDriverVersion;
        }
        MVar5 = waveOutGetDevCapsA(UVar9,&local_34,0x34);
        if (MVar5 == 0) {
          pvVar6 = GlobalAlloc(0x40,0x350);
          pvVar7 = GlobalLock(pvVar6);
          if (pvVar7 == (LPVOID)0x0) {
            return -0x7ff8fff2;
          }
          local_70 = (int *)FUN_011cb0f0(UVar9);
          if (local_70 == (int *)0x0) {
            return -0x7ff8fff2;
          }
          iVar4 = (**(code **)(*local_70 + 0x70))();
          if (iVar4 < 0) {
            (**(code **)(*local_70 + 0x6c))(1);
            local_74 = local_74 - 1;
          }
          else {
            piStack_68 = local_70;
            iVar4 = _SfList_InsertList_16(*piVar1,0xffffffff,&piStack_68,1);
            if (iVar4 < 0) goto LAB_011c4031;
            (**(code **)(*local_70 + 4))(local_70);
          }
        }
        UVar9 = UVar9 + 1;
      } while (UVar9 < local_74);
    }
    local_70 = (int *)0x0;
    if (iVar4 < 0) goto LAB_011c4031;
    iVar4 = 0;
  }
  local_70 = (int *)0x0;
  local_74 = waveInGetNumDevs();
  piVar1 = (int *)(param_1 + 0x120);
  if (*(int **)(param_1 + 0x120) == (int *)0x0) {
    if (local_74 == 0) {
      iVar8 = 0;
      goto LAB_011c3ea1;
    }
    iVar4 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  }
  else {
    iVar8 = **(int **)(param_1 + 0x120);
LAB_011c3ea1:
    iVar11 = 0;
    if (0 < iVar8) {
      do {
        piVar2 = *(int **)(*(int *)(*piVar1 + 8) + iVar11 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar8);
    }
    if (local_74 == 0) {
      _SfList_Destroy_4(*piVar1);
      *piVar1 = 0;
    }
    else {
      iVar4 = _SfList_DeleteList_16(*piVar1,0,0xffffffff,1);
    }
  }
  local_78 = (int *)0x0;
  if (iVar4 < 0) {
    return iVar4;
  }
  if (local_74 == 0) {
    return iVar4;
  }
  UVar9 = 0;
  if (local_74 != 0) {
    do {
      local_78 = (int *)0x0;
      ptVar12 = &tStack_64;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        ptVar12->wMid = 0;
        ptVar12->wPid = 0;
        ptVar12 = (tagWAVEINCAPSA *)&ptVar12->vDriverVersion;
      }
      MVar5 = waveInGetDevCapsA(UVar9,&tStack_64,0x30);
      if (MVar5 == 0) {
        uVar3 = *(uint *)(param_1 + 0x110);
        if ((uVar3 & 2) == 0) {
          if ((uVar3 & 0x10) == 0) {
            if ((uVar3 & 1) == 0) break;
          }
          else if (((tStack_64.wMid != 1) || (tStack_64.wPid != 0x65)) ||
                  (tStack_64.vDriverVersion != 0x500)) goto LAB_011c401d;
        }
        else if ((((tStack_64.wMid == 1) && (tStack_64.wPid == 0x65)) &&
                 (tStack_64.vDriverVersion == 0x500)) ||
                ((2 < tStack_64.wChannels && (tStack_64.wChannels != 0xffff)))) goto LAB_011c401d;
        pvVar6 = GlobalAlloc(0x40,0x538);
        pvVar7 = GlobalLock(pvVar6);
        if (pvVar7 == (LPVOID)0x0) {
          local_78 = (int *)0x0;
          break;
        }
        local_78 = (int *)FUN_011c76f0(UVar9);
        if (local_78 == (int *)0x0) break;
        iVar4 = FUN_011c7ab0();
        if (iVar4 < 0) {
          (**(code **)(*local_78 + 0x90))(1);
          local_74 = local_74 - 1;
        }
        else {
          piStack_68 = local_78;
          iVar4 = _SfList_InsertList_16(*piVar1,0xffffffff,&piStack_68,1);
          if (iVar4 < 0) break;
          (**(code **)(*local_78 + 4))(local_78);
        }
      }
LAB_011c401d:
      local_78 = (int *)0x0;
      UVar9 = UVar9 + 1;
    } while (UVar9 < local_74);
  }
  iVar4 = 0;
LAB_011c4031:
  if (local_70 != (int *)0x0) {
    (**(code **)(*local_70 + 0x6c))(1);
  }
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 0x90))(1);
  }
  return iVar4;
}


