/* Module: rmto3260.dll
   Function: FUN_662c23b0
   Address: 662c23b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c23b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x14);
  iVar2 = (**(code **)(*(int *)(param_1 + -0x14) + 0x28))
                    (piVar1,param_2,s_application_x_pn_imagemap_6630a0fc);
  if (iVar2 < 0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,param_2,s_application_x_pn_multirate_image_6630a0d8);
  }
  return;
}


