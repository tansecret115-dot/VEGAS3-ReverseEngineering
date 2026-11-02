/* Module: vegas30k.dll
   Function: FUN_011c4060
   Address: 011c4060
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011c4060(int param_1)

{
  int *piVar1;
  int iVar2;
  UINT UVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *local_8;
  int local_4;
  
  local_8 = (int *)0x0;
  if (*(int *)(param_1 + 0x1cc) == 0) {
    return -0x7fff0001;
  }
  piVar1 = (int *)(param_1 + 0x118);
  local_4 = param_1;
  if (*(int **)(param_1 + 0x118) == (int *)0x0) {
    iVar2 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    piVar7 = (int *)0x0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x118);
    if ((*(byte *)(param_1 + 0x110) & 0x20) == 0) {
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          piVar7 = *(int **)(*(int *)(*piVar1 + 8) + iVar8 * 4);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 8))(piVar7);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2);
      }
    }
    else {
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          local_8 = (int *)0x0;
          piVar7 = *(int **)(*(int *)(*piVar1 + 8) + iVar8 * 4);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 8))(piVar7);
          }
          iVar8 = iVar8 + 1;
          local_8 = (int *)0x0;
        } while (iVar8 < iVar2);
      }
    }
    iVar2 = _SfList_DeleteList_16(*piVar1,0,0xffffffff,1);
    piVar7 = local_8;
  }
  piVar6 = (int *)0x0;
  if (iVar2 < 0) {
    return iVar2;
  }
  UVar3 = waveOutGetNumDevs();
  if (UVar3 == 0) {
    pvVar4 = GlobalAlloc(0x40,0x350);
    pvVar5 = GlobalLock(pvVar4);
    if (pvVar5 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    piVar6 = (int *)FUN_011cf150(0xffffffff);
  }
  else {
    if ((*(byte *)(local_4 + 0x110) & 0x20) != 0) {
      pvVar4 = GlobalAlloc(0x40,0x238);
      pvVar5 = GlobalLock(pvVar4);
      if (pvVar5 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      local_8 = (int *)FUN_011d1360(local_4,0xffffffff);
      if (local_8 == (int *)0x0) {
        return -0x7ff8fff2;
      }
      iVar2 = FUN_011d16a0();
      piVar7 = local_8;
      goto LAB_011c41e4;
    }
    pvVar4 = GlobalAlloc(0x40,0x350);
    pvVar5 = GlobalLock(pvVar4);
    if (pvVar5 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    piVar6 = (int *)FUN_011cb0f0(0xffffffff);
  }
  if (piVar6 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar2 = (**(code **)(*piVar6 + 0x70))();
LAB_011c41e4:
  if (-1 < iVar2) {
    if (piVar7 == (int *)0x0) {
      iVar2 = *piVar1;
      local_8 = piVar6;
    }
    else {
      iVar2 = *piVar1;
      local_8 = piVar7;
    }
    iVar2 = _SfList_InsertList_16(iVar2,0xffffffff,&local_8,1);
    if (-1 < iVar2) {
      if (piVar7 == (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      else {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      UVar3 = waveInGetNumDevs();
      piVar1 = local_8 + 0x48;
      if ((int *)local_8[0x48] == (int *)0x0) {
        if (UVar3 != 0) {
          iVar2 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
        }
      }
      else {
        iVar8 = *(int *)local_8[0x48];
        iVar9 = 0;
        if (0 < iVar8) {
          do {
            piVar7 = *(int **)(*(int *)(*piVar1 + 8) + iVar9 * 4);
            if (piVar7 != (int *)0x0) {
              (**(code **)(*piVar7 + 8))(piVar7);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
        }
        if (UVar3 == 0) {
          _SfList_Destroy_4(*piVar1);
          *piVar1 = 0;
        }
        else {
          iVar2 = _SfList_DeleteList_16(*piVar1,0,0xffffffff,1);
        }
      }
      if (iVar2 < 0) {
        return iVar2;
      }
      if (UVar3 == 0) {
        return iVar2;
      }
      pvVar4 = GlobalAlloc(0x40,0x538);
      pvVar5 = GlobalLock(pvVar4);
      if (pvVar5 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      piVar7 = (int *)FUN_011c76f0(0xffffffff);
      if (piVar7 == (int *)0x0) {
        return -0x7ff8fff2;
      }
      iVar2 = FUN_011c7ab0();
      if ((-1 < iVar2) &&
         (local_8 = piVar7, iVar2 = _SfList_InsertList_16(*piVar1,0xffffffff,&local_8,1), -1 < iVar2
         )) {
        (**(code **)(*piVar7 + 4))(piVar7);
        return 0;
      }
      (**(code **)(*piVar7 + 0x90))(1);
      return iVar2;
    }
  }
  if (piVar6 == (int *)0x0) {
    return iVar2;
  }
  (**(code **)(*piVar6 + 0x6c))(1);
  return iVar2;
}


