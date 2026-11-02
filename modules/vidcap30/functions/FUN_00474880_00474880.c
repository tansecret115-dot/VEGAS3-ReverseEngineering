/* Module: vidcap30.exe
   Function: FUN_00474880
   Address: 00474880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00474880(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  if (((*(byte *)(param_1 + 0x8c) & 4) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x90), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  return uVar2;
}


