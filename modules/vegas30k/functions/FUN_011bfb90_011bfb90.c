/* Module: vegas30k.dll
   Function: FUN_011bfb90
   Address: 011bfb90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011bfb90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1f0) + -1;
  *(int *)(param_1 + 0x1f0) = iVar1;
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 500) != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x54))(*(int **)(param_1 + 0x18));
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined4 *)(param_1 + 500) = 0;
    }
    uVar2 = FUN_011aafa0(param_1);
    FUN_011aaf70(param_1,uVar2 & 0xffffffef);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
  }
  return 0;
}


