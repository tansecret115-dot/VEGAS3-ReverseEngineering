/* Module: vidcap30.exe
   Function: FUN_00553cc0
   Address: 00553cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553cc0(int param_1)

{
  FUN_00553c70(param_1,0xd8);
  if (*(char *)(param_1 + 0xf9) != '\0') {
    FUN_00553d00(param_1);
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    FUN_00553da0(param_1);
  }
  return;
}


