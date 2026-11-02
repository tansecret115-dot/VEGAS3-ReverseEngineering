/* Module: pnrs3260.dll
   Function: FUN_606f1260
   Address: 606f1260
   Source: Ghidra pseudocode (Stage 10 batch) */


HICON FUN_606f1260(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  HICON pHVar4;
  
  pHVar4 = (HICON)0x0;
  iVar1 = FUN_606f1a30(*(void **)(param_1 + 4),param_2 >> 0x10);
  if (iVar1 < 1) {
    return (HICON)0x0;
  }
  puVar2 = operator_new(iVar1 * 4);
  FUN_606f1a50(*(void **)(param_1 + 4),param_2 >> 0x10,puVar2,iVar1);
  param_1 = 0;
  if (0 < iVar1) {
    puVar3 = puVar2;
    do {
      pHVar4 = LoadIconA((HINSTANCE)*puVar3,(LPCSTR)(param_2 & 0xffff));
      if (pHVar4 != (HICON)0x0) break;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    } while (param_1 < iVar1);
  }
  operator_delete(puVar2);
  return pHVar4;
}


