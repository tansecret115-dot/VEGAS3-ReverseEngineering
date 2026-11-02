/* Module: vegas30.exe
   Function: FUN_004224e0
   Address: 004224e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004224e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040c050(200);
  if (iVar1 == param_2) {
    return *(int *)(iVar1 + 0x248) == 0;
  }
  return false;
}


