/* Module: rv103260.dll
   Function: FUN_636a11d0
   Address: 636a11d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636a11d0(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 100) == 0) {
    pvVar1 = operator_new(*(int *)(param_1 + 0x74) << 2);
    *(void **)(param_1 + 100) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x80004005;
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 0x74) != 1 && -1 < *(int *)(param_1 + 0x74) + -1) {
      do {
        pvVar1 = operator_new((uint)(*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x6c) * 3) >> 1);
        *(void **)(*(int *)(param_1 + 100) + iVar2 * 4) = pvVar1;
        if (*(int *)(*(int *)(param_1 + 100) + iVar2 * 4) == 0) {
          return 0x80004005;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x74) + -1);
    }
    *(undefined4 *)(*(int *)(param_1 + 100) + -4 + *(int *)(param_1 + 0x74) * 4) =
         *(undefined4 *)(param_1 + 0x5c);
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 8) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x144);
    do {
      pvVar1 = operator_new((uint)(*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x6c) * 3) >> 1);
      *puVar3 = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0x80004005;
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 8));
    return 0;
  }
  return 0;
}


