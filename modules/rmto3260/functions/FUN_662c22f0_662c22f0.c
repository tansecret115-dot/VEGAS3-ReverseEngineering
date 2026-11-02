/* Module: rmto3260.dll
   Function: FUN_662c22f0
   Address: 662c22f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c22f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x14);
  iVar2 = (**(code **)(*(int *)(param_1 + -0x14) + 0x28))
                    (piVar1,param_2,s_audio_x_pn_realaudio_6630a044);
  if (iVar2 < 0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,param_2,s_audio_x_pn_multirate_realaudio_6630a024);
  }
  return;
}


