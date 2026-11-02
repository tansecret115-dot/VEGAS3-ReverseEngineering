/* Module: vegas30k.dll
   Function: FUN_01127800
   Address: 01127800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01127800(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 0xdc) < *(uint *)(param_1 + 200)) {
    while( true ) {
      iVar1 = FUN_01149d50(param_1 + 0x6c,2);
      if (iVar1 != 0) {
        pcVar2 = *(char **)(param_1 + 0x84);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = "zlib error";
        }
        FUN_01155f80(param_1,pcVar2);
      }
      if (*(int *)(param_1 + 0x7c) != 0) break;
      FUN_011591b0(param_1,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
    }
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0x7c)) {
      FUN_011591b0(param_1,*(undefined4 *)(param_1 + 0xa4),
                   *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0x7c));
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
    }
    *(undefined4 *)(param_1 + 0x146) = 0;
    FUN_0115b3b0(param_1);
  }
  return;
}


