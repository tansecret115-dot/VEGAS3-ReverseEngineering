/* Module: vegas30k.dll
   Function: FUN_011d2780
   Address: 011d2780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011d2780(int param_1)

{
  int iVar1;
  
  iVar1 = -0x7ffb1fff;
  if (((*(byte *)(param_1 + 0x154) & 1) != 0) &&
     (iVar1 = FUN_011c62d0(param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),0
                           ,0), -1 < iVar1)) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffffb | 2;
    (**(code **)(param_1 + 0x15c))(param_1,4,*(undefined4 *)(param_1 + 0x160),0,0,0,0);
  }
  return iVar1;
}


