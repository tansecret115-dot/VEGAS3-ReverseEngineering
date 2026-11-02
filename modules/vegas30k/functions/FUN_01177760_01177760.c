/* Module: vegas30k.dll
   Function: FUN_01177760
   Address: 01177760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01177760(int param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return 0x8000ffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = param_2[1];
  if ((*param_2 & uVar1) != 0xffffffff) {
    *(uint *)(param_1 + 0xd8) = *param_2;
    *(uint *)(param_1 + 0xdc) = uVar1;
  }
  uVar1 = param_2[5];
  if ((param_2[4] & uVar1) != 0xffffffff) {
    *(uint *)(param_1 + 0xe8) = param_2[4];
    *(uint *)(param_1 + 0xec) = uVar1;
  }
  *(uint *)(param_1 + 0xf8) = param_2[8];
  if (param_2[9] != 0xffffffff) {
    *(uint *)(param_1 + 0xfc) = param_2[9];
  }
  if (param_2[10] != 0xffffffff) {
    *(uint *)(param_1 + 0x100) = param_2[10];
  }
  piVar2 = *(int **)(param_1 + 0x1f0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x1b4))(piVar2,0xffffffff,0xffffffff,param_1 + 0xd8);
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_0118f520(*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0xe8),
                 *(undefined4 *)(param_1 + 0xec));
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_0118e450(param_1 + 0xd8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 1;
}


