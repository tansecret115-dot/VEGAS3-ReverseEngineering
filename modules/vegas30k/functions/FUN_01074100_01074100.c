/* Module: vegas30k.dll
   Function: FUN_01074100
   Address: 01074100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01074100(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01074070(param_1 + 0x5f,*(undefined1 *)(param_1 + 0xe3),param_2 + 0x5f,
                       *(undefined1 *)(param_2 + 0xe3),0x40);
  if (iVar1 == 0) {
    FUN_01074070(param_1 + 0x61 + (uint)*(byte *)(param_1 + 0xe3) * 2,
                 *(undefined1 *)(param_1 + 0xe4),
                 param_2 + 0x61 + (uint)*(byte *)(param_2 + 0xe3) * 2,
                 *(undefined1 *)(param_2 + 0xe4),0x40);
  }
  return;
}


