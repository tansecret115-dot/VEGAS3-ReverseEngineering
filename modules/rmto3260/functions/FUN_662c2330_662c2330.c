/* Module: rmto3260.dll
   Function: FUN_662c2330
   Address: 662c2330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c2330(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x14);
  iVar2 = (**(code **)(*(int *)(param_1 + -0x14) + 0x28))
                    (piVar1,param_2,s_video_x_pn_realvideo_6630a07c);
  if (iVar2 < 0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,param_2,s_video_x_pn_multirate_realvideo_6630a05c);
  }
  return;
}


