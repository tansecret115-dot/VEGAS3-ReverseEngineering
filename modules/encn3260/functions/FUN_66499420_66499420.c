/* Module: encn3260.dll
   Function: FUN_66499420
   Address: 66499420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66499420(int param_1,undefined4 param_2,undefined2 param_3,int *param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  if (param_4 == (int *)0x0) {
    return 0x80040009;
  }
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(int **)(param_1 + 0x14) = param_4;
  (**(code **)(*param_4 + 4))(param_4);
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x14))
            (*(undefined4 **)(param_1 + 0x14),&DAT_664dc770,(undefined4 *)(param_1 + 0x74));
  *(undefined2 *)(param_1 + 0x1c) = 2;
  uVar3 = FUN_664d0230(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar2 = FUN_664d01f0(param_3);
  *(undefined2 *)(param_1 + 0x1e) = uVar2;
  *(undefined2 *)(param_1 + 0x6d) = param_3;
  return 0;
}


