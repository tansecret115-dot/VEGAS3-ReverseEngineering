/* Module: vegas30k.dll
   Function: FUN_0118b260
   Address: 0118b260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0118b260(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = *(int **)(param_1 + 0xd4);
  puVar1 = (undefined4 *)(param_1 + 0xd4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (param_2 == (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))(*(int **)(param_1 + 0xb0),puVar1);
  }
  else {
    *puVar1 = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    uVar3 = 0;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_0118ee70(*puVar1);
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_0118df20(*puVar1);
  }
  piVar2 = *(int **)(param_1 + 0x1e8);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x44))(piVar2,-(uint)(param_2 != (int *)0x0) & (uint)param_2);
  }
  piVar2 = *(int **)(param_1 + 0x1fc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0xc4));
  }
  return uVar3;
}


