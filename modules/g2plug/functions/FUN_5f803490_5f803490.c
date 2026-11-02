/* Module: g2plug.dll
   Function: FUN_5f803490
   Address: 5f803490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f803490(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  
  piVar3 = param_1;
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar3[5] = (int)param_2;
  (**(code **)(*param_2 + 4))(param_2);
  puVar2 = (undefined4 *)piVar3[5];
  if (puVar2 != (undefined4 *)0x0) {
    iVar4 = (**(code **)*puVar2)(puVar2,&DAT_5f869d20,&stack0x00000000);
    if (-1 < iVar4) {
      ppiVar5 = &param_1;
      iVar6 = 4;
      iVar4 = (**(code **)(iRam00000000 + 0x1c))(0,0x2711);
      if (iVar4 != 0) {
        FUN_5f817930(DAT_5f87746c,iVar6);
      }
      (*(code *)(*ppiVar5)[2])(ppiVar5);
    }
  }
  if (piVar3[9] == 0) {
    (**(code **)(*piVar3 + 0x5c))(piVar3,0);
  }
  return 0;
}


