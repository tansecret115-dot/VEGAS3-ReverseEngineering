/* Module: sftrans1.dll
   Function: FUN_00544100
   Address: 00544100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544100(int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  SIZE_T dwBytes;
  LPVOID pvVar3;
  undefined1 *puVar4;
  UINT uFlags;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    if (0 < **(int **)(param_1 + 0xa0)) {
      FUN_00543790();
    }
    FUN_005439d0();
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  puVar1 = *(undefined4 **)((*(int **)(param_1 + 0xa0))[2] + -4 + **(int **)(param_1 + 0xa0) * 4);
  if ((LPCVOID)*puVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)*puVar1);
    GlobalUnlock(pvVar2);
    dwBytes = puVar1[1] + 1;
    uFlags = 2;
    pvVar2 = GlobalHandle((LPCVOID)*puVar1);
    pvVar2 = GlobalReAlloc(pvVar2,dwBytes,uFlags);
    pvVar3 = GlobalLock(pvVar2);
    *puVar1 = pvVar3;
    *(undefined1 *)(puVar1[1] + (int)pvVar3) = param_2;
    puVar1[1] = puVar1[1] + 1;
    return 0;
  }
  pvVar2 = GlobalAlloc(2,2);
  puVar4 = GlobalLock(pvVar2);
  *puVar1 = puVar4;
  *puVar4 = param_2;
  puVar1[1] = 1;
  return 0;
}


