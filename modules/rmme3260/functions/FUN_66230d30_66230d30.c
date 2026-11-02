/* Module: rmme3260.dll
   Function: FUN_66230d30
   Address: 66230d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66230d30(int param_1,undefined2 *param_2)

{
  if ((*(byte *)(param_1 + 0x6c) & 8) != 0) {
    *param_2 = *(undefined2 *)(param_1 + 0x34);
    return 0;
  }
  return 0x80004005;
}


