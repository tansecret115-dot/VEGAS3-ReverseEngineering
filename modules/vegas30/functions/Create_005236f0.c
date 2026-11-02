/* Module: vegas30.exe
   Function: Create
   Address: 005236f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __stdcall _sfmarker::Create(struct IStream *,int,struct tSFLIST *,int) */

long _sfmarker::Create(IStream *param_1,int param_2,tSFLIST *param_3,int param_4)

{
  LARGE_INTEGER dlibMove;
  HRESULT HVar1;
  HGLOBAL pvVar2;
  long lVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  ULARGE_INTEGER *unaff_ESI;
  undefined4 *puVar7;
  ULARGE_INTEGER *unaff_EDI;
  uint uVar8;
  undefined4 *puVar9;
  int *in_stack_00000014;
  int in_stack_00000018;
  undefined4 uStack_7c;
  uint local_78;
  ULONG UStack_74;
  ULONG local_70 [2];
  uint uStack_68;
  undefined4 auStack_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [6];
  undefined4 uStack_10;
  int iStack_4;
  
                    /* 0x1236f0  7  ?Create@_sfmarker@@SGJPAUIStream@@HPAUtSFLIST@@H@Z */
  local_78 = 0;
  puVar7 = (undefined4 *)0x0;
  HVar1 = (*param_1->lpVtbl->Seek)(param_1,(LARGE_INTEGER)0x100000000,(DWORD)local_70,unaff_EDI);
  if ((-1 < HVar1) && (HVar1 = (*param_1->lpVtbl->Read)(param_1,&uStack_7c,4,local_70), -1 < HVar1))
  {
    if (local_70[0] != 4) {
      uStack_7c = 0;
    }
    dlibMove.s.HighPart = 0;
    dlibMove.s.LowPart = uStack_68;
    HVar1 = (*param_1->lpVtbl->Seek)(param_1,dlibMove,0,unaff_ESI);
    if (HVar1 < 0) {
      local_78 = 0;
    }
  }
  if ((((in_stack_00000014 != (int *)0x0) && (0 < *in_stack_00000014)) && (-1 < in_stack_00000018))
     && (in_stack_00000018 < *in_stack_00000014)) {
    local_70[0] = 1;
    puVar7 = *(undefined4 **)(in_stack_00000014[2] + in_stack_00000018 * 4);
    if (puVar7 == (undefined4 *)0x0) {
      return -0x7fffbffb;
    }
    if ((LPCVOID)puVar7[9] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)puVar7[9]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)puVar7[9]);
      GlobalFree(pvVar2);
    }
    if ((LPCVOID)puVar7[10] != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle((LPCVOID)puVar7[10]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)puVar7[10]);
      GlobalFree(pvVar2);
      puVar7[10] = 0;
    }
  }
  if (local_78 == 0x28) {
    puVar9 = auStack_60;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    lVar3 = (*param_1->lpVtbl->Read)(param_1,auStack_60,0x28,&UStack_74);
    if (-1 < lVar3) {
      if (UStack_74 != 0x28) {
        return -0x7ffb1ff8;
      }
      uVar6 = uStack_40 >> 1;
      uVar8 = uStack_3c >> 1;
      local_78 = uVar8;
      if (local_70[0] == 0) {
        puVar7 = auStack_28;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        uStack_30 = auStack_60[2];
        uStack_2c = auStack_60[3];
        auStack_28[0] = uStack_50;
        auStack_28[1] = uStack_4c;
        auStack_28[2] = uStack_48;
        uStack_10 = uStack_44;
        lVar3 = _SfList_AllocAndInsertItem_20
                          (in_stack_00000014,&uStack_30,uVar6 + 0x38,0xffffffff,&stack0x00000018);
        uVar8 = local_78;
      }
      else {
        *puVar7 = auStack_60[2];
        puVar7[1] = auStack_60[3];
        puVar7[2] = uStack_50;
        puVar7[3] = uStack_4c;
        puVar7[4] = uStack_48;
        puVar7[8] = uStack_44;
        lVar3 = _SfList_ReAllocItem_12(in_stack_00000014,in_stack_00000018,uVar6 + 0x38);
        if (lVar3 < 0) {
          return lVar3;
        }
      }
      iVar5 = *(int *)(in_stack_00000014[2] + in_stack_00000018 * 4);
      if (uVar6 == 0) {
        *(undefined1 *)(iVar5 + 0x30) = 0;
      }
      else {
        lVar3 = FUN_00523b50(param_3,iVar5 + 0x30,uStack_40);
        if (lVar3 < 0) {
          return lVar3;
        }
      }
      if (uVar8 != 0) {
        pvVar2 = GlobalAlloc(0x42,uVar8);
        pvVar4 = GlobalLock(pvVar2);
        *(LPVOID *)(iVar5 + 0x24) = pvVar4;
        if (pvVar4 == (LPVOID)0x0) {
          return -0x7ff8fff2;
        }
        lVar3 = FUN_00523b50(param_3,pvVar4,uStack_3c);
        return lVar3;
      }
      *(undefined4 *)(iVar5 + 0x24) = 0;
      return lVar3;
    }
  }
  else if (local_78 == 0x30) {
    puVar9 = auStack_60;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    lVar3 = (*param_1->lpVtbl->Read)(param_1,auStack_60,0x30,&UStack_74);
    if (-1 < lVar3) {
      if (UStack_74 != 0x30) {
        return -0x7ffb1ff8;
      }
      uVar6 = uStack_40 >> 1;
      uVar8 = uStack_3c >> 1;
      local_78 = uVar8;
      if (local_70[0] == 0) {
        puVar7 = auStack_28;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        uStack_30 = auStack_60[2];
        uStack_2c = auStack_60[3];
        auStack_28[0] = uStack_50;
        auStack_28[1] = uStack_4c;
        auStack_28[2] = uStack_48;
        uStack_10 = uStack_44;
        iStack_4 = iStack_38;
        lVar3 = _SfList_AllocAndInsertItem_20
                          (in_stack_00000014,&uStack_30,uVar6 + 0x38,0xffffffff,&stack0x00000018);
        uVar8 = local_78;
      }
      else {
        *puVar7 = auStack_60[2];
        puVar7[1] = auStack_60[3];
        puVar7[2] = uStack_50;
        puVar7[3] = uStack_4c;
        puVar7[4] = uStack_48;
        puVar7[8] = uStack_44;
        puVar7[0xb] = iStack_38;
        lVar3 = _SfList_ReAllocItem_12(in_stack_00000014,in_stack_00000018,uVar6 + 0x38);
        if (lVar3 < 0) {
          return lVar3;
        }
      }
      iVar5 = *(int *)(in_stack_00000014[2] + in_stack_00000018 * 4);
      if (uVar6 == 0) {
        *(undefined1 *)(iVar5 + 0x30) = 0;
      }
      else {
        lVar3 = FUN_00523b50(param_3,iVar5 + 0x30,uStack_40);
        if (lVar3 < 0) {
          return lVar3;
        }
      }
      if (uVar8 == 0) {
        *(undefined4 *)(iVar5 + 0x24) = 0;
      }
      else {
        pvVar2 = GlobalAlloc(0x42,uVar8);
        pvVar4 = GlobalLock(pvVar2);
        *(LPVOID *)(iVar5 + 0x24) = pvVar4;
        if (pvVar4 == (LPVOID)0x0) {
          return -0x7ff8fff2;
        }
        lVar3 = FUN_00523b50(param_3,pvVar4,uStack_3c);
        if (lVar3 < 0) {
          return lVar3;
        }
      }
      if (iStack_38 == 0x676e6463) {
        lVar3 = FUN_0043e980(param_3,iVar5);
        return lVar3;
      }
    }
  }
  else {
    lVar3 = -0x7ffb1f7d;
  }
  return lVar3;
}


