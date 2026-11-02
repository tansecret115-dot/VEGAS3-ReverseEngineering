/* Module: rnco3260.dll
   Function: ConvertRGBtoYUV
   Address: 636f3d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void ConvertRGBtoYUV(int param_1,undefined1 *param_2,int param_3,undefined1 *param_4)

{
                    /* 0x3d20  3  ConvertRGBtoYUV */
  FUN_63718f30(param_2,param_3,param_4,(param_3 + 1) * 3 & 0xfffffffc,0,0,param_3,(uint)param_4,
               param_1,param_3,param_4,param_3,0,0,param_3,(int)param_4);
  return;
}


