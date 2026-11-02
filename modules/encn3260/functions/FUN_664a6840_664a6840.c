/* Module: encn3260.dll
   Function: FUN_664a6840
   Address: 664a6840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6840(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xac);
  param_2[1] = *(undefined4 *)(param_1 + 0xb0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
            (*(int **)(param_1 + 0x2c),s_MediaSizeX_664e33e0,param_2);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
            (*(int **)(param_1 + 0x2c),s_MediaSizeY_664e33d4,param_2 + 1);
  return 0;
}


