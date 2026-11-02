/* Module: vegas30k.dll
   Function: FUN_011b2390
   Address: 011b2390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b2390(int param_1,int param_2)

{
  int *piVar1;
  
  *(int *)(param_1 + 0x9c0) = param_2;
  *(uint *)(param_1 + 0xc) = (uint)(0 < param_2);
  if (0 < param_2 == 0) {
    piVar1 = *(int **)(param_1 + 0xc70);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,0);
      (**(code **)(**(int **)(param_1 + 0xc70) + 8))(*(int **)(param_1 + 0xc70));
    }
    *(undefined4 *)(param_1 + 0xc70) = 0;
  }
  return 0;
}


