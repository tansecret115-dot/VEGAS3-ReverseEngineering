/* Module: sctplug.dll
   Function: FUN_00401bc0
   Address: 00401bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00401bc0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  ulong *puVar2;
  HGLOBAL pvVar3;
  SFDRVFMT_DATAFMTS *pSVar4;
  long lVar5;
  LPVOID pvVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  puVar1 = (undefined4 *)((int)this + 0x28);
  if (*(int *)((int)this + 0x28) != 0) {
    FUN_00401d80((int)this);
  }
  pvVar3 = GlobalAlloc(0x42,0x3520);
  pSVar4 = GlobalLock(pvVar3);
  *(SFDRVFMT_DATAFMTS **)((int)this + 0x4c) = pSVar4;
  if (pSVar4 == (SFDRVFMT_DATAFMTS *)0x0) {
    return 0x8007000e;
  }
  puVar2 = (ulong *)((int)this + 0x48);
  lVar5 = SfACM_CreateList(puVar2,pSVar4,0xe);
  if (lVar5 < 0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalFree(pvVar3);
    pvVar3 = GlobalAlloc(0x42,0x88);
    pvVar6 = GlobalLock(pvVar3);
    *(LPVOID *)((int)this + 0x4c) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    *puVar2 = 0;
  }
  FUN_0040cc30(DAT_0043cd30,0x3ea,(LPSTR)(*(int *)((int)this + 0x4c) + *puVar2 * 0x88),0x80);
  *(undefined4 *)(*(int *)((int)this + 0x4c) + 0x80 + *puVar2 * 0x88) = 1;
  *puVar2 = *puVar2 + 1;
  *(undefined4 **)((int)this + 8) = param_1;
  puVar10 = puVar1;
  iVar7 = (**(code **)*param_1)(param_1,&DAT_00431a70);
  if (iVar7 < 0) {
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
    GlobalFree(pvVar3);
    return 0x80004002;
  }
  piVar9 = (int *)&stack0xfffffff0;
  iVar7 = (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1);
  if (-1 < iVar7) {
    iVar7 = (**(code **)*puVar10)(puVar10,&DAT_00431be0,(int)this + 0x2c);
    (**(code **)(*piVar9 + 8))(piVar9);
    if (-1 < iVar7) {
      uVar8 = (**(code **)(*(int *)this + 0x3c))(this);
      return uVar8;
    }
  }
  pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(*(LPCVOID *)((int)this + 0x4c));
  GlobalFree(pvVar3);
  (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  *puVar1 = 0;
  return 0x80004002;
}


