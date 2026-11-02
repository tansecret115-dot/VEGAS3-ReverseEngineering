/* Module: vegas30.exe
   Function: FUN_005a35d0
   Address: 005a35d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_005a35d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *pMem;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  
  pMem = (undefined4 *)0x0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    pvVar2 = GlobalAlloc(0x40,0x18);
    pvVar3 = GlobalLock(pvVar2);
    if (pvVar3 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    pMem = (undefined4 *)FUN_005a1f40();
    if (pMem != (undefined4 *)0x0) {
      if ((*(int **)(param_1 + 0x60) == (int *)0x0) || (**(int **)(param_1 + 0x60) == 0)) {
        _SfVideoKeyframe_InsertSmart_20(param_1,0,0,0xffffffff,0xffffffff);
      }
      puVar1 = (undefined4 *)(param_1 + 0x18);
      iVar4 = (**(code **)*pMem)(pMem,&DAT_00633558,puVar1);
      if (iVar4 < 0) {
        *puVar1 = 0;
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
        return (undefined4 *)0x0;
      }
      (**(code **)(**(int **)(param_1 + 0x14) + 0x24))(*(int **)(param_1 + 0x14),*puVar1);
    }
  }
  return pMem;
}


