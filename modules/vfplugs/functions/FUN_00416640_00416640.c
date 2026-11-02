/* Module: vfplugs.dll
   Function: FUN_00416640
   Address: 00416640
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_00416640(LPCSTR param_1,undefined4 *param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar1;
  
  hResInfo = FindResourceA(DAT_00494510,param_1,(LPCSTR)0x2);
  if ((hResInfo != (HRSRC)0x0) &&
     (hResData = LoadResource(DAT_00494510,hResInfo), hResData != (HGLOBAL)0x0)) {
    pvVar1 = LockResource(hResData);
    if (param_2 == (undefined4 *)0x0) {
      return pvVar1;
    }
    *param_2 = *(undefined4 *)((int)pvVar1 + 4);
    param_2[1] = *(undefined4 *)((int)pvVar1 + 8);
    return pvVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
  }
  return (LPVOID)0x0;
}


