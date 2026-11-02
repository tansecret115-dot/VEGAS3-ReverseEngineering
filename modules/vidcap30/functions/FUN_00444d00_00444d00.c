/* Module: vidcap30.exe
   Function: FUN_00444d00
   Address: 00444d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00444d00(int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pMem;
  int unaff_EBX;
  float10 fVar4;
  int *piStack_c0;
  SIZE_T *pSStack_bc;
  LPVOID pvStack_b8;
  SIZE_T *pSStack_b4;
  double dVar5;
  uint uStack_a0;
  int local_94;
  uint uStack_90;
  undefined4 uStack_8c;
  SIZE_T SStack_88;
  SIZE_T local_84;
  SIZE_T local_80;
  SIZE_T SStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pSStack_b4 = &local_84;
  pSStack_bc = &local_80;
  pvStack_b8 = (LPVOID)0x4;
  piStack_c0 = param_1;
  local_94 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (local_94 != 4) {
    return -0x7ffb1ff8;
  }
  iVar1 = 0x7c;
  if (uStack_90 < 0x81) {
    iVar1 = uStack_90 - 4;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&uStack_8c,iVar1,&local_94);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (iVar1 != unaff_EBX) {
    return -0x7ffb1ff8;
  }
  if (0x80 < uStack_a0) {
    iVar2 = (**(code **)(*param_1 + 0x14))(param_1,uStack_a0 - 0x80,0,1,0);
  }
  if (iVar2 < 0) {
    return iVar2;
  }
  if (SStack_88 == 0) {
    return -0x7ffb1ff5;
  }
  pvVar3 = GlobalAlloc(0x40,SStack_88);
  pMem = GlobalLock(pvVar3);
  if (pMem == (LPVOID)0x0) {
LAB_0044510b:
    iVar1 = -0x7ff8fff2;
  }
  else {
    iVar1 = FUN_00451430(param_1,pMem,SStack_88);
    if (iVar1 < 0) goto LAB_00445076;
    if (local_84 != 0) {
      pvVar3 = GlobalAlloc(0x40,local_84);
      pSStack_b4 = GlobalLock(pvVar3);
      if (pSStack_b4 == (SIZE_T *)0x0) goto LAB_0044510b;
      iVar1 = FUN_00451430(param_1,pSStack_b4,local_84);
      if (iVar1 < 0) goto LAB_00445076;
    }
    iVar1 = FUN_00443840(&piStack_c0,uStack_10,uStack_14,0,local_94,pMem,pSStack_b4,0);
    if (iVar1 < 0) goto LAB_00445076;
    if (local_80 != 0) {
      pvVar3 = GlobalAlloc(0x40,local_80);
      pSStack_bc = GlobalLock(pvVar3);
      if (pSStack_bc == (SIZE_T *)0x0) goto LAB_0044510b;
      iVar1 = FUN_00451430(param_1,pSStack_bc,local_80);
      if ((iVar1 < 0) || (iVar1 = FUN_00443f90(uStack_10,piStack_c0,pSStack_bc), iVar1 < 0))
      goto LAB_00445076;
    }
    if (SStack_7c != 0) {
      pvVar3 = GlobalAlloc(0x40,SStack_7c);
      pvStack_b8 = GlobalLock(pvVar3);
      if (pvStack_b8 == (LPVOID)0x0) goto LAB_0044510b;
      iVar1 = FUN_00451430(param_1,pvStack_b8,SStack_7c);
      if ((iVar1 < 0) || (iVar1 = FUN_00444070(uStack_10,piStack_c0,pvStack_b8), iVar1 < 0))
      goto LAB_00445076;
    }
    iVar1 = FUN_00445130(piStack_c0,uStack_70,uStack_6c);
    if (-1 < iVar1) {
      FUN_00443b20(piStack_c0,uStack_78,0x1ff);
      FUN_00443e30(uStack_10,piStack_c0,uStack_90,uStack_8c);
      if ((piStack_c0[0xe] & 0x100U) == 0) {
        piStack_c0[0xe] = piStack_c0[0xe] | 0x100;
        piStack_c0[0xe] = piStack_c0[0xe] | 0x40;
        piStack_c0[0xe] = piStack_c0[0xe] | 0x80;
      }
      if (uStack_a0 < 0x39) {
        fVar4 = (float10)FUN_0042ed90(uStack_10);
        dVar5 = (double)fVar4;
      }
      else {
        dVar5 = (double)CONCAT44(uStack_64,uStack_68);
      }
      FUN_00444150(uStack_10,piStack_c0,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
      if (uStack_a0 < 0x39) {
        fVar4 = (float10)FUN_0042ee90(uStack_10);
        dVar5 = (double)fVar4;
      }
      else {
        dVar5 = (double)CONCAT44(uStack_5c,uStack_60);
      }
      FUN_004441a0(uStack_10,piStack_c0,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20));
      if (0x48 < uStack_a0) {
        FUN_00444250(uStack_10,piStack_c0,uStack_50,uStack_4c,uStack_58,uStack_54,uStack_48,
                     uStack_44,uStack_40);
      }
      if (0x68 < uStack_a0) {
        FUN_00443f20(uStack_10,piStack_c0,uStack_38,uStack_34);
      }
      if (0x70 < uStack_a0) {
        FUN_004442b0(uStack_10,piStack_c0,auStack_30);
      }
      if (0x78 < uStack_a0) {
        FUN_00443f60(uStack_10,piStack_c0,uStack_28);
      }
      iVar1 = 0;
    }
  }
LAB_00445076:
  if (pMem != (LPVOID)0x0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  if (pSStack_b4 != (SIZE_T *)0x0) {
    pvVar3 = GlobalHandle(pSStack_b4);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pSStack_b4);
    GlobalFree(pvVar3);
  }
  if (pSStack_bc != (SIZE_T *)0x0) {
    pvVar3 = GlobalHandle(pSStack_bc);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pSStack_bc);
    GlobalFree(pvVar3);
  }
  if (pvStack_b8 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvStack_b8);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvStack_b8);
    GlobalFree(pvVar3);
  }
  return iVar1;
}


