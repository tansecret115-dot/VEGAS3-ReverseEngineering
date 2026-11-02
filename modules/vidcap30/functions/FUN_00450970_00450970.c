/* Module: vidcap30.exe
   Function: FUN_00450970
   Address: 00450970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00450970(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  SIZE_T unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  CHAR *pCVar4;
  int *piStack_14c;
  LPCSTR pCStack_148;
  LPCSTR pCStack_144;
  LPCSTR pCStack_140;
  SIZE_T local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  CHAR local_11c [4];
  CHAR local_118 [232];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  SIZE_T SStack_28;
  int iStack_14;
  
  pCVar4 = local_118;
  for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar4[0] = '\0';
    pCVar4[1] = '\0';
    pCVar4[2] = '\0';
    pCVar4[3] = '\0';
    pCVar4 = pCVar4 + 4;
  }
  pCStack_140 = local_11c;
  pCStack_148 = local_118;
  pCStack_144 = (LPCSTR)0x4;
  piStack_14c = param_1;
  local_12c = 0;
  local_120 = 0;
  local_128 = 0;
  local_124 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (iVar3 < 0) {
    return iVar3;
  }
  if (local_12c != 4) {
    return -0x7ffb1ff8;
  }
  iVar3 = 0x114;
  if (local_128 < 0x119) {
    iVar3 = local_128 - 4;
  }
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&local_124,iVar3,&local_12c);
  if (iVar1 < 0) {
    return iVar1;
  }
  if (iVar3 != unaff_EDI) {
    return -0x7ffb1ff8;
  }
  if (0x118 < unaff_ESI) {
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,unaff_ESI - 0x118,0,1,0);
  }
  if (iVar1 < 0) {
    return iVar1;
  }
  if (((unaff_EBP != 0x10000) && (unaff_EBP != 0x20000)) && (unaff_EBP != 0x30000)) {
    return -0x7ffb1fe4;
  }
  DAT_005bba90 = 1;
  DAT_005bba8c = *(undefined4 *)(iStack_14 + 0x518);
  *(undefined4 *)(iStack_14 + 0x518) = uStack_30;
  *(undefined4 *)(iStack_14 + 0x51c) = uStack_2c;
  if (unaff_EBX == 0) {
    *(undefined1 *)(iStack_14 + 0xbc) = 0;
LAB_00450ae6:
    if (local_12c == 0) {
      *(undefined1 *)(iStack_14 + 0x1e0) = 0;
    }
    else {
      pvVar2 = GlobalAlloc(0x40,local_12c);
      pCStack_140 = GlobalLock(pvVar2);
      if (pCStack_140 == (LPCSTR)0x0) goto LAB_00450c2d;
      iVar1 = FUN_00451430(param_1,pCStack_140,local_12c);
      if (iVar1 < 0) goto LAB_00450c32;
      lstrcpynA((LPSTR)(iStack_14 + 0x1e0),pCStack_140,0x104);
      *(undefined1 *)(iStack_14 + 0x2e3) = 0;
    }
    if (local_128 == 0) {
      *(undefined1 *)(iStack_14 + 0x2e4) = 0;
    }
    else {
      pvVar2 = GlobalAlloc(0x40,local_128);
      pCStack_148 = GlobalLock(pvVar2);
      if (pCStack_148 == (LPCSTR)0x0) goto LAB_00450c2d;
      iVar1 = FUN_00451430(param_1,pCStack_148,local_128);
      if (iVar1 < 0) goto LAB_00450c32;
      lstrcpynA((LPSTR)(iStack_14 + 0x2e4),pCStack_148,0x104);
      *(undefined1 *)(iStack_14 + 999) = 0;
    }
    if (SStack_28 == 0) {
      *(undefined1 *)(iStack_14 + 0x528) = 0;
      goto LAB_00450c32;
    }
    pvVar2 = GlobalAlloc(0x40,SStack_28);
    pCStack_144 = GlobalLock(pvVar2);
    if (pCStack_144 != (LPCSTR)0x0) {
      iVar1 = FUN_00451430(param_1,pCStack_144,SStack_28);
      if (-1 < iVar1) {
        lstrcpynA((LPSTR)(iStack_14 + 0x528),pCStack_144,0x104);
        *(undefined1 *)(iStack_14 + 0x62b) = 0;
      }
      goto LAB_00450c32;
    }
  }
  else {
    pvVar2 = GlobalAlloc(0x40,unaff_EBX);
    piStack_14c = GlobalLock(pvVar2);
    if (piStack_14c != (int *)0x0) {
      iVar1 = FUN_00451430(param_1,piStack_14c,unaff_EBX);
      if (iVar1 < 0) goto LAB_00450c32;
      lstrcpynA((LPSTR)(iStack_14 + 0xbc),(LPCSTR)piStack_14c,0x104);
      *(undefined1 *)(iStack_14 + 0x1bf) = 0;
      goto LAB_00450ae6;
    }
  }
LAB_00450c2d:
  iVar1 = -0x7ff8fff2;
LAB_00450c32:
  if (piStack_14c != (int *)0x0) {
    pvVar2 = GlobalHandle(piStack_14c);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(piStack_14c);
    GlobalFree(pvVar2);
  }
  if (pCStack_140 != (LPCSTR)0x0) {
    pvVar2 = GlobalHandle(pCStack_140);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pCStack_140);
    GlobalFree(pvVar2);
  }
  if (pCStack_148 != (LPCSTR)0x0) {
    pvVar2 = GlobalHandle(pCStack_148);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pCStack_148);
    GlobalFree(pvVar2);
  }
  if (pCStack_144 != (LPCSTR)0x0) {
    pvVar2 = GlobalHandle(pCStack_144);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pCStack_144);
    GlobalFree(pvVar2);
  }
  return iVar1;
}


