/* Module: sfpublish.dll
   Function: FUN_00413120
   Address: 00413120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413120(int *param_1)

{
  undefined4 *pMem;
  int iVar1;
  HGLOBAL pvVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (param_1 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1;
    }
    if (iVar1 <= iVar3) break;
    pMem = *(undefined4 **)(param_1[2] + iVar3 * 4);
    if (pMem != (undefined4 *)0x0) {
      FUN_00410d50(pMem);
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
    }
    iVar3 = iVar3 + 1;
  }
  if (DAT_004419e8 != (int *)0x0) {
    FUN_0041dd10(DAT_004419e8,0,-1,0);
    FUN_0041ef80(DAT_004419e8);
    DAT_004419e8 = (int *)0x0;
  }
  FUN_0041dd10(param_1,0,-1,0);
  FUN_0041ef80(param_1);
  return 0;
}


