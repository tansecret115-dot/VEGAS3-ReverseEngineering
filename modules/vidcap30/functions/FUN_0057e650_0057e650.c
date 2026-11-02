/* Module: vidcap30.exe
   Function: FUN_0057e650
   Address: 0057e650
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057e650(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x9c) + 8))(*(int **)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return 0;
}


