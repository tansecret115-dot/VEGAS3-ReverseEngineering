/* Module: sfpublish.dll
   Function: FUN_0042b130
   Address: 0042b130
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042b130(LPCSTR param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  HGLOBAL pvVar1;
  DWORD *pMem;
  LPVOID pvVar2;
  undefined4 *pMem_00;
  undefined4 uVar3;
  uint uVar4;
  
  pvVar1 = GlobalAlloc(0x40,0x18);
  pMem = GlobalLock(pvVar1);
  if (pMem == (DWORD *)0x0) {
    return 0x8007000e;
  }
  pvVar1 = FUN_0041aff0(param_4,param_1,"ZIP",pMem);
  pMem[5] = (DWORD)pvVar1;
  if (pvVar1 != (HGLOBAL)0x0) {
    pvVar2 = LockResource(pvVar1);
    pMem[3] = (DWORD)pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      pvVar1 = GlobalAlloc(0x42,0x30);
      pMem_00 = GlobalLock(pvVar1);
      if (pMem_00 == (undefined4 *)0x0) {
        uVar4 = 0x8007000e;
      }
      else {
        pMem_00[3] = &PTR_LAB_0043fcc8;
        *pMem_00 = 1;
        pMem_00[2] = pMem;
        uVar3 = (*(code *)PTR_FUN_0043fcdc)(pMem,0);
        pMem_00[1] = uVar3;
        pMem_00[4] = param_2;
        uVar4 = FUN_00429410((int)pMem_00);
        if ((int)uVar4 < 0) {
          (**(code **)(pMem_00[3] + 0x10))(pMem);
          pvVar1 = GlobalHandle(pMem_00);
          GlobalUnlock(pvVar1);
          pvVar1 = GlobalHandle(pMem_00);
          GlobalFree(pvVar1);
        }
        else {
          *param_3 = pMem_00;
        }
      }
      goto LAB_0042b1fa;
    }
  }
  uVar4 = FUN_0042b270();
LAB_0042b1fa:
  if ((int)uVar4 < 0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return uVar4;
}


