/* Module: rmbe3260.dll
   Function: FUN_66042c40
   Address: 66042c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66042c40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = operator_new(0x14);
      if (puVar1 == (undefined4 *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_6605c3e0(puVar1);
      }
      *(int *)(param_1 + 8) = iVar2;
      if (iVar2 == 0) {
        return 0x8007000e;
      }
    }
    FUN_6605c550(*(void **)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}


