/* Module: vegas30k.dll
   Function: FUN_0118c470
   Address: 0118c470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0118c470(int param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return 0x8000ffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = param_2[1];
  if ((*param_2 & uVar1) != 0xffffffff) {
    *(uint *)(param_1 + 0x118) = *param_2;
    *(uint *)(param_1 + 0x11c) = uVar1;
  }
  uVar1 = param_2[5];
  if ((param_2[4] & uVar1) != 0xffffffff) {
    *(uint *)(param_1 + 0x128) = param_2[4];
    *(uint *)(param_1 + 300) = uVar1;
  }
  *(uint *)(param_1 + 0x138) = param_2[8];
  piVar2 = *(int **)(param_1 + 0x1f0);
  *(uint *)(param_1 + 0x13c) = param_2[9];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x1bc))(piVar2,0xffffffff,0xffffffff,param_1 + 0x118);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return 1;
}


