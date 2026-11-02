/* Module: vegas30k.dll
   Function: _SfZip_OpenResource@16
   Address: 0101aa90
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZip_OpenResource_16
              (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  HGLOBAL pvVar1;
  LPVOID pMem;
  LPVOID pvVar2;
  undefined4 *pMem_00;
  undefined4 uVar3;
  int iVar4;
  
                    /* 0x1aa90  1322  _SfZip_OpenResource@16 */
  pvVar1 = GlobalAlloc(0x40,0x18);
  pMem = GlobalLock(pvVar1);
  if (pMem == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  pvVar1 = (HGLOBAL)_SfLoadResourceCustom_16(param_4,param_1,&DAT_011db6e0,pMem);
  *(HGLOBAL *)((int)pMem + 0x14) = pvVar1;
  if (pvVar1 != (HGLOBAL)0x0) {
    pvVar2 = LockResource(pvVar1);
    *(LPVOID *)((int)pMem + 0xc) = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      pvVar1 = GlobalAlloc(0x42,0x30);
      pMem_00 = GlobalLock(pvVar1);
      if (pMem_00 == (undefined4 *)0x0) {
        iVar4 = -0x7ff8fff2;
      }
      else {
        pMem_00[3] = &PTR_LAB_012040b0;
        *pMem_00 = 1;
        pMem_00[2] = pMem;
        uVar3 = (*(code *)PTR_FUN_012040c4)(pMem,0);
        pMem_00[1] = uVar3;
        pMem_00[4] = param_2;
        iVar4 = FUN_01018d70(pMem_00);
        if (iVar4 < 0) {
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
      goto LAB_0101ab5a;
    }
  }
  iVar4 = _SfErrorHandler_GetLastError_0();
LAB_0101ab5a:
  if (iVar4 < 0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return iVar4;
}


