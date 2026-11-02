/* Module: vidcap30.exe
   Function: FUN_0044a5c0
   Address: 0044a5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044a5c0(int param_1)

{
  undefined4 *pMem;
  bool bVar1;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  int local_120;
  int *local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined4 local_fc;
  int local_f4;
  undefined1 local_f0 [60];
  undefined1 local_b4 [60];
  undefined1 local_78 [60];
  undefined1 local_3c [60];
  
  uVar2 = DAT_005bb838;
  local_104 = FUN_0042e510(DAT_005bb838);
  if (*(int **)(param_1 + 0x2e0) == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x2e0);
  }
  local_108 = 0;
  _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2e8),0,0xffffffff,0);
  local_118 = _SfList_CreateExZ_32(&local_11c,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  piVar4 = local_11c;
  if (-1 < local_118) {
    while (local_110 = iVar5 + -1, -1 < local_110) {
      bVar1 = false;
      pMem = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2e0) + 8) + local_110 * 4);
      if (((pMem[1] == 0) || (local_114 = FUN_004436d0(uVar2,pMem[1],0), local_114 == 0)) ||
         (local_120 = FUN_00444550(uVar2,local_114,*pMem), local_120 == 0)) {
        iVar5 = 0;
        if (0 < local_104) {
          do {
            if (bVar1) goto LAB_0044a6c7;
            local_114 = FUN_00443740(uVar2,iVar5);
            FUN_00443780(local_114);
            local_120 = FUN_00444550(uVar2,local_114,*pMem);
            if (local_120 != 0) {
              bVar1 = true;
              if ((*(byte *)(local_120 + 0x38) & 0x20) == 0) {
                SfErrorHandler_DetailsAddString
                          (0x8004e00a,"A clip for the file \'%s\' can not be batch captured.",*pMem)
                ;
              }
              else {
                FUN_004442f0(uVar2,local_120,pMem[9]);
                local_118 = local_120;
                local_118 = _SfList_InsertList_16(local_11c,0xffffffff,&local_118,1);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_104);
          if (bVar1) goto LAB_0044a6c7;
        }
        if (((pMem[1] != 0) && (FUN_0044a580(uVar2,pMem,&local_114,&local_120), local_114 != 0)) &&
           (local_120 != 0)) {
          FUN_004442f0(uVar2,local_120,pMem[9]);
          local_10c = local_120;
          _SfList_InsertList_16(local_11c,0xffffffff,&local_10c,1);
        }
      }
      else {
        if ((*(byte *)(local_120 + 0x38) & 0x20) == 0) {
          SfErrorHandler_DetailsAddString
                    (0x8004e00a,"A clip for the file \'%s\' can not be batch captured.",*pMem);
        }
        else {
          FUN_004442f0(uVar2,local_120,pMem[9]);
          local_118 = local_120;
          local_118 = _SfList_InsertList_16(local_11c,0xffffffff,&local_118,1);
        }
LAB_0044a6c7:
        lstrcmpiA(*(LPCSTR *)(*(int *)(local_120 + 4) + 0xc),(LPCSTR)pMem[1]);
        iVar5 = local_120;
        uVar7 = ftol();
        local_f4 = (int)((ulonglong)uVar7 >> 0x20);
        if ((*(int *)(iVar5 + 0x20) != (int)uVar7) || (*(int *)(iVar5 + 0x24) != local_f4)) {
          FUN_0045aec0(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24),
                       *(undefined4 *)(iVar5 + 0x40),*(undefined4 *)(iVar5 + 0x44),local_f0,0x3c);
          FUN_0045aec0((int)uVar7,local_f4,*(undefined4 *)(local_120 + 0x40),
                       *(undefined4 *)(local_120 + 0x44),local_78,0x3c);
          iVar5 = local_120;
        }
        uVar7 = ftol();
        local_fc = (undefined4)((ulonglong)uVar7 >> 0x20);
        lVar8 = FUN_004443a0(iVar5);
        if (lVar8 != CONCAT44(local_fc,(int)uVar7)) {
          puVar12 = local_b4;
          uVar13 = 0x3c;
          uVar11 = *(undefined4 *)(local_120 + 0x44);
          uVar10 = *(undefined4 *)(local_120 + 0x40);
          uVar9 = FUN_004443a0(local_120);
          FUN_0045aec0(uVar9,uVar10,uVar11,puVar12,uVar13);
          FUN_0045aec0((int)uVar7,local_fc,*(undefined4 *)(local_120 + 0x40),
                       *(undefined4 *)(local_120 + 0x44),local_3c,0x3c);
        }
      }
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x2e0),local_110,1,0);
      free((void *)*pMem);
      if ((void *)pMem[1] != (void *)0x0) {
        free((void *)pMem[1]);
      }
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      iVar5 = local_110;
    }
    FUN_00404910(local_118,0);
    piVar4 = local_11c;
    if (0 < *local_11c) {
      FUN_004446a0(local_11c,1);
      local_108 = FUN_00415510(*(undefined4 *)(param_1 + 8),uVar2,local_11c);
      piVar4 = local_11c;
      if (local_108 != 0) {
        iVar6 = 0;
        iVar5 = *local_11c;
        if (0 < iVar5) {
          do {
            local_120 = *(int *)(piVar4[2] + iVar6 * 4);
            if ((*(byte *)(local_120 + 0x38) & 4) != 0) {
              local_10c = local_120;
              _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x2e8),0xffffffff,&local_10c,1);
              piVar4 = local_11c;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar5);
        }
      }
    }
  }
  if (piVar4 != (int *)0x0) {
    _SfList_Destroy_4(piVar4);
  }
  if (**(int **)(param_1 + 0x2e8) == 0) {
    return 0;
  }
  return local_108;
}


