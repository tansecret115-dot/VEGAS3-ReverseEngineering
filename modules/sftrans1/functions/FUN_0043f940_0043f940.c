/* Module: sftrans1.dll
   Function: FUN_0043f940
   Address: 0043f940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043f940(undefined4 *param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar2 = param_2;
  puVar6 = param_1;
  for (iVar3 = 0xb2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xb3] = param_2[0xb3];
  if ((wchar_t *)param_2[0xb4] != (wchar_t *)0x0) {
    if ((wchar_t *)param_1[0xb4] == (wchar_t *)0x0) {
      param_1[0xb2] = param_2[0xb2];
      pvVar1 = GlobalAlloc(2,param_2[0xb2]);
      puVar2 = GlobalLock(pvVar1);
      param_1[0xb4] = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      uVar5 = param_2[0xb2];
      puVar6 = (undefined4 *)param_2[0xb4];
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
      return 0;
    }
    iVar3 = wcscmp((wchar_t *)param_1[0xb4],(wchar_t *)param_2[0xb4]);
    if (iVar3 != 0) {
      param_1[0xb2] = param_2[0xb2];
      pvVar1 = GlobalHandle((LPCVOID)param_1[0xb4]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_1[0xb4]);
      GlobalFree(pvVar1);
      pvVar1 = GlobalAlloc(2,param_2[0xb2]);
      puVar2 = GlobalLock(pvVar1);
      param_1[0xb4] = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      uVar5 = param_2[0xb2];
      puVar6 = (undefined4 *)param_2[0xb4];
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
  }
  return 0;
}


