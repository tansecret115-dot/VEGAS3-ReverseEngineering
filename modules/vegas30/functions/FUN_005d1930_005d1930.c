/* Module: vegas30.exe
   Function: FUN_005d1930
   Address: 005d1930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_005d1930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  HRESULT HVar1;
  int iVar2;
  LPCSTR lpString;
  HGLOBAL pvVar3;
  LPWSTR lpWideCharStr;
  LPVOID pMem;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  IStream *unaff_EDI;
  LPWSTR pWVar7;
  uint *puVar8;
  int *piVar9;
  LPWSTR *ppWVar10;
  undefined4 uVar11;
  LPWSTR *ppWVar12;
  LPWSTR *ppWStack_f8;
  int *piStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  LPWSTR *ppWStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined1 *puStack_cc;
  int *piStack_c8;
  int **ppiStack_c4;
  int *piStack_c0;
  LPWSTR pWStack_b4;
  int *piStack_b0;
  undefined1 *puStack_ac;
  uint *puStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  int *piStack_98;
  uint *puStack_94;
  int *piStack_78;
  IStream *local_4c [4];
  uint local_3c [9];
  int iStack_18;
  uint *puStack_c;
  
  *param_2 = 0;
  *param_3 = 0;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,local_4c);
  if (HVar1 < 0) {
    return HVar1;
  }
  local_3c[1] = 0;
  local_3c[0] = 0;
  HVar1 = (*local_4c[0]->lpVtbl->Write)(local_4c[0],local_3c + 1,4,(ULONG *)0x0);
  if (HVar1 < 0) goto LAB_005d1cb9;
  puVar6 = local_3c;
  iVar2 = (*local_4c[0]->lpVtbl->Write)();
  if (iVar2 < 0) {
    (*unaff_EDI->lpVtbl->Release)(unaff_EDI);
    return iVar2;
  }
  piStack_78 = (int *)puStack_c[1];
  if (DAT_0064a52c == 0) {
    if (piStack_78 == (int *)0x0) {
      return -0x7ff8ffa9;
    }
LAB_005d19f7:
    iVar2 = (**(code **)*piStack_78)();
    if (iVar2 < 0) {
      (**(code **)(*puVar6 + 8))();
      return iVar2;
    }
  }
  else {
    if (piStack_78 == (int *)0x0) {
      piStack_78 = (int *)puStack_c[7];
      if (piStack_78 == (int *)0x0) {
        (*unaff_EDI->lpVtbl->Release)(unaff_EDI);
        return -0x7ff8ffa9;
      }
      goto LAB_005d19f7;
    }
    iVar2 = (**(code **)*piStack_78)();
    if (iVar2 < 0) {
      (**(code **)(*puVar6 + 8))();
      return iVar2;
    }
  }
  iStack_18 = _SfPlugIn_FindNode_8();
  lpString = (LPCSTR)(iStack_18 + 0x20);
  iVar2 = lstrlenA(lpString);
  pvVar3 = GlobalAlloc(0x40,iVar2 * 2 + 2);
  lpWideCharStr = GlobalLock(pvVar3);
  uVar5 = iVar2 * 2 + 2;
  pWVar7 = lpWideCharStr;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pWVar7[0] = L'\0';
    pWVar7[1] = L'\0';
    pWVar7 = pWVar7 + 2;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)pWVar7 = 0;
    pWVar7 = (LPWSTR)((int)pWVar7 + 1);
  }
  puStack_a8 = puVar6;
  if (iStack_18 != 0) {
    puStack_94 = (uint *)0x5d1ac5;
    MultiByteToWideChar(0,1,lpString,-1,lpWideCharStr,iVar2 + 1);
    lpWideCharStr[iVar2] = L'\0';
    puStack_a8 = puVar6;
  }
  puVar6 = puStack_c;
  puVar8 = local_3c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_3c[0] = local_3c[0] & 0xfffffffe;
  (**(code **)(*puStack_a8 + 0x10))();
  iVar2 = 0x10;
  piStack_98 = piStack_78;
  puStack_9c = (undefined1 *)0x5d1b0a;
  puStack_94 = puStack_c + 3;
  (**(code **)(*piStack_78 + 0x10))();
  puStack_9c = &stack0xffffff84;
  piStack_a4 = (int *)&stack0xffffff80;
  uStack_a0 = 4;
  puStack_ac = (undefined1 *)0x5d1b20;
  (**(code **)(*puStack_a8 + 0x10))();
  puStack_ac = &stack0xffffff74;
  piStack_b0 = (int *)(iVar2 * 2 + 2);
  pWStack_b4 = lpWideCharStr;
  (**(code **)(*piStack_98 + 0x10))();
  piStack_c0 = (int *)0x5d1b42;
  pvVar3 = GlobalHandle(lpWideCharStr);
  piStack_c0 = (int *)0x5d1b49;
  GlobalUnlock(pvVar3);
  piStack_c0 = (int *)0x5d1b4c;
  pvVar3 = GlobalHandle(lpWideCharStr);
  piStack_c0 = (int *)0x5d1b53;
  GlobalFree(pvVar3);
  piVar9 = (int *)&stack0xffffff7c;
  piStack_c0 = piStack_a4;
  ppiStack_c4 = (int **)0x5d1b62;
  (**(code **)(*piStack_a4 + 0x1c))();
  ppiStack_c4 = &piStack_a4;
  puStack_cc = &stack0xffffff74;
  piStack_c8 = (int *)0x4;
  piStack_d0 = piStack_b0;
  uStack_d4 = 0x5d1b78;
  piStack_dc = piVar9;
  (**(code **)(*piStack_b0 + 0x10))();
  uStack_d4 = 1;
  piStack_d8 = piStack_c0;
  piStack_e0 = (int *)0x5d1b89;
  (**(code **)(*piStack_dc + 0x18))();
  piStack_e0 = piStack_c8;
  ppWStack_e4 = (LPWSTR *)0x5d1b93;
  (**(code **)(*piStack_c8 + 8))();
  pWStack_b4 = (LPWSTR)0x0;
  piStack_b0 = (int *)0x0;
  ppWStack_e4 = &pWStack_b4;
  piStack_e8 = (int *)0x1;
  uStack_ec = 0;
  uStack_f0 = 0;
  piStack_f4 = piStack_d0;
  ppWStack_f8 = (LPWSTR *)0x5d1bb2;
  iVar2 = (**(code **)(*piStack_d0 + 0x14))();
  if (iVar2 < 0) {
    ppWStack_f8 = ppWStack_e4;
    (**(code **)(*ppWStack_e4 + 4))();
    return iVar2;
  }
  ppWStack_f8 = (LPWSTR *)0x0;
  ppWVar12 = ppWStack_e4;
  iVar2 = (**(code **)(*ppWStack_e4 + 10))(ppWStack_e4,0,0);
  if (iVar2 < 0) {
    (**(code **)(*ppWStack_f8 + 4))(ppWStack_f8);
    return iVar2;
  }
  piStack_e8 = piStack_dc + -2;
  uVar11 = 4;
  ppWVar10 = ppWStack_f8;
  iVar2 = (**(code **)(*ppWStack_f8 + 8))(ppWStack_f8,&ppWStack_e4,4,0);
  if (iVar2 < 0) {
    (**(code **)(*ppWVar12 + 4))(ppWVar12);
    return iVar2;
  }
  (**(code **)(*ppWVar12 + 8))(ppWVar12,&ppWStack_f8,4,0);
  pvVar3 = GlobalAlloc(2,0);
  pMem = GlobalLock(pvVar3);
  if (pMem == (LPVOID)0x0) {
    (**(code **)(*ppWVar10 + 4))(ppWVar10);
    return -0x7ff8fff2;
  }
  piVar9 = (int *)0x0;
  (**(code **)(*ppWVar10 + 10))(ppWVar10,0,0,0);
  HVar1 = (**(code **)(*piVar9 + 0xc))(piVar9,pMem,uVar11,uStack_d4);
  if (HVar1 < 0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  else {
    *param_2 = pMem;
  }
LAB_005d1cb9:
  (*local_4c[0]->lpVtbl->Release)();
  return HVar1;
}


