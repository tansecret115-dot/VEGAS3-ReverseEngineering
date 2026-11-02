/* Module: sftrans1.dll
   Function: FUN_00478180
   Address: 00478180
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00478180(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x72; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((LPCVOID)param_1[0x73] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x73]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x73]);
    GlobalFree(pvVar1);
    param_1[0x72] = 0;
    param_1[0x73] = 0;
  }
  return;
}


