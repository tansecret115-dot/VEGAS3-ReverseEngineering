/* Module: vegas30k.dll
   Function: _SfDropShadow@52
   Address: 010f56c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfDropShadow_52(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 in_stack_00000034;
  
                    /* 0xf56c0  907  _SfDropShadow@52 */
  _SfDropShadow_Pixel_44
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             *(ushort *)(param_1 + 0xe) >> 3,in_stack_00000034);
  return;
}


