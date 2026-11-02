/* Module: vidcap30.exe
   Function: _SfZip_Open@12
   Address: 0052f210
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfZip_Open_12(LPCSTR param_1,undefined4 param_2,undefined4 *param_3)

{
  HANDLE pvVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  
                    /* 0x12f210  703  _SfZip_Open@12 */
  *param_3 = 0;
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 == (HANDLE)0xffffffff) {
    return -0x7ff8ffa9;
  }
  pvVar2 = GlobalAlloc(0x42,0x30);
  pMem = GlobalLock(pvVar2);
  if (pMem != (undefined4 *)0x0) {
    pMem[3] = &PTR_LAB_005b8ae0;
    *pMem = 1;
    pMem[2] = pvVar1;
    uVar3 = (*(code *)PTR_FUN_005b8af4)(pvVar1,0);
    pMem[1] = uVar3;
    pMem[4] = unaff_retaddr;
    iVar4 = FUN_0052d760(pMem);
    if (-1 < iVar4) {
      *param_3 = pMem;
      return iVar4;
    }
    (**(code **)(pMem[3] + 0x10))(pvVar1);
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    return iVar4;
  }
  return -0x7ff8fff2;
}


