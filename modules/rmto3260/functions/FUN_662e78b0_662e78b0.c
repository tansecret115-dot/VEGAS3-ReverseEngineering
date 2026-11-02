/* Module: rmto3260.dll
   Function: FUN_662e78b0
   Address: 662e78b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662e78b0(undefined4 *param_1)

{
  void *pvVar1;
  ushort uVar2;
  
  uVar2 = 0;
  *param_1 = &PTR_FUN_66307a10;
  if ((void *)param_1[0x36] != (void *)0x0) {
    operator_delete((void *)param_1[0x36]);
    param_1[0x36] = 0;
  }
  if ((void *)param_1[0x37] != (void *)0x0) {
    operator_delete((void *)param_1[0x37]);
    param_1[0x37] = 0;
  }
  if ((void *)param_1[0x38] != (void *)0x0) {
    operator_delete((void *)param_1[0x38]);
    param_1[0x38] = 0;
  }
  if ((void *)param_1[0x39] != (void *)0x0) {
    operator_delete((void *)param_1[0x39]);
    param_1[0x39] = 0;
  }
  if (param_1[0x3c] != 0) {
    if (*(short *)(param_1 + 0x40) != 0) {
      do {
        pvVar1 = *(void **)((uint)uVar2 * 4 + param_1[0x3c]);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          *(undefined4 *)((uint)uVar2 * 4 + param_1[0x3c]) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 0x40));
    }
    operator_delete((void *)param_1[0x3c]);
    param_1[0x3c] = 0;
  }
  uVar2 = 0;
  if (param_1[0x3d] != 0) {
    if (*(short *)(param_1 + 0x40) != 0) {
      do {
        pvVar1 = *(void **)((uint)uVar2 * 4 + param_1[0x3d]);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          *(undefined4 *)((uint)uVar2 * 4 + param_1[0x3d]) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 0x40));
    }
    operator_delete((void *)param_1[0x3d]);
    param_1[0x3d] = 0;
  }
  if ((void *)param_1[0x3e] != (void *)0x0) {
    operator_delete((void *)param_1[0x3e]);
    param_1[0x3e] = 0;
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    operator_delete((void *)param_1[0x3f]);
    param_1[0x3f] = 0;
  }
  if ((void *)param_1[0x3a] != (void *)0x0) {
    operator_delete((void *)param_1[0x3a]);
    param_1[0x3a] = 0;
  }
  if ((void *)param_1[0x3b] != (void *)0x0) {
    operator_delete((void *)param_1[0x3b]);
    param_1[0x3b] = 0;
  }
  if (*(void **)((int)param_1 + 0x122) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x122));
    *(undefined4 *)((int)param_1 + 0x122) = 0;
  }
  FUN_662e2bf0(param_1);
  return;
}


