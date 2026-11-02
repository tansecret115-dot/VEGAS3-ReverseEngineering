/* Module: vegas30k.dll
   Function: FUN_011d2960
   Address: 011d2960
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011d2960(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_011c62e0(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c));
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffff9;
    (**(code **)(param_1 + 0x15c))(param_1,5,*(undefined4 *)(param_1 + 0x160),0,0,0,0);
    iVar1 = 0;
  }
  return iVar1;
}


