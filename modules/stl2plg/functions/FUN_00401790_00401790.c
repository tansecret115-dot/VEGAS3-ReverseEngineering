/* Module: stl2plg.dll
   Function: FUN_00401790
   Address: 00401790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401790(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_1;
  if (param_1[0x88] != 0) {
    FUN_00402510(param_1[0x88]);
  }
  if (piVar2[3] == 0) {
    return 0;
  }
  if (piVar2[0xea] != 0) {
    (**(code **)(*piVar2 + 0x3c))(piVar2,&param_1);
    iVar5 = 0;
    if (0 < (int)param_1) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(iVar4 + 400 + piVar2[0xea]);
        (**(code **)(*piVar1 + 0x28))(piVar1);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x198;
      } while (iVar5 < (int)param_1);
    }
  }
  uVar3 = (**(code **)(*piVar2 + 100))();
  piVar2[3] = 0;
  return uVar3;
}


