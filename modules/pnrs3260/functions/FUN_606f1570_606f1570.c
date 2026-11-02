/* Module: pnrs3260.dll
   Function: FUN_606f1570
   Address: 606f1570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_606f1570(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  LPCSTR lpType;
  HRSRC pHVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_606f1a30(*(void **)(param_1 + 4),param_2 >> 0x10);
  if (0 < iVar1) {
    puVar2 = operator_new(iVar1 * 4);
    iVar1 = FUN_606f1a50(*(void **)(param_1 + 4),param_2 >> 0x10,puVar2,iVar1);
    iVar5 = 0;
    if (0 < iVar1) {
      puVar4 = puVar2;
      do {
        lpType = (LPCSTR)FUN_606f1620(param_3);
        pHVar3 = FindResourceA((HMODULE)*puVar4,(LPCSTR)(param_2 & 0xffff),lpType);
        if (pHVar3 != (HRSRC)0x0) {
          local_8 = puVar2[iVar5];
          break;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < iVar1);
    }
    operator_delete(puVar2);
  }
  return local_8;
}


