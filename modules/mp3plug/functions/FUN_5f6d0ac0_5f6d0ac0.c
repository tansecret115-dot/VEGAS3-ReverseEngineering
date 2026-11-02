/* Module: mp3plug.dll
   Function: FUN_5f6d0ac0
   Address: 5f6d0ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6d0ac0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 100);
  param_2[1] = *(undefined4 *)(param_1 + 0xd0);
  param_2[2] = *(undefined4 *)(param_1 + 0xdc);
  param_2[3] = *(undefined4 *)(param_1 + 0xe0);
  param_2[4] = *(undefined4 *)(param_1 + 0x60);
  return 0;
}


