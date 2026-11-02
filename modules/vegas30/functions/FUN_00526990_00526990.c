/* Module: vegas30.exe
   Function: FUN_00526990
   Address: 00526990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00526990(LPSTREAM param_1)

{
  _func_5232 *p_Var1;
  _func_5232 *p_Var2;
  IStream *pIVar3;
  LPSTREAM pIVar4;
  undefined4 *puVar5;
  IStreamVtbl *pIVar6;
  int iVar7;
  HRESULT HVar8;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  LPVOID pvVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  HGLOBAL local_14;
  int local_10;
  int local_c;
  undefined4 *local_8 [2];
  
  pIVar4 = param_1;
  lVar13 = 0;
  pIVar6 = param_1[0x21].lpVtbl;
  p_Var1 = (param_1[0x4b].lpVtbl)->QueryInterface;
  p_Var2 = pIVar6->QueryInterface;
  if (p_Var1 == (_func_5232 *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)p_Var1;
  }
  if (pIVar6 != (IStreamVtbl *)0x0) {
    FUN_0052b170(pIVar6,1);
  }
  pIVar6 = (IStreamVtbl *)FUN_0052b130(p_Var2);
  pIVar4[0x21].lpVtbl = pIVar6;
  pIVar6->AddRef = (_func_5233 *)0x0;
  local_10 = 0;
  if (0 < local_c) {
    do {
      if (lVar13 < 0) {
        return lVar13;
      }
      lVar13 = _SfList_AllocItem_12((pIVar4[0x21].lpVtbl)->Release,0x124,local_8);
      puVar5 = local_8[0];
      pIVar3 = *(IStream **)(*(int *)((pIVar4[0x4b].lpVtbl)->QueryInterface + 8) + local_10 * 4);
      if (local_8[0] != (undefined4 *)0x0) {
        puVar10 = local_8[0] + 4;
        *local_8[0] = pIVar3->lpVtbl;
        local_8[0][1] = pIVar3[1].lpVtbl;
        local_8[0][2] = pIVar3[2].lpVtbl;
        local_8[0][3] = pIVar3[3].lpVtbl;
        iVar7 = FUN_00508960(puVar10,pIVar3,0x104);
        if (iVar7 == 0) {
          _SfLoadString_16(DAT_00647204,0x5078,puVar10,0x104);
        }
        param_1 = (LPSTREAM)0x0;
        HVar8 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_1);
        if (HVar8 < 0) {
          return HVar8;
        }
        lVar13 = tSFVIDEOFILTERCACHE::Persist(pIVar3,(int)param_1);
        if (lVar13 < 0) {
          return lVar13;
        }
        GetHGlobalFromStream(param_1,&local_14);
        dwBytes = GlobalSize(local_14);
        puVar5[0x45] = dwBytes;
        hMem = GlobalAlloc(0x40,dwBytes);
        pvVar9 = GlobalLock(hMem);
        puVar5[0x46] = pvVar9;
        if (pvVar9 == (LPVOID)0x0) break;
        uVar12 = puVar5[0x45];
        puVar10 = GlobalLock(local_14);
        puVar14 = (undefined4 *)puVar5[0x46];
        for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar14 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar14 = puVar14 + 1;
        }
        for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)puVar14 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        puVar5[0x47] = 0;
        puVar5[0x48] = 0;
        lVar13 = _SfList_InsertList_16((pIVar4[0x21].lpVtbl)->Release,0xffffffff,0,0xffffffff);
        (pIVar4[0x21].lpVtbl)->AddRef = (pIVar4[0x21].lpVtbl)->AddRef + 1;
        GlobalUnlock(local_14);
        if (param_1 != (IStream *)0x0) {
          (*param_1->lpVtbl->Release)(param_1);
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_c);
    if (lVar13 < 0) {
      return lVar13;
    }
  }
  FUN_005249d0(pIVar4);
  FUN_00524880(pIVar4);
  return lVar13;
}


