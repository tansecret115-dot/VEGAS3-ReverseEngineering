/* Module: vegas30k.dll
   Function: FUN_01002390
   Address: 01002390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01002390(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_1 + 0xc);
  uVar2 = -(uint)(*(int *)(param_1 + 4) != 0) & (uint)(param_1 + 4);
  if (uVar2 != 0) {
    FUN_01121a00(uVar2,-(uint)(*(int *)(param_1 + 8) != 0) & (uint)(param_1 + 8),
                 -(uint)(*piVar1 != 0) & (uint)piVar1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *piVar1 = 0;
  return;
}


