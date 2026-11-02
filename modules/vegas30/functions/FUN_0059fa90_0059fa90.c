/* Module: vegas30.exe
   Function: FUN_0059fa90
   Address: 0059fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0059fa90(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 4);
  return;
}


