/* Module: vidcap30.exe
   Function: FUN_005807e0
   Address: 005807e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005807e0(int param_1)

{
  int *piVar1;
  
  while (piVar1 = *(int **)(param_1 + 0x28), piVar1 != (int *)0x0) {
    *(int *)(param_1 + 0x28) = piVar1[7];
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    (**(code **)(*piVar1 + 0x54))(1);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(LPVOID *)(param_1 + 0x60) != (LPVOID)0x0) {
    VirtualFree(*(LPVOID *)(param_1 + 0x60),0,0x8000);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}


