/* Module: sfnetmedia.dll
   Function: FUN_00409620
   Address: 00409620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409620(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -0x34;
  }
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int **)(iVar3 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(iVar3 + 0x38) = param_2;
  puVar2 = *(undefined4 **)(param_1 + 4);
  uVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,&DAT_0043c8d0,param_1 + 0x94);
  }
  if ((param_2 == (int *)0x0) && (piVar1 = *(int **)(param_1 + 0x94), piVar1 != (int *)0x0)) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return uVar4;
}


