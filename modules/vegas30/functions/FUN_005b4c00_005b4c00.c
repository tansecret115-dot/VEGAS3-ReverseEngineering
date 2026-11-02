/* Module: vegas30.exe
   Function: FUN_005b4c00
   Address: 005b4c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005b4c00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b51d0();
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x138);
    FUN_005b7d40(*(undefined4 *)(param_1 + 0x3b4));
    return;
  }
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x42c);
  FUN_005b7d40(*(undefined4 *)(param_1 + 0x3b4));
  return;
}


