/* Module: sftrans1.dll
   Function: FUN_00421890
   Address: 00421890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00421890(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar2 = (int)param_1;
  puVar1 = (undefined4 *)**(int **)((int)param_1 + 8);
  param_1 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&param_1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,iVar2 + 0x68);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return 0;
}


