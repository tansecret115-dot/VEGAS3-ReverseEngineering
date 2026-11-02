/* Module: vegas30.exe
   Function: FUN_0054c120
   Address: 0054c120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0054c120(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0054b450(param_3,*(undefined4 *)(param_1 + 0x56c));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x574) != 0x1a) {
      iVar1 = FUN_0054b450(param_3,*(int *)(param_1 + 0x574));
      if (*(int *)(param_1 + 0x578) == 0) {
        iVar1 = -iVar1;
      }
    }
  }
  else if (*(int *)(param_1 + 0x570) == 0) {
    return -iVar1;
  }
  return iVar1;
}


