/* Module: vegas30k.dll
   Function: FUN_01177970
   Address: 01177970
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_01177970(int param_1)

{
  int *piVar1;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0xd4);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,&local_4);
    return piVar1;
  }
  piVar1 = (int *)_SfGetMillisec_0();
  return piVar1;
}


