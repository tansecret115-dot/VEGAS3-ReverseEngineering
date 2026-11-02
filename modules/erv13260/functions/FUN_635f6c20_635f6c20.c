/* Module: erv13260.dll
   Function: FUN_635f6c20
   Address: 635f6c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635f6c20(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18b] = 0;
  param_1[0x87] = s_excell_out_63606410._0_4_;
  param_1[0x88] = s_excell_out_63606410._4_4_;
  *(undefined2 *)(param_1 + 0x89) = s_excell_out_63606410._8_2_;
  *(char *)((int)param_1 + 0x226) = s_excell_out_63606410[10];
  param_1[200] = s_excell_in_63606404._0_4_;
  param_1[0xc9] = s_excell_in_63606404._4_4_;
  *(undefined2 *)(param_1 + 0xca) = s_excell_in_63606404._8_2_;
  param_1[0x109] = DAT_636063fc;
  param_1[0x10a] = DAT_63606400;
  param_1[0x14a] = s_stats_out_636063f0._0_4_;
  param_1[0x14b] = s_stats_out_636063f0._4_4_;
  *(undefined2 *)(param_1 + 0x14c) = s_stats_out_636063f0._8_2_;
  return;
}


