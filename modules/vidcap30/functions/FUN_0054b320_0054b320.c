/* Module: vidcap30.exe
   Function: FUN_0054b320
   Address: 0054b320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054b320(int param_1,int param_2,undefined4 param_3)

{
  FUN_0054b370(param_1,(byte *)(param_1 + 0x114));
  if (((*(byte *)(param_1 + 0x114) & 0x20) == 0) &&
     (FUN_005495a0(param_1,"unknown critical chunk"), param_2 == 0)) {
    return;
  }
  if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  }
  FUN_005497b0(param_1,param_3);
  return;
}


