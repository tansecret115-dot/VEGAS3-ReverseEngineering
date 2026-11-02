/* Module: vidcap30.exe
   Function: FUN_0052b5a0
   Address: 0052b5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052b5a0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 0xdc) < *(uint *)(param_1 + 200)) {
    while( true ) {
      iVar1 = FUN_0054f750(param_1 + 0x6c,2);
      if (iVar1 != 0) {
        pcVar2 = *(char **)(param_1 + 0x84);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "zlib error";
        }
        FUN_00549540(param_1,pcVar2);
      }
      if (*(int *)(param_1 + 0x7c) != 0) break;
      FUN_0054c8c0(param_1,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
    }
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0x7c)) {
      FUN_0054c8c0(param_1,*(undefined4 *)(param_1 + 0xa4),
                   *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
    }
    *(undefined4 *)(param_1 + 0x146) = 0;
    FUN_0054eac0(param_1);
  }
  return;
}


