/* Module: vegas30k.dll
   Function: FUN_011b5d70
   Address: 011b5d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_011b5d70(int param_1)

{
  int *piVar1;
  int *local_4;
  
  local_4 = (int *)0x0;
  local_4 = (int *)_SfGetMillisec_0();
  piVar1 = *(int **)(param_1 + 0x140);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,&local_4);
    local_4 = piVar1;
  }
  return local_4;
}


