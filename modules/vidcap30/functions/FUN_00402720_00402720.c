/* Module: vidcap30.exe
   Function: FUN_00402720
   Address: 00402720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402720(uint param_1,int param_2)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  pMem = (LPCVOID)FUN_00401b00(param_1,&param_1);
  if (pMem != (LPCVOID)0x0) {
    uVar2 = (uint)(param_2 != 0);
    if (uVar2 < param_1) {
      uVar3 = FUN_00402040(pMem,uVar2,param_1 - uVar2);
    }
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return uVar3;
  }
  return 1;
}


