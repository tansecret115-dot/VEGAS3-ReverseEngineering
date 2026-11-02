/* Module: vegas30k.dll
   Function: FUN_0115eef0
   Address: 0115eef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115eef0(int param_1)

{
  FUN_0115eea0(param_1,0xd8);
  if (*(char *)(param_1 + 0xf9) != '\0') {
    FUN_0115ef30(param_1);
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    FUN_0115efd0(param_1);
  }
  return;
}


