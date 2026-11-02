/* Module: sfcdi.dll
   Function: FUN_5bf1b980
   Address: 5bf1b980
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_5bf1b980(undefined4 *param_1,LPCSTR param_2,undefined4 *param_3)

{
  HRSRC pHVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  pHVar1 = (HRSRC)FUN_5bf28170(param_1,param_2,(LPCSTR)0x2);
  if ((pHVar1 != (HRSRC)0x0) &&
     (hResData = (HGLOBAL)FUN_5bf281c0(param_1,pHVar1), hResData != (HGLOBAL)0x0)) {
    pvVar2 = LockResource(hResData);
    if (param_3 == (undefined4 *)0x0) {
      return pvVar2;
    }
    *param_3 = *(undefined4 *)((int)pvVar2 + 4);
    param_3[1] = *(undefined4 *)((int)pvVar2 + 8);
    return pvVar2;
  }
  if (param_3 != (undefined4 *)0x0) {
    param_3[1] = 0;
    *param_3 = 0;
  }
  return (LPVOID)0x0;
}


