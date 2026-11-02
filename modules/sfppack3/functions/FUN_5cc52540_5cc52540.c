/* Module: sfppack3.dll
   Function: FUN_5cc52540
   Address: 5cc52540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc52540(undefined4 *param_1,uint param_2,int param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 < 2) {
    uVar3 = 2;
  }
  else {
    if (param_2 < 0x1000) goto LAB_5cc5256d;
    uVar3 = 0xfff;
  }
  bVar4 = uVar3 != param_2;
  param_2 = uVar3;
  if (bVar4) {
    return 0;
  }
LAB_5cc5256d:
  if ((param_1[0x2d] == 0) || (param_2 != param_1[0x27])) {
    pvVar1 = GlobalAlloc(0x42,param_2 * 8);
    pvVar2 = GlobalLock(pvVar1);
    if (pvVar2 == (LPVOID)0x0) {
      return 0;
    }
    if ((LPCVOID)param_1[0x2d] != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)param_1[0x2d]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_1[0x2d]);
      GlobalFree(pvVar1);
    }
    param_1[0x2d] = pvVar2;
    param_1[0x27] = param_2;
  }
  FUN_5cc52400(param_1,param_3);
  return param_1[0x27];
}


