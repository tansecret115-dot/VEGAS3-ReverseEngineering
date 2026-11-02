/* Module: vidcap30.exe
   Function: FUN_00549c50
   Address: 00549c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00549c50(int param_1,int param_2,int param_3)

{
  if ((((*(uint *)(param_1 + 0x60) & 1) == 0) || ((*(uint *)(param_1 + 0x60) & 4) == 0)) &&
     (FUN_00549540(param_1,"No image in file"), param_2 == 0)) {
    return;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x18;
  if (param_3 != 0) {
    FUN_00549570(param_1,"Incorrect IEND chunk length");
  }
  FUN_005497b0(param_1,param_3);
  return;
}


