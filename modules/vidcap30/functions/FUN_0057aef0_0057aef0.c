/* Module: vidcap30.exe
   Function: FUN_0057aef0
   Address: 0057aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057aef0(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0057af10();
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(int *)(param_1 + 0x28) = param_2;
  return;
}


