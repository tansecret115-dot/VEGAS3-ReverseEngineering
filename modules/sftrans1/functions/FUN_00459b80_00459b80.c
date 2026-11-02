/* Module: sftrans1.dll
   Function: FUN_00459b80
   Address: 00459b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00459b80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)param_1;
  puVar1 = (undefined4 *)**(int **)((int)param_1 + 8);
  param_1 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c20,&param_1);
  }
  piVar3 = (int *)0x1c;
  (**(code **)(*param_1 + 0x38))(param_1,iVar2 + 0x4c);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0;
}


