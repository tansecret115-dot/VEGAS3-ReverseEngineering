/* Module: mpegin.dll
   Function: mpegInCloseMPEG
   Address: 10009320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl mpegInCloseMPEG(int param_1)

{
  int iVar1;
  
                    /* 0x9320  3  mpegInCloseMPEG */
  if (param_1 == 0) {
    FUN_10007e90(0,(byte *)s_Invalid_mpegInInfo_parameter_1001816c);
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x12e54) != 0) {
      FUN_10009760(param_1);
      if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x308) < 2) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0x1c))(iVar1,1);
          iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x30c);
          (**(code **)(iVar1 + 0x20))(iVar1);
          *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x30c) = 0;
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x310);
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0x1c))(iVar1,1);
          iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x310);
          (**(code **)(iVar1 + 0x20))(iVar1);
          *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x310) = 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x150) != 0) {
          FUN_100054f0(*(int *)(param_1 + 0x12e54) + 0x128);
        }
        if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x228) != 0) {
          FUN_100054f0(*(int *)(param_1 + 0x12e54) + 0x200);
        }
      }
      iVar1 = **(int **)(*(int *)(param_1 + 0x12e54) + 0x128);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x12e50))(iVar1);
        **(undefined4 **)(*(int *)(param_1 + 0x12e54) + 0x128) = 0;
      }
      iVar1 = **(int **)(*(int *)(param_1 + 0x12e54) + 0x200);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x12e50))(iVar1);
        **(undefined4 **)(*(int *)(param_1 + 0x12e54) + 0x200) = 0;
      }
      if (**(int **)(param_1 + 0x12e54) != 0) {
        (**(code **)(param_1 + 0x12e50))(**(int **)(param_1 + 0x12e54));
        **(undefined4 **)(param_1 + 0x12e54) = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 4);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x12e50))(iVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 4) = 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x12e54) + 0x5c);
      if (iVar1 != 0) {
        (**(code **)(param_1 + 0x12e50))(iVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x5c) = 0;
      }
      (**(code **)(param_1 + 0x12e50))(*(undefined4 *)(param_1 + 0x12e54));
      *(undefined4 *)(param_1 + 0x12e54) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


