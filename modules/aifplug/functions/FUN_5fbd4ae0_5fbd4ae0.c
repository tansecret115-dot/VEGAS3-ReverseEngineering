/* Module: aifplug.dll
   Function: FUN_5fbd4ae0
   Address: 5fbd4ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd4ae0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = param_1;
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(int **)(iVar2 + 0x14) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  puVar1 = *(undefined4 **)(iVar2 + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = (**(code **)*puVar1)(puVar1,&DAT_5fbfec10,&stack0x00000000);
    if (-1 < iVar3) {
      piVar4 = &param_1;
      iVar5 = 4;
      iVar3 = (**(code **)(iRam00000000 + 0x1c))(0,0x2711);
      if (iVar3 != 0) {
        FUN_5fbd9ce0(DAT_5fc09910,iVar5);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  if (*(int *)(iVar2 + 0x24) == 0) {
    FUN_5fbd4aa0(iVar2);
  }
  return 0;
}


