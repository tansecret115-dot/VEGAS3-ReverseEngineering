/* Module: vidcap30.exe
   Function: FUN_00569f90
   Address: 00569f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00569f90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0055eba0(param_3,0,param_4,0,*(undefined4 *)(param_1 + 0x109),*(undefined4 *)(param_1 + 0x55))
  ;
  FUN_00569f30(param_4,*(undefined4 *)(param_1 + 0x109),*(undefined4 *)(param_1 + 0x55),
               *(int *)(param_2 + 0x1c) << 3);
  return;
}


