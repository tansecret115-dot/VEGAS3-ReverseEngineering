/* Module: pnrs3260.dll
   Function: FUN_606f10b0
   Address: 606f10b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HBITMAP FUN_606f10b0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  HRSRC pHVar3;
  undefined4 *puVar4;
  HBITMAP local_8;
  
  local_8 = (HBITMAP)0x0;
  iVar1 = FUN_606f1a30(*(void **)(param_1 + 4),param_2 >> 0x10);
  if (0 < iVar1) {
    puVar2 = operator_new(iVar1 * 4);
    FUN_606f1a50(*(void **)(param_1 + 4),param_2 >> 0x10,puVar2,iVar1);
    if (0 < iVar1) {
      puVar4 = puVar2;
      param_1 = iVar1;
      do {
        pHVar3 = FindResourceA((HMODULE)*puVar4,(LPCSTR)(param_2 & 0xffff),(LPCSTR)0x2);
        if (pHVar3 != (HRSRC)0x0) {
          local_8 = LoadBitmapA((HINSTANCE)*puVar4,(LPCSTR)(param_2 & 0xffff));
        }
        puVar4 = puVar4 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    operator_delete(puVar2);
    return local_8;
  }
  return (HBITMAP)0x0;
}


