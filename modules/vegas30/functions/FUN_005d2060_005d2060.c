/* Module: vegas30.exe
   Function: FUN_005d2060
   Address: 005d2060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Exceeded maximum restarts with more pending */

LPCWSTR FUN_005d2060(int *param_1,IStream *param_2)

{
  char cVar1;
  IStreamVtbl *cb;
  undefined4 *puVar2;
  IStream *This;
  ulong uVar3;
  undefined1 *puVar4;
  LPCWSTR pWVar5;
  HGLOBAL pvVar6;
  HRESULT HVar7;
  byte bVar8;
  int iVar9;
  int *unaff_EBX;
  uint uVar10;
  uint uVar11;
  IID *rclsid;
  uint *puVar12;
  IStream *pIVar13;
  HRESULT HVar14;
  int *piStack_8c;
  LPCWSTR pWStack_88;
  ULONG UStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  IID *pIStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  int *piStack_5c;
  uint *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  IStream *pIStack_4c;
  LPSTR lpMultiByteStr;
  int iVar15;
  int *piVar16;
  int *piStack_1c;
  uint *puStack_10;
  int *piStack_c;
  
  pIVar13 = param_2;
  cb = param_2[1].lpVtbl;
  pWVar5 = (LPCWSTR)CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_2);
  if ((int)pWVar5 < 0) {
    return pWVar5;
  }
  pIStack_4c = (IStream *)0x5d2096;
  pWVar5 = (LPCWSTR)(*param_2->lpVtbl->Write)(param_2,pIVar13 + 2,(ULONG)cb,(ULONG *)0x0);
  if ((int)pWVar5 < 0) goto LAB_005d2518;
  piVar16 = (int *)0x0;
  iVar15 = 0;
  lpMultiByteStr = (LPSTR)0x0;
  pIStack_4c = param_2;
  puStack_50 = (undefined1 *)0x5d20b2;
  pWVar5 = (LPCWSTR)(*param_2->lpVtbl->Seek)();
  if ((int)pWVar5 < 0) {
    uStack_54 = 0x5d20c6;
    (**(code **)(*piStack_c + 8))();
    return pWVar5;
  }
  if (param_1 == (int *)0x0) {
    puVar12 = puStack_10;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  }
  puStack_50 = &stack0xffffffcc;
  uStack_54 = 4;
  puStack_58 = puStack_10;
  piStack_5c = piStack_c;
  puStack_60 = (undefined1 *)0x5d2109;
  (**(code **)(*piStack_c + 0xc))();
  if (param_1 == (int *)0x0) {
    *puStack_10 = *puStack_10 & 0xfffffffe;
  }
  puStack_60 = &stack0xffffffbc;
  rclsid = (IID *)(puStack_10 + 3);
  uStack_64 = 0x10;
  uStack_70 = (undefined4 *)0x5d2128;
  pIStack_68 = rclsid;
  (**(code **)(*piStack_1c + 0xc))();
  uStack_70 = &uStack_54;
  UStack_74 = 4;
  (**(code **)(*unaff_EBX + 0xc))();
  pWStack_88 = 
  L"ｐ㰕惃贀⑔謘诸⑄剀咋․ࢋ咍Ȓ坒ｐ౑沋䐤\xed85ぴ岋䠤ﾅ౴荦?ٵ䗆";
  pvVar6 = GlobalAlloc(0x40,(int)puStack_60 * 2 + 2);
  piStack_8c = piVar16;
  pWVar5 = GlobalLock(pvVar6);
  pWStack_88 = pWVar5;
  piVar16 = piStack_8c;
  (**(code **)(*piStack_8c + 0xc))();
  if (lpMultiByteStr != (LPSTR)0x0) {
    if ((pWVar5 == (LPCWSTR)0x0) || (*pWVar5 != L'\0')) {
      WideCharToMultiByte(0,0,pWVar5,-1,lpMultiByteStr,iVar15,(LPCSTR)0x0,(LPBOOL)0x0);
      param_1 = piVar16;
    }
    else {
      *lpMultiByteStr = '\0';
      param_1 = piVar16;
    }
    lpMultiByteStr[iVar15 + -1] = '\0';
  }
  pvVar6 = GlobalHandle(pWVar5);
  GlobalUnlock(pvVar6);
  pvVar6 = GlobalHandle(pWVar5);
  GlobalFree(pvVar6);
  puVar12 = &uStack_6c;
  uStack_6c = 0;
  pIStack_68 = (IID *)0x0;
  HVar14 = 4;
  pIVar13 = pIStack_4c;
  (*pIStack_4c->lpVtbl->Read)(pIStack_4c,puVar12,4,&UStack_74);
  piStack_8c = (int *)0x0;
  if (param_1 == (int *)0x0) {
    if (DAT_0064ab78 != 0) {
      _fpreset();
    }
    HVar7 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_8c);
    if (HVar7 < 0) {
      uVar10 = 0xaa000000;
      uVar11 = 0xbaa26b00;
      UStack_74 = rclsid->Data1;
      puVar2 = (undefined4 *)puStack_10[4];
      uStack_6c = puStack_10[5];
      pIStack_68 = (IID *)puStack_10[6];
      bVar8 = 0;
      if (((short)puVar2 == 0xf56) &&
         (uStack_70._2_2_ = (short)((uint)puVar2 >> 0x10), uStack_70._2_2_ == 0x11d2)) {
        iVar15 = 0;
        do {
          cVar1 = *(char *)((int)&uStack_6c + iVar15);
          if (cVar1 != (&DAT_006467a8)[iVar15]) {
            bVar8 = bVar8 | 1;
          }
          if (cVar1 != (&DAT_006467a0)[iVar15]) {
            bVar8 = bVar8 | 2;
          }
          if (cVar1 != (&DAT_00646798)[iVar15]) {
            bVar8 = bVar8 | 4;
          }
          if (bVar8 == 7) goto LAB_005d235d;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 8);
        uVar10 = 0xa0000000;
        uVar11 = 0x5b7269c9;
      }
LAB_005d235d:
      if (((puStack_10[6] & 0x7abe8f00) == 0x7abe8f00) ||
         ((puStack_10[6] & 0xb6de8f00) == 0xb6de8f00)) {
        puStack_10[5] = puStack_10[5] & 0xffff;
        puStack_10[6] = 0;
        puStack_10[5] = puStack_10[5] | uVar10;
        puStack_10[6] = puStack_10[6] | uVar11;
      }
      uStack_70 = puVar2;
      if (DAT_0064ab78 != 0) {
        _fpreset();
      }
      HVar7 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_8c);
      if (HVar7 < 0) {
        uVar3 = rclsid->Data1;
        uVar10 = puStack_10[4];
        uVar11 = puStack_10[5];
        pIStack_68 = (IID *)puStack_10[6];
        iVar15 = _SfGraph_MapFxGUID_OriginalToVegasVideo_4(rclsid);
        if (-1 < iVar15) {
          if (DAT_0064ab78 != 0) {
            _fpreset();
          }
          HVar7 = CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_8c);
          if (-1 < HVar7) goto LAB_005d24a3;
          rclsid->Data1 = uVar3;
          puStack_10[4] = uVar10;
          puStack_10[5] = uVar11;
          puStack_10[6] = (uint)pIStack_68;
        }
        uVar3 = rclsid->Data1;
        uVar10 = puStack_10[4];
        uStack_6c = puStack_10[5];
        pIStack_68 = (IID *)puStack_10[6];
        pWVar5 = (LPCWSTR)_SfGraph_MapFxGUID_VegasVideoToOriginal_4(rclsid);
        if ((int)pWVar5 < 0) {
LAB_005d248d:
          (**(code **)(*piStack_5c + 8))(piStack_5c);
          return pWVar5;
        }
        if (DAT_0064ab78 != 0) {
          _fpreset();
        }
        pWVar5 = (LPCWSTR)CoCreateInstance(rclsid,(LPUNKNOWN)0x0,3,(IID *)&DAT_00633738,&piStack_8c)
        ;
        if ((int)pWVar5 < 0) {
          rclsid->Data1 = uVar3;
          puStack_10[4] = uVar10;
          puStack_10[5] = uStack_6c;
          puStack_10[6] = (uint)pIStack_68;
          goto LAB_005d248d;
        }
      }
    }
