/* Module: vegas30k.dll
   Function: FUN_01060040
   Address: 01060040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01060083) */

undefined1 * __thiscall FUN_01060040(int *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined1 *puVar4;
  LPCVOID pMem;
  longlong lVar5;
  int iVar6;
  undefined4 uStack_10;
  int iStack_c;
  undefined8 uStack_8;
  
  iStack_c = (**(code **)(*(int *)param_1[0xd] + 0x14))();
  uStack_8 = (**(code **)(*(int *)param_1[0xd] + 0x1c))();
  iVar6 = param_1[0x91];
  lVar5 = __alldiv(uStack_8,iVar6,iVar6 >> 0x1f);
  iVar2 = (int)lVar5;
  if (0x20000 < lVar5) {
    return &DAT_80070057;
  }
  pMem = (LPCVOID)param_1[0x94];
  if (pMem != (LPCVOID)0x0) {
    uVar1 = uStack_8;
    if ((param_2 & 0x80000000) != 0) goto LAB_01060142;
    if ((iVar6 == param_1[0x93]) && (param_1[0x92] == iVar2)) {
      return (undefined1 *)0x0;
    }
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
    pMem = (LPCVOID)0x0;
    param_1[0x94] = 0;
  }
  uVar1 = uStack_8;
  if (iVar2 != 0) {
    pvVar3 = GlobalAlloc(0x40,(uint)*(ushort *)(iStack_c + 2) * iVar2 * 2);
    pMem = GlobalLock(pvVar3);
    param_1[0x92] = iVar2;
    param_1[0x94] = (int)pMem;
    uVar1 = uStack_8;
    if (pMem == (LPVOID)0x0) {
      return (undefined1 *)0x8007000e;
    }
  }
LAB_01060142:
  uStack_8._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  param_1[0x94] = 0;
  param_1[0x92] = 0;
  uStack_10 = 0;
  iVar6 = uStack_8._4_4_;
  uStack_8 = uVar1;
  puVar4 = (undefined1 *)
           (**(code **)(*param_1 + 0x38))(param_1,0,0,uVar1,0x31,pMem,iVar2,&uStack_10);
  if (0 < iVar6) {
    param_1[0x94] = (int)pMem;
    param_1[0x92] = iVar2;
    param_1[0x93] = param_1[0x91];
    param_1[4] = 1;
    return puVar4;
  }
  param_1[0x93] = 0;
  param_1[4] = 0;
  if (pMem != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return puVar4;
}


