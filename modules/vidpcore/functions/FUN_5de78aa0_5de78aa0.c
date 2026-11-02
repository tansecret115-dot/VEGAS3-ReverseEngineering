/* Module: vidpcore.dll
   Function: FUN_5de78aa0
   Address: 5de78aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de78aa0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)param_1;
  puVar1 = (undefined4 *)**(int **)((int)param_1 + 8);
  param_1 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b50,&param_1);
  }
  piVar3 = (int *)0x14;
  (**(code **)(*param_1 + 0x38))(param_1,iVar2 + 0x4c);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0;
}


