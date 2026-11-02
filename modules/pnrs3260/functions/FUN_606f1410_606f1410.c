/* Module: pnrs3260.dll
   Function: FUN_606f1410
   Address: 606f1410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_606f1410(int param_1,uint param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_606f1a30(*(void **)(param_1 + 4),param_2 >> 0x10);
  if (iVar1 < 1) {
    return 0;
  }
  puVar2 = operator_new(iVar1 * 4);
  FUN_606f1a50(*(void **)(param_1 + 4),param_2 >> 0x10,puVar2,iVar1);
  iVar3 = 0;
  puVar4 = puVar2;
  if (0 < iVar1) {
    do {
      if (local_8 != 0) break;
      local_8 = LoadStringA((HINSTANCE)*puVar4,param_2 & 0xffff,param_3,param_4);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < iVar1);
  }
  operator_delete(puVar2);
  return local_8;
}


