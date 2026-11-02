/* Module: rmme3260.dll
   Function: FUN_6622e8c0
   Address: 6622e8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622e8c0(int param_1,undefined2 *param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    *param_2 = *(undefined2 *)(param_1 + 0x1c);
    return 0;
  }
  return 0x80004005;
}


