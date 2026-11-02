/* Module: vidcap30.exe
   Function: _TrackbarInst_Draw@8
   Address: 004b3a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _TrackbarInst_Draw_8(int param_1,undefined4 param_2)

{
                    /* 0xb3a00  727  _TrackbarInst_Draw@8 */
  FUN_004b0eb0(param_1,param_2);
  FUN_004b0590(param_1,param_2);
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_004b0410(param_1,param_2);
    FUN_004b13a0(param_1,param_2);
    return;
  }
  FUN_004afe00(param_1,param_2);
  FUN_004b13a0(param_1,param_2);
  return;
}


