/* Module: vegas30.exe
   Function: FUN_005618a0
   Address: 005618a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005618a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  if (DAT_00649e08 != 0) {
    FUN_005fcfc0(iVar1,0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                 *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),1,0,0x3ff00000,
                 param_2);
    return 0;
  }
  FUN_005fcfc0(iVar1,0,0,0,0,0,0,0,0x3ff00000,param_2);
  return 0;
}


