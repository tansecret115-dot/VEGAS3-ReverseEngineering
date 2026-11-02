/* Module: vegas30k.dll
   Function: FUN_011be400
   Address: 011be400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011be400(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x638);
  piVar1 = *(int **)(param_1 + 0x638);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return (-(uint)(*(int *)(param_1 + 0x638) != 0) & 0x7fffbffb) + 0x80004005;
}


