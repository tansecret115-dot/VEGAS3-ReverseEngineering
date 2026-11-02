/* Module: wavplug.dll
   Function: FUN_5f382670
   Address: 5f382670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f382670(void *this,undefined4 *param_1)

{
  ulong *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  HGLOBAL pvVar4;
  SFDRVFMT_DATAFMTS *pSVar5;
  long lVar6;
  LPVOID pvVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)((int)this + 0x28) != 0) {
    FUN_5f382870((int)this);
  }
  pvVar4 = GlobalAlloc(0x42,0x3520);
  pSVar5 = GlobalLock(pvVar4);
  *(SFDRVFMT_DATAFMTS **)((int)this + 0x4c) = pSVar5;
  if (pSVar5 == (SFDRVFMT_DATAFMTS *)0x0) {
    return 0x8007000e;
  }
  puVar1 = (ulong *)((int)this + 0x48);
  lVar6 = SfACM_CreateList(puVar1,pSVar5,0xe);
  if (lVar6 < 0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalFree(pvVar4);
    pvVar4 = GlobalAlloc(0x42,0x88);
    pvVar7 = GlobalLock(pvVar4);
    *(LPVOID *)((int)this + 0x4c) = pvVar7;
    if (pvVar7 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    *puVar1 = 0;
  }
  FUN_5f397270(DAT_5f3db380,0x3ea,(LPSTR)(*(int *)((int)this + 0x4c) + *puVar1 * 0x88),0x80);
  *(undefined4 *)(*(int *)((int)this + 0x4c) + 0x80 + *puVar1 * 0x88) = 1;
  uVar3 = *puVar1;
  *puVar1 = uVar3 + 1;
  if (0x17 < *(uint *)((int)this + 0x40)) {
    FUN_5f397270(DAT_5f3db380,0x3fb,(LPSTR)(*(int *)((int)this + 0x4c) + (uVar3 + 1) * 0x88),0x80);
    *(undefined4 *)(*(int *)((int)this + 0x4c) + 0x80 + *puVar1 * 0x88) = 3;
    *puVar1 = *puVar1 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x28);
  *(undefined4 **)((int)this + 8) = param_1;
  puVar11 = puVar2;
  iVar8 = (**(code **)*param_1)(param_1,&DAT_5f3c9aa0);
  if (iVar8 < 0) {
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalFree(pvVar4);
    return 0x80004002;
  }
  piVar10 = (int *)&stack0xfffffff0;
  iVar8 = (**(code **)(*(int *)*puVar2 + 0x18))((int *)*puVar2);
  if (-1 < iVar8) {
    iVar8 = (**(code **)*puVar11)(puVar11,&DAT_5f3c9c10,(int)this + 0x2c);
    (**(code **)(*piVar10 + 8))(piVar10);
    if (-1 < iVar8) {
      uVar9 = (**(code **)(*(int *)this + 0x3c))(this);
      return uVar9;
    }
  }
  pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
  GlobalFree(pvVar4);
  (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
  *puVar2 = 0;
  return 0x80004002;
}


