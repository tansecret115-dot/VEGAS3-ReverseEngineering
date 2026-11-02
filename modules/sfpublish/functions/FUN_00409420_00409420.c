/* Module: sfpublish.dll
   Function: FUN_00409420
   Address: 00409420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409420(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_2;
  iVar3 = param_1;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int **)(iVar3 + 0x7c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)(iVar3 + 0x7c) = piVar4;
  puVar2 = *(undefined4 **)(iVar3 + 8);
  param_1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar4 = (int *)&DAT_0043caa0;
    (**(code **)*puVar2)(puVar2,&DAT_0043caa0,&param_1);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x14))(piVar4);
      (**(code **)(iRamfffffd41 + 8))(0xfffffd41);
    }
  }
  return 0;
}


