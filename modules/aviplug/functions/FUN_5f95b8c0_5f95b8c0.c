/* Module: aviplug.dll
   Function: FUN_5f95b8c0
   Address: 5f95b8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f95b8c0(void *this,undefined4 *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  int *piVar3;
  HGLOBAL pvVar4;
  SFDRVFMT_DATAFMTS *pSVar5;
  long lVar6;
  LPVOID pvVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    FUN_5f95bad0((int)this);
  }
  pvVar4 = GlobalAlloc(0x42,0x3520);
  pSVar5 = GlobalLock(pvVar4);
  *(SFDRVFMT_DATAFMTS **)((int)this + 0x54) = pSVar5;
  if (pSVar5 == (SFDRVFMT_DATAFMTS *)0x0) {
    return -0x7ff8fff2;
  }
  puVar1 = (ulong *)((int)this + 0x50);
  lVar6 = SfACM_CreateList(puVar1,pSVar5,0xe);
  if (lVar6 < 0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x54));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x54));
    GlobalFree(pvVar4);
    pvVar4 = GlobalAlloc(0x42,0x88);
    pvVar7 = GlobalLock(pvVar4);
    *(LPVOID *)((int)this + 0x54) = pvVar7;
    if (pvVar7 == (LPVOID)0x0) {
      return -0x7ff8fff2;
    }
    *puVar1 = 0;
  }
  FUN_5f980cf0(DAT_5f9f5978,0x11,(LPSTR)(*(int *)((int)this + 0x54) + *puVar1 * 0x88),0x80);
  *(undefined4 *)(*(int *)((int)this + 0x54) + 0x80 + *puVar1 * 0x88) = 1;
  uVar2 = *puVar1;
  *puVar1 = uVar2 + 1;
  if (0x17 < *(uint *)((int)this + 0x48)) {
    FUN_5f980cf0(DAT_5f9f5978,0x19,(LPSTR)(*(int *)((int)this + 0x54) + (uVar2 + 1) * 0x88),0x80);
    *(undefined4 *)(*(int *)((int)this + 0x54) + 0x80 + *puVar1 * 0x88) = 3;
    *puVar1 = *puVar1 + 1;
  }
  *(undefined4 **)((int)this + 8) = param_1;
  puVar10 = (undefined4 *)((int)this + 0x2c);
  iVar8 = (**(code **)*param_1)(param_1,&DAT_5f9d9bf0);
  if (iVar8 < 0) {
    return -0x7fffbffe;
  }
  piVar9 = *(int **)((int)this + 0x30);
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  piVar3 = *(int **)((int)this + 0x2c);
  piVar9 = (int *)&stack0xfffffff0;
  *(undefined4 *)((int)this + 0x30) = 0;
  iVar8 = (**(code **)(*piVar3 + 0x18))(piVar3);
  if (-1 < iVar8) {
    if (puVar10 != (undefined4 *)0x0) {
      iVar8 = (**(code **)*puVar10)(puVar10,&DAT_5f9d9d60,(undefined4 *)((int)this + 0x30));
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    if (-1 < iVar8) {
      WaitForSingleObject(DAT_5f9f410c,0xffffffff);
      if (DAT_5f9f4100 == 0) {
        AVIFileInit();
        iVar8 = FUN_5f958f70(DAT_5f9f4130);
        if (iVar8 < 0) {
          iVar8 = -0x7ff8fff2;
        }
        else {
          DAT_5f9f4100 = 1;
        }
      }
      ReleaseMutex(DAT_5f9f410c);
      return iVar8;
    }
  }
  return -0x7fffbffe;
}