LAB_005d24a3:
    puVar4 = puStack_60;
    iVar15 = FUN_005d0d40(rclsid->Data1,puStack_10[4],puStack_10[5],puStack_10[6],piStack_8c,
                          puStack_60 + 4);
    if (iVar15 < 0) {
      pWStack_88 = (LPCWSTR)(**(code **)*piStack_8c)(piStack_8c,&DAT_0062f6f8,puVar4 + 0x1c);
      goto LAB_005d24ec;
    }
LAB_005d24f4:
    pWVar5 = (LPCWSTR)(**(code **)(*piStack_8c + 0x14))
                                (piStack_8c,piStack_5c,pIVar13,puVar12,HVar14);
    if ((int)pWVar5 < 0) {
      pWVar5 = (LPCWSTR)0x4e009;
    }
  }
  else {
    pIStack_4c = (IStream *)0x0;
    if (DAT_0064a52c == 0) {
      if (((puStack_60 != (undefined1 *)0x0) &&
          (puVar2 = *(undefined4 **)(puStack_60 + 4), puVar2 != (undefined4 *)0x0)) &&
         (pWStack_88 = (LPCWSTR)(**(code **)*puVar2)(puVar2,&DAT_0062f6f8,&pIStack_4c),
         pIStack_4c != (IStream *)0x0)) {
        HVar14 = (*pIStack_4c->lpVtbl->QueryInterface)(pIStack_4c,(IID *)&DAT_00633738,&piStack_8c);
        (**(code **)(*puStack_58 + 8))(puStack_58);
      }
    }
    else if (puStack_60 != (undefined1 *)0x0) {
      puVar2 = *(undefined4 **)(puStack_60 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        This = *(IStream **)(puStack_60 + 0x1c);
        if (This == (IStream *)0x0) goto LAB_005d24ec;
        pIStack_4c = This;
        (*This->lpVtbl->AddRef)(This);
      }
      else {
        pWStack_88 = (LPCWSTR)(**(code **)*puVar2)(puVar2,&DAT_0062f6f8,&pIStack_4c);
      }
      if (pIStack_4c != (IStream *)0x0) {
        HVar14 = (*pIStack_4c->lpVtbl->QueryInterface)(pIStack_4c,(IID *)&DAT_00633738,&piStack_8c);
        (**(code **)(*puStack_58 + 8))(puStack_58);
      }
    }
LAB_005d24ec:
    pWVar5 = pWStack_88;
    if (-1 < (int)pWStack_88) goto LAB_005d24f4;
  }
  (**(code **)(*piStack_8c + 8))(piStack_8c);
LAB_005d2518:
  (*param_2->lpVtbl->Release)();
  return pWVar5;
}


