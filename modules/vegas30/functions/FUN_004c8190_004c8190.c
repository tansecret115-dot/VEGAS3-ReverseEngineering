/* Module: vegas30.exe
   Function: FUN_004c8190
   Address: 004c8190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c8190(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_00647630;
  if (DAT_00647630 != 0) {
    FUN_004c7de0(DAT_00647630,param_1,param_2);
    **(uint **)(iVar1 + 0x5d0) = **(uint **)(iVar1 + 0x5d0) | 1;
    FUN_004530a0(iVar1,0x1000);
    FUN_00456c20(iVar1);
    return;
  }
  FUN_005cb070(param_1,-(param_2 != 0) & 0x80,0x80);
  return;
}


