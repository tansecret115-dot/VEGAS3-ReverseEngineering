/* Module: vegas30k.dll
   Function: FUN_011a09d0
   Address: 011a09d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011a09d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x24) + 0x7fc);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
  if (iVar2 != 0) {
    return 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x24) + 0x7fc);
  (**(code **)(*piVar1 + 0x20))(piVar1);
  if (&stack0x00000000 != (undefined1 *)0xb) {
    return 1;
  }
  FUN_011a0ee0(*(undefined4 *)(param_1 + 0xa8),0x10,param_4,unaff_ESI,param_1,param_2);
  return 0;
}


