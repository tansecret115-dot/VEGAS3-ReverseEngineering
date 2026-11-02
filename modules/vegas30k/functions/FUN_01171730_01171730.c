/* Module: vegas30k.dll
   Function: FUN_01171730
   Address: 01171730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01171730(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x35);
  if (iVar1 != 0) {
    iVar2 = 0;
    while (iVar1 = iVar1 >> 1, iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    FUN_01171620(param_1,*(undefined4 *)(param_1 + 0x31),iVar2 << 4);
    if (iVar2 != 0) {
      FUN_01171510(param_1,*(undefined4 *)(param_1 + 0x35),iVar2);
    }
    *(undefined4 *)(param_1 + 0x35) = 0;
    FUN_01171790(param_1,*(undefined4 *)(param_1 + 0x3d),*(undefined4 *)(param_1 + 0x39));
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  return;
}


