/* Module: rmme3260.dll
   Function: FUN_6623c3e0
   Address: 6623c3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c3e0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xac);
  param_2[1] = *(undefined4 *)(param_1 + 0xb0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
            (*(int **)(param_1 + 0x2c),s_MediaSizeX_6626fec0,param_2);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))
            (*(int **)(param_1 + 0x2c),s_MediaSizeY_6626feb4,param_2 + 1);
  return 0;
}


