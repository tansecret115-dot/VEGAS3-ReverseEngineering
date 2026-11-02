/* Module: rmbe3260.dll
   Function: FUN_66015640
   Address: 66015640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66015640(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(int **)(param_1 + 0x34) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x34) + 0x10))
                    (*(int **)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  return 0;
}


