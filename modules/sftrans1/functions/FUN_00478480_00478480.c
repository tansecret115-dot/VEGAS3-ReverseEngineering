/* Module: sftrans1.dll
   Function: FUN_00478480
   Address: 00478480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00478480(undefined4 *param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  for (iVar3 = 0x72; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x72] = param_2[0x72];
  if ((LPCVOID)param_1[0x73] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x73]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x73]);
    GlobalFree(pvVar1);
    param_1[0x73] = 0;
  }
  if (param_1[0x72] != 0) {
    pvVar1 = GlobalAlloc(2,param_1[0x72]);
    puVar2 = GlobalLock(pvVar1);
    uVar5 = param_1[0x72];
    param_1[0x73] = puVar2;
    puVar6 = (undefined4 *)param_2[0x73];
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return;
}


