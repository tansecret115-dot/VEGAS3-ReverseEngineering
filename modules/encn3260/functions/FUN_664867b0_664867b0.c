/* Module: encn3260.dll
   Function: FUN_664867b0
   Address: 664867b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_664867b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,short param_7,int param_8,int param_9)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x152) = 1;
  (**(code **)(**(int **)(param_1 + 0x16c) + 4))();
  if (param_1 + -0x34 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_1 + 0x14);
  }
  uVar2 = FUN_6648ccc0(param_1 + -0x34,param_3,piVar1,(void *)param_3,param_4,param_6,param_7,
                       param_8,param_9);
  (**(code **)(**(int **)(param_1 + 0x16c) + 8))();
  return uVar2;
}


