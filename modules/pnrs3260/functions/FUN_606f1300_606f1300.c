/* Module: pnrs3260.dll
   Function: FUN_606f1300
   Address: 606f1300
   Source: Ghidra pseudocode (Stage 10 batch) */


HCURSOR FUN_606f1300(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  HCURSOR local_8;
  
  local_8 = (HCURSOR)0x0;
  iVar1 = FUN_606f1a30(*(void **)(param_1 + 4),param_2 >> 0x10);
  if (0 < iVar1) {
    puVar2 = operator_new(iVar1 * 4);
    FUN_606f1a50(*(void **)(param_1 + 4),param_2 >> 0x10,puVar2,iVar1);
    if (0 < iVar1) {
      puVar3 = puVar2;
      do {
        local_8 = LoadCursorA((HINSTANCE)*puVar3,(LPCSTR)(param_2 & 0xffff));
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    operator_delete(puVar2);
    return local_8;
  }
  return (HCURSOR)0x0;
}


