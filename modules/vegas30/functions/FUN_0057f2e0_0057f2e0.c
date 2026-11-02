/* Module: vegas30.exe
   Function: FUN_0057f2e0
   Address: 0057f2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057f2e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  iVar1 = FUN_0057f110();
  if (-1 < iVar1) {
    FUN_005845a0();
  }
  return;
}


