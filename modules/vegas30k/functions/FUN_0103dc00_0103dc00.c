/* Module: vegas30k.dll
   Function: FUN_0103dc00
   Address: 0103dc00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0103dc00(LPSTREAM param_1,undefined4 *param_2)

{
  LPSTR lpMultiByteStr;
  _func_5233 **lpWideCharStr;
  IStreamVtbl *pIVar1;
  int iVar2;
  LPSTREAM pIVar3;
  undefined4 *puVar4;
  HGLOBAL pvVar5;
  undefined4 *puVar6;
  int iVar7;
  LPVOID pMem;
  uint *puVar8;
  uint uVar9;
  int *unaff_EBX;
  code *pcVar10;
  SIZE_T unaff_EDI;
  undefined4 *unaff_retaddr;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  LPSTREAM *ppIVar14;
  int *piVar15;
  LPSTREAM local_14;
  undefined4 uStack_10;
  undefined4 *local_c;
  int *piStack_8;
  
  *param_2 = 0;
  pvVar5 = GlobalAlloc(0x40,0xc);
  puVar6 = GlobalLock(pvVar5);
  pIVar3 = param_1;
  *puVar6 = param_1[0xe9].lpVtbl;
  iVar7 = _SfList_CreateExZ_32(puVar6 + 2);
  pIVar1 = pIVar3[0xe7].lpVtbl;
  local_14 = (LPSTREAM)0x0;
  while( true ) {
    pcVar10 = GlobalHandle_exref;
    if ((pIVar1 == (IStreamVtbl *)0x0) ||
       (iVar7 = _SfList_AllocItem_12(), puVar4 = local_c, pcVar10 = GlobalHandle_exref,
       local_c == (undefined4 *)0x0)) goto LAB_0103dfbb;
    lpMultiByteStr = (LPSTR)(local_c + 4);
    *local_c = pIVar1[9].Read;
    local_c[1] = pIVar1[9].Write;
    local_c[2] = pIVar1[9].Seek;
    local_c[3] = pIVar1[9].SetSize;
    lpWideCharStr = &pIVar1->AddRef;
    if ((lpWideCharStr == (_func_5233 **)0x0) || (*(short *)lpWideCharStr != 0)) {
      WideCharToMultiByte(0,0,(LPCWSTR)lpWideCharStr,-1,lpMultiByteStr,0x104,(LPCSTR)0x0,(LPBOOL)0x0
                         );
    }
    else if (lpMultiByteStr != (LPSTR)0x0) {
      *lpMultiByteStr = '\0';
    }
    *(undefined1 *)((int)puVar4 + 0x113) = 0;
    iVar7 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_1);
    if (iVar7 < 0) {
      _SfList_DeleteList_16();
      pcVar10 = GlobalHandle_exref;
      goto LAB_0103dfbb;
    }
    (**(code **)(**(int **)(pIVar1->QueryInterface + 0x30) + 0x18))();
    ppIVar14 = &local_14;
    uVar13 = 1;
    local_14 = (LPSTREAM)0x0;
    uStack_10 = 0;
    piVar12 = (int *)0x0;
    (**(code **)(*piStack_8 + 0x14))(piStack_8);
    pvVar5 = GlobalAlloc(2,unaff_EDI);
    pMem = GlobalLock(pvVar5);
    if (pMem == (LPVOID)0x0) {
      _SfList_DeleteList_16(ppIVar14[2],0xffffffff,0xffffffff,0);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      iVar7 = -0x7ff8fff2;
      param_1 = local_14;
      pcVar10 = GlobalHandle_exref;
      goto joined_r0x0103de64;
    }
    piVar15 = (int *)0x0;
    uVar11 = 0;
    (**(code **)(*unaff_EBX + 0x14))(unaff_EBX,0,0,0,0);
    iVar7 = (**(code **)(*piVar15 + 0xc))(piVar15,pMem,uVar13,&stack0xffffffbc);
    pcVar10 = GlobalHandle_exref;
    if (iVar7 < 0) {
      pvVar5 = GlobalHandle(pMem);
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(pMem);
      GlobalFree(pvVar5);
      (**(code **)(*piVar12 + 8))(piVar12);
      _SfList_DeleteList_16();
      goto LAB_0103dfbb;
    }
    puVar4[0x46] = pMem;
    puVar4[0x45] = uVar11;
    (**(code **)(*piVar12 + 8))(piVar12);
    pvVar5 = GlobalAlloc(0x40,4);
    puVar8 = GlobalLock(pvVar5);
    piVar12 = (int *)FUN_011376b0();
    uVar9 = (**(code **)(*piVar12 + 0x48))();
    *puVar8 = (*puVar8 ^ uVar9) & 1 ^ *puVar8;
    puVar4[0x48] = puVar8;
    puVar4[0x47] = 4;
    iVar7 = _SfList_InsertList_16();
    if (iVar7 < 0) break;
    local_14 = (LPSTREAM)((int)&local_14->lpVtbl + 1);
    puVar6[1] = puVar6[1] + 1;
    pIVar1 = (IStreamVtbl *)pIVar1[9].UnlockRegion;
  }
  if ((LPCVOID)puVar4[0x48] != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle((LPCVOID)puVar4[0x48]);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle((LPCVOID)puVar4[0x48]);
    GlobalFree(pvVar5);
  }
  if ((LPCVOID)puVar4[0x46] != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle((LPCVOID)puVar4[0x46]);
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle((LPCVOID)puVar4[0x46]);
    GlobalFree(pvVar5);
  }
  _SfList_DeleteList_16();
  pcVar10 = GlobalHandle_exref;
LAB_0103dfbb:
  param_1 = local_14;
  if (-1 < iVar7) {
    *param_2 = puVar6;
    return iVar7;
  }
joined_r0x0103de64:
  while (param_1 = (LPSTREAM)((int)&param_1[-1].lpVtbl + 3), 0 < (int)param_1) {
    iVar2 = *(int *)(*(int *)(puVar6[2] + 8) + (int)param_1 * 4);
    if (*(int *)(iVar2 + 0x120) != 0) {
      pvVar5 = (HGLOBAL)(*pcVar10)();
      GlobalUnlock(pvVar5);
      pvVar5 = (HGLOBAL)(*pcVar10)();
      GlobalFree(pvVar5);
    }
    if (*(int *)(iVar2 + 0x118) != 0) {
      pvVar5 = (HGLOBAL)(*pcVar10)();
      GlobalUnlock(pvVar5);
      pvVar5 = (HGLOBAL)(*pcVar10)();
      GlobalFree(pvVar5);
    }
    _SfList_DeleteList_16();
  }
  _SfList_Destroy_4();
  pvVar5 = (HGLOBAL)(*pcVar10)();
  GlobalUnlock(pvVar5);
  pvVar5 = (HGLOBAL)(*pcVar10)();
  GlobalFree(pvVar5);
  *unaff_retaddr = 0;
  return iVar7;
}


