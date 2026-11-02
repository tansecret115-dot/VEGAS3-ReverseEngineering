/* Module: vegas30.exe
   Function: FUN_00452e30
   Address: 00452e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452e30(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xb24) == 0) {
    *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(param_1 + 0xad4);
    *(undefined4 *)(param_1 + 0xb1c) = 1;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x50 + *(int *)(param_1 + 0xb24) * 4);
    (**(code **)(*piVar1 + 0x1c))(param_1,piVar1,0x401,0,param_1 + 0xb1c);
  }
  CreateCaret(*(HWND *)(param_1 + 4),(HBITMAP)0x0,*(int *)(param_1 + 0xb1c),
              *(int *)(param_1 + 0xb20));
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  return;
}


