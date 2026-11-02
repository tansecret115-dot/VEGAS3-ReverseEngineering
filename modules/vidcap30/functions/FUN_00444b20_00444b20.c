/* Module: vidcap30.exe
   Function: FUN_00444b20
   Address: 00444b20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00444b20(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pMem;
  LPVOID pMem_00;
  int unaff_ESI;
  uint unaff_EDI;
  int *piStack_34;
  int *piStack_30;
  undefined1 *puStack_2c;
  SIZE_T SStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  int aiStack_c [3];
  
  piVar1 = param_1;
  puStack_24 = &param_1;
  puStack_2c = local_10;
  SStack_28 = 4;
  piStack_30 = param_1;
  pMem_00 = (LPVOID)0x0;
  piStack_34 = (int *)0x444b3e;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 < 0) {
    return iVar2;
  }
  if (aiStack_c[0] != 4) {
    return -0x7ffb1ff8;
  }
  iVar2 = 0xc;
  if (unaff_EDI < 0x11) {
    iVar2 = unaff_EDI - 4;
  }
  piStack_34 = aiStack_c;
  iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,&stack0xffffffe4,iVar2);
  if (iVar3 < 0) {
    return iVar3;
  }
  if (iVar2 != unaff_ESI) {
    return -0x7ffb1ff8;
  }
  if ((int *)0x10 < piStack_30) {
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,piStack_30 + -4,0,1,0);
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  if (puStack_2c == (undefined1 *)0x0) {
    return -0x7ffb1ff5;
  }
  pvVar4 = GlobalAlloc(0x40,(SIZE_T)puStack_2c);
  pMem = GlobalLock(pvVar4);
  if (pMem == (LPVOID)0x0) {
LAB_00444cad:
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = FUN_00451430(piVar1,pMem,puStack_2c);
    if ((iVar2 < 0) || (iVar2 = FUN_004432e0(&piStack_34,uStack_14,0xffffffff,pMem), iVar2 < 0))
    goto LAB_00444c5d;
    if (SStack_28 != 0) {
      pvVar4 = GlobalAlloc(0x40,SStack_28);
      pMem_00 = GlobalLock(pvVar4);
      if (pMem_00 == (LPVOID)0x0) goto LAB_00444cad;
      iVar2 = FUN_00451430(piVar1,pMem_00,SStack_28);
      if ((iVar2 < 0) || (iVar2 = FUN_00443420(uStack_14,piStack_34,pMem_00), iVar2 < 0))
      goto LAB_00444c5d;
    }
    iVar2 = FUN_00444cd0(uStack_14,piStack_34,puStack_24);
    if (-1 < iVar2) {
      iVar2 = 0;
    }
  }
LAB_00444c5d:
  if (pMem != (LPVOID)0x0) {
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
  }
  if (pMem_00 != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem_00);
    GlobalFree(pvVar4);
  }
  return iVar2;
}


