/* Module: sfpublish.dll
   Function: FUN_0042aec0
   Address: 0042aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042aec0(LPCSTR param_1,undefined4 param_2,undefined4 *param_3)

{
  HANDLE pvVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  
  *param_3 = 0;
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    return 0x80070057;
  }
  pvVar2 = GlobalAlloc(0x42,0x30);
  pMem = GlobalLock(pvVar2);
  if (pMem != (undefined4 *)0x0) {
    pMem[3] = &PTR_LAB_0043fcb0;
    *pMem = 1;
    pMem[2] = pvVar1;
    uVar3 = (*(code *)PTR_FUN_0043fcc4)(pvVar1,0);
    pMem[1] = uVar3;
    pMem[4] = unaff_retaddr;
    uVar4 = FUN_00429410((int)pMem);
    if (-1 < (int)uVar4) {
      *param_3 = pMem;
      return uVar4;
    }
    (**(code **)(pMem[3] + 0x10))(pvVar1);
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    return uVar4;
  }
  return 0x8007000e;
}


