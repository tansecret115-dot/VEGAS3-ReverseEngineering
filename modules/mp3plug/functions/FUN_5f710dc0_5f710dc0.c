/* Module: mp3plug.dll
   Function: FUN_5f710dc0
   Address: 5f710dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f710dc0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_5f710990();
  if ((char)uVar1 == '\0') {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(param_1 + 4);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    return 0;
  }
  return 0xc0000003;
}


