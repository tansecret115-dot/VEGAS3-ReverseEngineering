/* Module: rmbe3260.dll
   Function: FUN_66017b50
   Address: 66017b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66017b50(int param_1)

{
  void *pvVar1;
  ushort uVar2;
  int iVar3;
  
  uVar2 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(short *)(param_1 + 6) != 0) {
      do {
        iVar3 = (uint)uVar2 * 0x22;
        pvVar1 = *(void **)(iVar3 + 0xc + *(int *)(param_1 + 0x18));
        if (pvVar1 != (void *)0x0) {
          FUN_66017ce0((void *)(param_1 + -0x14),pvVar1);
        }
        pvVar1 = *(void **)(iVar3 + 0x18 + *(int *)(param_1 + 0x18));
        if (pvVar1 != (void *)0x0) {
          FUN_66017c60((void *)(param_1 + -0x14),pvVar1);
        }
        pvVar1 = *(void **)(iVar3 + 0x1e + *(int *)(param_1 + 0x18));
        if (pvVar1 != (void *)0x0) {
          FUN_66017c60((void *)(param_1 + -0x14),pvVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 6));
    }
    operator_delete(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
  }
  return 0;
}


