/* Module: pnrs3260.dll
   Function: FUN_606f1690
   Address: 606f1690
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE __thiscall FUN_606f1690(void *this,uint param_1,int param_2,int param_3,UINT param_4)

{
  int iVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  undefined4 *puVar4;
  int local_8;
  
  pvVar3 = (HANDLE)0x0;
  iVar1 = FUN_606f1a30(*(void **)((int)this + 4),param_1 >> 0x10);
  if (iVar1 < 1) {
    return (HANDLE)0x0;
  }
  puVar2 = operator_new(iVar1 * 4);
  FUN_606f1a50(*(void **)((int)this + 4),param_1 >> 0x10,puVar2,iVar1);
  local_8 = 0;
  if (0 < iVar1) {
    puVar4 = puVar2;
    do {
      pvVar3 = LoadImageA((HINSTANCE)*puVar4,(LPCSTR)(param_1 & 0xffff),param_4,param_2,param_3,0);
      if (pvVar3 != (HANDLE)0x0) break;
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 1;
    } while (local_8 < iVar1);
  }
  operator_delete(puVar2);
  return pvVar3;
}


