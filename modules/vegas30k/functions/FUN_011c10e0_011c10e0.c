/* Module: vegas30k.dll
   Function: FUN_011c10e0
   Address: 011c10e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c10e0(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return 0x8004e001;
  }
  piVar1 = *(int **)(param_1 + 0x140);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  ResetEvent(*(HANDLE *)(param_1 + 0x138));
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  SetEvent(*(HANDLE *)(param_1 + 0x138));
  CloseHandle(*(HANDLE *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x138) = 0;
  return 1;
}


