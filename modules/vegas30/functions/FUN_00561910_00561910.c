/* Module: vegas30.exe
   Function: FUN_00561910
   Address: 00561910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00561910(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  FUN_005fd510(0xffffffff,0xffffffff,0xffffffff,0xffffffff,*(undefined4 *)(iVar1 + 8),
               *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(param_2 + 0x20),
               *(undefined4 *)(param_2 + 0x24),DAT_00649e08);
  return 0;
}


