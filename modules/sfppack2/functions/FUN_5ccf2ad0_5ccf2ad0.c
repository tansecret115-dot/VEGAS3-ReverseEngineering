/* Module: sfppack2.dll
   Function: FUN_5ccf2ad0
   Address: 5ccf2ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccf2ad0(void *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(LPCVOID *)((int)param_1 + 0x4a4) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x4a4));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x4a4));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x4a4) = 0;
  }
  if (*(int *)((int)param_1 + 0x208) != 0) {
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_1 + 0x208) + 0x18);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_1 + 0x208) + 0x18));
      GlobalFree(pvVar2);
      *(undefined4 *)(*(int *)((int)param_1 + 0x208) + 0x18) = 0;
    }
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_1 + 0x208) + 0x1c);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_1 + 0x208) + 0x1c));
      GlobalFree(pvVar2);
      *(undefined4 *)(*(int *)((int)param_1 + 0x208) + 0x1c) = 0;
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x208));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x208));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x208) = 0;
  }
  if (*(int *)((int)param_1 + 0x20c) != 0) {
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_1 + 0x20c) + 0x18);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_1 + 0x20c) + 0x18));
      GlobalFree(pvVar2);
      *(undefined4 *)(*(int *)((int)param_1 + 0x20c) + 0x18) = 0;
    }
    pvVar1 = *(LPCVOID *)(*(int *)((int)param_1 + 0x20c) + 0x1c);
    if (pvVar1 != (LPCVOID)0x0) {
      pvVar2 = GlobalHandle(pvVar1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(*(int *)((int)param_1 + 0x20c) + 0x1c));
      GlobalFree(pvVar2);
      *(undefined4 *)(*(int *)((int)param_1 + 0x20c) + 0x1c) = 0;
    }
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x20c));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x20c));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x20c) = 0;
  }
  FUN_5ccea260(param_1,0x66);
  puVar3 = (undefined4 *)((int)param_1 + 0x138);
  for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x160);
  iVar4 = 4;
  do {
    *puVar3 = 0;
    puVar3[1] = 0x3ff00000;
    puVar3 = puVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(undefined4 **)((int)param_1 + 0x4bc) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)((int)param_1 + 0x4bc);
    for (iVar4 = 0xc80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x4c8) = 0;
  *(undefined4 *)((int)param_1 + 0x4c0) = 0;
  *(undefined4 *)((int)param_1 + 0x4c4) = 0;
  *(undefined4 *)((int)param_1 + 0x4cc) = 0;
  return 0;
}


