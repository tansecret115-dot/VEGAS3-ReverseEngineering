/* Module: vidcap30.exe
   Function: FUN_0057e350
   Address: 0057e350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057e350(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x24) = 0;
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 == (int *)0x0) {
    return 0x8004020a;
  }
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}


