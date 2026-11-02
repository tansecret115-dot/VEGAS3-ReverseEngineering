/* Module: encn3260.dll
   Function: FUN_66498280
   Address: 66498280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66498280(int param_1,undefined2 *param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    *param_2 = *(undefined2 *)(param_1 + 0x1c);
    return 0;
  }
  return 0x80004005;
}


