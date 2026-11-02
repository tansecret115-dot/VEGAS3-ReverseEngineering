/* Module: pnrs3260.dll
   Function: FUN_606f14b0
   Address: 606f14b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPVOID __thiscall FUN_606f14b0(void *this,uint param_1,LPCSTR param_2)

{
  int iVar1;
  undefined4 *puVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined4 *puVar3;
  int iVar4;
  LPVOID local_8;
  
  local_8 = (LPVOID)0x0;
  iVar1 = FUN_606f1a30(*(void **)((int)this + 4),param_1 >> 0x10);
  if (iVar1 < 1) {
    return (LPVOID)0x0;
  }
  puVar2 = operator_new(iVar1 * 4);
  FUN_606f1a50(*(void **)((int)this + 4),param_1 >> 0x10,puVar2,iVar1);
  iVar4 = 0;
  if (0 < iVar1) {
    puVar3 = puVar2;
    do {
      hResInfo = FindResourceA((HMODULE)*puVar3,(LPCSTR)(param_1 & 0xffff),param_2);
      if (hResInfo != (HRSRC)0x0) {
        hResData = LoadResource((HMODULE)*puVar3,hResInfo);
        if (hResData != (HGLOBAL)0x0) {
          local_8 = LockResource(hResData);
        }
        if (local_8 != (LPVOID)0x0) break;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < iVar1);
  }
  operator_delete(puVar2);
  return local_8;
}


