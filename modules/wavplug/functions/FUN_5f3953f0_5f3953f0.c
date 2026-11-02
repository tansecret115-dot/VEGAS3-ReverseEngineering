/* Module: wavplug.dll
   Function: FUN_5f3953f0
   Address: 5f3953f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5f3953f0(void *this,uint param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  LPVOID pMem;
  int iVar3;
  int iVar4;
  HGLOBAL pvVar5;
  LPVOID pMem_00;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int iVar9;
  int *piStack_40;
  LPVOID pvStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  uint auStack_28 [2];
  
  auStack_28[1] = 0x5f3953fe;
  FUN_5f395660((int)this);
  auStack_28[1] = 4;
  auStack_28[0] = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = param_2;
  piVar1 = (int *)((int)this + 0x30);
  uStack_38 = param_1;
  pvStack_3c = (LPVOID)0x0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  piStack_40 = piVar1;
  iVar3 = acmStreamOpen();
  if (iVar3 == 0) {
    uStack_30 = (uint)*(ushort *)(param_2 + 0xc);
    iVar9 = *piVar1;
    iVar4 = acmStreamSize(iVar9,uStack_30,&stack0xffffffe8,1);
    iVar3 = 0;
    if (iVar4 != 0) {
      uVar6 = 1;
      do {
        auStack_28[0] = (uint)*(ushort *)(param_2 + 0xc);
        auStack_28[0] =
             ((uVar6 * *(int *)(param_2 + 8) + -1 + auStack_28[0]) / auStack_28[0]) * auStack_28[0];
        iVar3 = acmStreamSize(*piVar1,auStack_28[0],auStack_28,1);
        if ((iVar3 == 0) && (*(ushort *)(iStack_2c + 0xc) < auStack_28[0])) break;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x101);
      iVar3 = acmStreamSize(*piVar1,auStack_28[0],&piStack_40,0);
      if (iVar3 != 0) goto LAB_5f39563e;
    }
    (**(code **)(*(int *)this + 8))(&uStack_38);
    *(LPVOID *)((int)this + 0x10) = pvStack_3c;
    *(uint *)((int)this + 0x14) = uStack_38;
    (**(code **)(*(int *)this + 0xc))
              (*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24),0);
    uVar8 = __alldiv(*(uint *)((int)this + 0x10),*(uint *)((int)this + 0x14),0x1e,0);
    *(undefined8 *)((int)this + 0xa0) = uVar8;
    if (uStack_38 < 0x8000) {
      iVar4 = (int)(0x8000 / (ulonglong)uStack_38);
    }
    else {
      iVar4 = 1;
    }
    pvVar5 = GlobalAlloc(0x42,iVar4 * uStack_38);
    pvStack_3c = GlobalLock(pvVar5);
    pvVar5 = GlobalAlloc(0x42,iVar4 * iVar9);
    pMem_00 = GlobalLock(pvVar5);
    if ((pMem_00 != (LPVOID)0x0) && (pvStack_3c != (LPVOID)0x0)) {
      puVar2 = (undefined4 *)((int)this + 0x34);
      puVar7 = puVar2;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(LPVOID *)((int)this + 0x40) = pvStack_3c;
      *(uint *)((int)this + 0x44) = iVar4 * uStack_38;
      *(uint *)((int)this + 0x4c) = iVar4 * uStack_38;
      *(undefined4 *)((int)this + 0x38) = 0;
      *(LPVOID *)((int)this + 0x50) = pMem_00;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x48) = 0;
      *(undefined4 *)((int)this + 0x58) = 0;
      *puVar2 = 0x54;
      *(int *)((int)this + 0x54) = iVar4 * iVar9;
      *(int *)((int)this + 0x5c) = iVar4 * iVar9;
      iVar3 = acmStreamPrepareHeader(*piVar1,puVar2,0);
      if (iVar3 != 0) {
        acmStreamClose(*piVar1,0);
        pMem = pvStack_3c;
        *piVar1 = 0;
        pvVar5 = GlobalHandle(pvStack_3c);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pMem);
        GlobalFree(pvVar5);
        pvVar5 = GlobalHandle(pMem_00);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pMem_00);
        GlobalFree(pvVar5);
      }
    }
    if (*(int *)((int)this + 0x88) != 0) {
      FUN_5f395370((int)this);
    }
    FUN_5f3a2b90((int *)((int)this + 0x88),4,-1,-1,0x80000000);
  }
LAB_5f39563e:
  return -(uint)(iVar3 != 0) & 0x8004e011;
}


