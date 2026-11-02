/* Module: mp3plug.dll
   Function: FUN_5f6d2270
   Address: 5f6d2270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** FUN_5f6d2270(uint param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x2070001;
  }
  if ((param_1 & 0xffff0000) == 0x2070000) {
    ppuVar1 = FUN_5f6cf990(1);
    if (ppuVar1 != (undefined **)0x0) {
      FUN_5f6d21b0((int *)ppuVar1);
    }
    return (undefined **)0x0;
  }
  ppuVar1 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0xae,(undefined *)0x0,
                         s_mismatch_between_encoder_interfa_5f75c1e0);
  return ppuVar1;
}


