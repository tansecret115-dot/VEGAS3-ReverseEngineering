/* Module: mp3plug.dll
   Function: FUN_5f6d1930
   Address: 5f6d1930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined ** FUN_5f6d1930(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = *param_3;
    break;
  default:
    ppuVar1 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75c180,(char *)0x42d,
                           (undefined *)0x0,s_invalid_function_parameter_5f75c220);
    return ppuVar1;
  case 2:
    param_1[1] = 1;
    break;
  case 3:
    param_1[3] = 1;
    break;
  case 4:
    param_1[4] = *param_3;
    break;
  case 5:
    param_1[5] = 0;
    break;
  case 6:
    param_1[6] = *param_3;
    break;
  case 7:
    param_1[7] = *param_3;
    break;
  case 8:
    param_1[2] = *param_3;
  }
  return (undefined **)0x0;
}


