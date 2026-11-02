/* Module: vegas30.exe
   Function: FUN_004c4b90
   Address: 004c4b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c4b90(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004c4980(param_1,param_2,param_3);
  *(undefined1 *)(iVar1 + param_3) = 0x20;
  iVar2 = FUN_004c4530(param_1,param_2,iVar1 + 1 + param_3);
  return iVar2 + iVar1 + 1;
}


