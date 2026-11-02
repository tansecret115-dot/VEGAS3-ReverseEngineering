/* Module: rmme3260.dll
   Function: FUN_66219130
   Address: 66219130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66219130(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5e) != 0) {
    iVar1 = 0;
    if (*(short *)(param_1 + 0x5c) != 0) {
      iVar2 = 0;
      do {
        operator_delete(*(void **)(*(int *)(param_1 + 0x5e) + 7 + iVar2));
        operator_delete(*(void **)(*(int *)(param_1 + 0x5e) + 0x11 + iVar2));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x15;
      } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x5c));
    }
    if (*(void **)(param_1 + 0x5e) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x5e));
      *(undefined4 *)(param_1 + 0x5e) = 0;
    }
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  return 0;
}


