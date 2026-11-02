/* Module: rmto3260.dll
   Function: FUN_662df860
   Address: 662df860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662df860(int param_1)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5e) != 0) {
    if (*(short *)(param_1 + 0x5c) != 0) {
      do {
        operator_delete(*(void **)(*(int *)(param_1 + 0x5e) + 7 + (uint)uVar1 * 0x15));
        operator_delete(*(void **)(*(int *)(param_1 + 0x5e) + 0x11 + (uint)uVar1 * 0x15));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ushort *)(param_1 + 0x5c));
    }
    operator_delete(*(void **)(param_1 + 0x5e));
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
  }
  *(undefined2 *)(param_1 + 0x4c) = 0;
  if (*(void **)(param_1 + 0x4e) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x4e));
    *(undefined4 *)(param_1 + 0x4e) = 0;
  }
  if (*(void **)(param_1 + 0x52) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x52));
    *(undefined4 *)(param_1 + 0x52) = 0;
  }
  *(undefined2 *)(param_1 + 0x56) = 0;
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  FUN_662deba0(param_1);
  return;
}


