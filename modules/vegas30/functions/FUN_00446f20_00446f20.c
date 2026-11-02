/* Module: vegas30.exe
   Function: FUN_00446f20
   Address: 00446f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00446f20(int param_1)

{
  LPSTREAM pIVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  SIZE_T dwBytes;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  int iVar8;
  WPARAM wParam;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  HRESULT HVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  LPARAM lParam;
  LPSTREAM local_22c;
  tSFLIST *local_228;
  int local_224;
  LPSTREAM local_220;
  int local_21c;
  IStream *local_218;
  HGLOBAL local_214;
  int local_210;
  undefined4 *local_20c;
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  HVar12 = 0;
  local_224 = 2;
  if (param_1 != 0) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      local_224 = (-(uint)((*(uint *)(param_1 + 0x9c) & 0x200) != 0) & 0xfffffffe) + 5;
      break;
    case 2:
    case 4:
    case 6:
      local_224 = 3;
      break;
    case 3:
      local_224 = 4;
      break;
    case 5:
      local_224 = 6;
      break;
    case 7:
    case 8:
      local_224 = 5;
    }
  }
  local_210 = FUN_00445160(param_1);
  uVar11 = 0x20;
  if ((local_224 == 5) || (local_224 == 6)) {
    uVar11 = 1;
  }
  local_228 = (tSFLIST *)FUN_004452b0(param_1);
  if (local_228 == (tSFLIST *)0x0) {
    local_220 = (IStream *)0x0;
  }
  else {
    local_220 = *(LPSTREAM *)local_228;
  }
  iVar4 = param_1 + 0x268;
  uVar2 = _SfGetString_8(DAT_00647204,0x50bf);
  SfPrintF(local_104,uVar2,iVar4);
  puVar3 = (undefined4 *)FUN_0052b130(uVar11);
  puVar3[1] = 0;
  *puVar3 = uVar11;
  uVar15 = FUN_00445b50(param_1);
  *(undefined8 *)(puVar3 + 4) = uVar15;
  local_21c = 0;
  if (0 < (int)local_220) {
    do {
      if (HVar12 < 0) goto LAB_004473f3;
      HVar12 = _SfList_AllocItem_12(puVar3[2],0x124,&local_20c);
      puVar13 = local_20c;
      local_218 = *(IStream **)(*(int *)(local_228 + 8) + local_21c * 4);
      if (local_20c != (undefined4 *)0x0) {
        *local_20c = local_218->lpVtbl;
        local_20c[1] = local_218[1].lpVtbl;
        local_20c[2] = local_218[2].lpVtbl;
        local_20c[3] = local_218[3].lpVtbl;
        iVar4 = FUN_00508960(local_208,local_218,0x104);
        if (iVar4 == 0) {
          _SfLoadString_16(DAT_00647204,0x5078,puVar13 + 4,0x104);
        }
        else {
          FUN_0050ab70(local_208,puVar13 + 4,0x104);
        }
        local_22c = (LPSTREAM)0x0;
        HVar12 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_22c);
        if ((HVar12 < 0) ||
           (HVar12 = tSFVIDEOFILTERCACHE::Persist(local_218,(int)local_22c), HVar12 < 0))
        goto LAB_004473f3;
        GetHGlobalFromStream(local_22c,&local_214);
        dwBytes = GlobalSize(local_214);
        puVar13[0x45] = dwBytes;
        pvVar5 = GlobalAlloc(0x40,dwBytes);
        pvVar6 = GlobalLock(pvVar5);
        puVar13[0x46] = pvVar6;
        if (pvVar6 == (LPVOID)0x0) break;
        uVar10 = puVar13[0x45];
        puVar7 = GlobalLock(local_214);
        puVar14 = (undefined4 *)puVar13[0x46];
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar14 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        puVar13[0x47] = 0;
        puVar13[0x48] = 0;
        HVar12 = _SfList_InsertList_16(puVar3[2],0xffffffff,0,0xffffffff);
        puVar3[1] = puVar3[1] + 1;
        GlobalUnlock(local_214);
        if (local_22c != (IStream *)0x0) {
          (*local_22c->lpVtbl->Release)(local_22c);
        }
      }
      local_21c = local_21c + 1;
    } while (local_21c < (int)local_220);
    if (HVar12 < 0) goto LAB_004473f3;
  }
  if (puVar3 != (undefined4 *)0x0) {
    HVar12 = FUN_0052b020(DAT_00647624,local_104,local_224,puVar3,&local_228,1,1,&local_210,1);
    if ((undefined4 *)puVar3[2] == (undefined4 *)0x0) {
      local_22c = (LPSTREAM)0x0;
    }
    else {
      local_22c = *(LPSTREAM *)puVar3[2];
    }
    pIVar1 = local_22c;
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x10;
    if ((HVar12 == 0) && (((local_224 != 5 && (local_224 != 6)) || (local_22c != (LPSTREAM)0x0)))) {
      FUN_00445080(param_1,0);
      FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
      _SfVideoPlugin_DestroyCacheList_4(local_228);
      local_228 = (tSFLIST *)0x0;
      if (0 < (int)pIVar1) {
        HVar12 = _SfVideoPlugin_CreateCacheList_4(&local_228);
      }
      local_21c = 0;
      if (0 < (int)local_22c) {
        do {
          iVar4 = local_21c;
          if (HVar12 < 0) break;
          iVar8 = *(int *)(*(int *)(puVar3[2] + 8) + local_21c * 4);
          if (*(int *)(iVar8 + 0x118) == 0) {
            iVar8 = FUN_005a24e0(&local_228,iVar8,DAT_0064b50c,0xffffff9c,0);
            if (iVar8 != 0) {
              FUN_00446c80(param_1,iVar8);
            }
          }
          else {
            local_220 = (IStream *)0x0;
            pvVar5 = GlobalAlloc(2,*(SIZE_T *)(iVar8 + 0x114));
            if (pvVar5 == (HGLOBAL)0x0) break;
            local_218 = *(IStream **)(iVar8 + 0x114);
            puVar13 = *(undefined4 **)(iVar8 + 0x118);
            puVar7 = GlobalLock(pvVar5);
            for (uVar10 = (uint)local_218 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar7 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar7 = puVar7 + 1;
            }
            for (uVar10 = (uint)local_218 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar7 = *(undefined1 *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            HVar12 = CreateStreamOnHGlobal(pvVar5,0,&local_220);
            if ((HVar12 < 0) ||
               (HVar12 = tSFVIDEOFILTERCACHE::Create
                                   (local_220,0,&local_228,(tSFGUIDTRANSLATIONTABLE *)&DAT_00646c70,
                                    DAT_00646c90,(_GUID *)0x0), HVar12 < 0)) break;
            GlobalUnlock(pvVar5);
            if (local_220 != (IStream *)0x0) {
              (*local_220->lpVtbl->Release)(local_220);
            }
            GlobalFree(pvVar5);
            FUN_00446c80(param_1,*(undefined4 *)
                                  (*(int *)(local_228 + 8) + -4 + *(int *)local_228 * 4));
            iVar4 = local_21c;
          }
          local_21c = iVar4 + 1;
        } while (local_21c < (int)local_22c);
      }
      if (local_22c == (LPSTREAM)0x1) {
        FUN_0053ec50(*(undefined4 *)(param_1 + 0x80),0,0);
      }
      FUN_00446de0(param_1,local_228);
      FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
    }
    FUN_0052b170(puVar3,1);
    FUN_004464a0(param_1);
  }
LAB_004473f3:
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffef;
  if (local_210 < 0) {
    iVar8 = 0;
  }
  else {
    if (local_228 == (tSFLIST *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)local_228;
    }
    iVar8 = local_210;
    if (iVar4 + -1 < local_210) {
      if (local_228 == (tSFLIST *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)local_228;
      }
      iVar8 = iVar8 + -1;
    }
  }
  FUN_00445200(param_1,iVar8);
  FUN_00446940(param_1);
  lParam = 0;
  wParam = FUN_00445160(param_1);
  SendMessageA(*(HWND *)(param_1 + 0x144),0x602,wParam,lParam);
  *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 0x100;
  *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 8;
  DAT_0064767c = DAT_0064767c | 0x800;
  if (HVar12 != 0) {
    return 0;
  }
  SetFocus(*(HWND *)(param_1 + 8));
  return 1;
}


