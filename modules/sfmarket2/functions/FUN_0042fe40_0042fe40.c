/* Module: sfmarket2.dll
   Function: FUN_0042fe40
   Address: 0042fe40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0042fe40(void *this,uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  LPCVOID pvVar4;
  int iVar5;
  HGLOBAL pvVar6;
  
  iVar5 = lstrlenA((LPCSTR)param_1);
  puVar1 = (undefined4 *)((int)this + 0x74);
  *(int *)((int)this + 0x70) = iVar5;
  iVar5 = FUN_0042e4d0(param_1,puVar1);
  if (-1 < iVar5) {
    puVar2 = (undefined4 *)((int)this + 0x78);
    iVar5 = FUN_0042e4d0(param_2,puVar2);
    if (-1 < iVar5) {
      puVar3 = (undefined4 *)((int)this + 0x7c);
      iVar5 = FUN_0042e4d0(param_3,puVar3);
      if (-1 < iVar5) {
        iVar5 = FUN_0042e4d0(param_4,(undefined4 *)((int)this + 0x80));
        if (-1 < iVar5) {
          return iVar5;
        }
        pvVar4 = (LPCVOID)*puVar3;
        if (pvVar4 != (LPCVOID)0x0) {
          pvVar6 = GlobalHandle(pvVar4);
          GlobalUnlock(pvVar6);
          pvVar6 = GlobalHandle(pvVar4);
          GlobalFree(pvVar6);
          *puVar3 = 0;
        }
      }
      pvVar4 = (LPCVOID)*puVar2;
      if (pvVar4 != (LPCVOID)0x0) {
        pvVar6 = GlobalHandle(pvVar4);
        GlobalUnlock(pvVar6);
        pvVar6 = GlobalHandle(pvVar4);
        GlobalFree(pvVar6);
        *puVar2 = 0;
      }
      if (-1 < iVar5) {
        return iVar5;
      }
    }
    pvVar4 = (LPCVOID)*puVar1;
    if (pvVar4 != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(pvVar4);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pvVar4);
      GlobalFree(pvVar6);
      *puVar1 = 0;
    }
  }
  return iVar5;
}


