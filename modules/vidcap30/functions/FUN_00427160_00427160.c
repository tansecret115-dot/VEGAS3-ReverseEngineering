/* Module: vidcap30.exe
   Function: FUN_00427160
   Address: 00427160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427160(undefined4 param_1,uint param_2)

{
  HGLOBAL pvVar1;
  undefined4 *pMem;
  undefined4 uVar2;
  
  if ((-1 < (int)param_2) && (param_2 < 0x14)) {
    FUN_00426f50(param_1,param_2,0);
    pvVar1 = GlobalAlloc(0x42,4);
    pMem = GlobalLock(pvVar1);
    if (pMem != (undefined4 *)0x0) {
      *pMem = *(undefined4 *)(&DAT_005b5344 + param_2 * 4);
      uVar2 = FUN_004270f0(param_1,pMem,4);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      return uVar2;
    }
    return 0x8007000e;
  }
  return 0x80004005;
}


