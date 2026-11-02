/* Module: vegas30k.dll
   Function: FUN_011c2b00
   Address: 011c2b00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_011c2b00(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  *(int **)(param_1 + 0x1c) = param_2;
  if (param_2 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    (**(code **)(*param_2 + 4))(param_2);
    while( true ) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))
                        (*(int **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc),&param_2,0,0);
      if (iVar2 != 0) break;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
  }
  if ((*(int *)(param_1 + 0xc) == 0) && (piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0))
  {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return *(int *)(param_1 + 0xc) == 0;
  }
  FUN_011c2b80();
  return *(int *)(param_1 + 0xc) == 0;
}


