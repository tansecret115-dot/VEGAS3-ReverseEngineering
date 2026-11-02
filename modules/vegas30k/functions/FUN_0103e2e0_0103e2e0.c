/* Module: vegas30k.dll
   Function: FUN_0103e2e0
   Address: 0103e2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0103e2e0(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPCVOID unaff_EDI;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_0103dc00(param_1,&local_4);
  if (-1 < iVar1) {
    iVar1 = (*param_2)(param_3,local_4);
    pvVar2 = GlobalHandle(unaff_EDI);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(unaff_EDI);
    GlobalFree(pvVar2);
  }
  return iVar1;
}


