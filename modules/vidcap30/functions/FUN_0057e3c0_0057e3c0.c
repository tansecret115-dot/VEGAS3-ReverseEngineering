/* Module: vidcap30.exe
   Function: FUN_0057e3c0
   Address: 0057e3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057e3c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    return 0x80040209;
  }
  uVar2 = (**(code **)(*piVar1 + 0x40))(piVar1);
  return uVar2;
}


