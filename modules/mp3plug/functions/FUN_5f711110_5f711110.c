/* Module: mp3plug.dll
   Function: FUN_5f711110
   Address: 5f711110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f711110(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_5f710b80();
  if ((char)uVar1 == '\0') {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(param_1 + 4);
  }
  if (piVar2 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar2 + 8))();
    return uVar1;
  }
  return 0;
}


