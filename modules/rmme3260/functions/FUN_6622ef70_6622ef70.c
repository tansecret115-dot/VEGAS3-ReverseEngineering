/* Module: rmme3260.dll
   Function: FUN_6622ef70
   Address: 6622ef70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622ef70(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x68) = param_3;
    return 0;
  }
  if (param_2 != 1) {
    return 0x80004005;
  }
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  return 0;
}


