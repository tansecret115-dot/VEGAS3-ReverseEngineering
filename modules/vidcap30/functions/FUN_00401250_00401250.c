/* Module: vidcap30.exe
   Function: FUN_00401250
   Address: 00401250
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_00401250(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  iVar1 = _SfFindResource_12(DAT_005ba2a0,param_1,2);
  if ((iVar1 != 0) &&
     (hResData = (HGLOBAL)_SfLoadResource_8(DAT_005ba2a0,iVar1), hResData != (HGLOBAL)0x0)) {
    pvVar2 = LockResource(hResData);
    if (param_2 == (undefined4 *)0x0) {
      return pvVar2;
    }
    *param_2 = *(undefined4 *)((int)pvVar2 + 4);
    param_2[1] = *(undefined4 *)((int)pvVar2 + 8);
    return pvVar2;
  }
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
  }
  return (LPVOID)0x0;
}


