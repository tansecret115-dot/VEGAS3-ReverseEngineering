/* Module: vegas30k.dll
   Function: FUN_011ce2a0
   Address: 011ce2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ce2a0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x2b8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x2b8) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  iVar3 = param_1;
  if ((*(int *)(param_1 + 0x2ac) == 0) &&
     (iVar3 = *(int *)(param_1 + 0x2a4), *(int *)(param_1 + 0x2a4) == 0)) {
    iVar3 = *(int *)(param_1 + 0x2a8);
  }
  uVar2 = FUN_011cb2a0(iVar3,param_2);
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x280) = uVar2;
  *(undefined4 *)(param_1 + 0x28c) = 0x3ff00000;
  return 0;
}


