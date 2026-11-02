/* Module: sfpublish.dll
   Function: FUN_00421dd0
   Address: 00421dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00421dd0(int param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  code *pcVar3;
  
  pvVar1 = *(LPCVOID *)(param_1 + 0x78);
  pcVar3 = GlobalFree_exref;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    pcVar3 = GlobalFree_exref;
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x7c);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    (*pcVar3)(pvVar2);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    (*pcVar3)(pvVar2);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  pvVar1 = *(LPCVOID *)(param_1 + 0x80);
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    (*pcVar3)(pvVar2);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}


