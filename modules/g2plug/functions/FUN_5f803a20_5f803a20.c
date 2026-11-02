/* Module: g2plug.dll
   Function: FUN_5f803a20
   Address: 5f803a20
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID FUN_5f803a20(uint param_1,undefined4 *param_2)

{
  HRSRC pHVar1;
  HGLOBAL hResData;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  pvVar3 = (LPVOID)0x0;
  *param_2 = 0;
  pHVar1 = (HRSRC)FUN_5f817530(DAT_5f87746c,(LPCSTR)(param_1 & 0xffff),(LPCSTR)0xa);
  if (pHVar1 != (HRSRC)0x0) {
    hResData = (HGLOBAL)FUN_5f817580(DAT_5f87746c,pHVar1);
    if (hResData != (HGLOBAL)0x0) {
      pvVar3 = LockResource(hResData);
      uVar2 = FUN_5f8175c0(DAT_5f87746c,pHVar1);
      *param_2 = uVar2;
    }
  }
  return pvVar3;
}


