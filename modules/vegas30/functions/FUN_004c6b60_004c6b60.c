/* Module: vegas30.exe
   Function: FUN_004c6b60
   Address: 004c6b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c6b60(int param_1,undefined4 param_2,HMENU param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  iVar2 = FUN_0052b710(uVar1,param_2,0x1d);
  CheckMenuItem(param_3,0xa348,-(uint)(iVar2 != 0) & 8);
  iVar2 = FUN_0052b710(uVar1,param_2,0x1e);
  CheckMenuItem(param_3,0xa349,-(uint)(iVar2 != 0) & 8);
  return;
}


