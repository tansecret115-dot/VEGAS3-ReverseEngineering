/* Module: rmme3260.dll
   Function: FUN_66201460
   Address: 66201460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66201460(int param_1,int param_2,int *param_3)

{
  if (param_2 == 0) {
    (**(code **)(*param_3 + 0x10))(param_3,s_StreamCount_6626f09c,(int *)(param_1 + 0x60));
    FUN_6620d610(*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x60));
  }
  return param_2;
}


