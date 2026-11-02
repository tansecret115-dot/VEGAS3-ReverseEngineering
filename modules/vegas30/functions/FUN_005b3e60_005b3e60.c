/* Module: vegas30.exe
   Function: FUN_005b3e60
   Address: 005b3e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005b3e60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005b5330();
  if (-1 < iVar1) {
    iVar1 = FUN_005b5330();
    if (-1 < iVar1) {
      FUN_005b3ea0(*(undefined4 *)(param_1 + 0x3b4),0);
      *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x428);
      FUN_005b3d40();
    }
  }
  return;
}


