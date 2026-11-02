/* Module: vidpcore.dll
   Function: FUN_5de6e160
   Address: 5de6e160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de6e160(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)param_1;
  puVar1 = (undefined4 *)**(int **)((int)param_1 + 8);
  param_1 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17ad0,&param_1);
  }
  piVar3 = (int *)&DAT_00000010;
  (**(code **)(*param_1 + 0x38))(param_1,iVar2 + 0x50);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0;
}


