/* Module: mp3rw.dll
   Function: FUN_004271f0
   Address: 004271f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004271f0(LPCSTR param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

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
  pvVar1 = FUN_0041e250(param_4,param_1,"ZIP",pMem);
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
        pMem_00[3] = &PTR_LAB_004a6468;
        *pMem_00 = 1;
        pMem_00[2] = pMem;
        uVar3 = (*(code *)PTR_FUN_004a647c)(pMem,0);
        pMem_00[1] = uVar3;
        pMem_00[4] = param_2;
        uVar4 = FUN_004254d0((int)pMem_00);
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
      goto LAB_004272ba;
    }
  }
  uVar4 = FUN_00430880();
LAB_004272ba:
  if ((int)uVar4 < 0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return uVar4;
}


