/* Module: sfpaplug.dll
   Function: FUN_0040fb10
   Address: 0040fb10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040fb10(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = param_1;
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(int **)(iVar2 + 8) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  puVar1 = *(undefined4 **)(iVar2 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = (**(code **)*puVar1)(puVar1,&DAT_0044dd20,&stack0x00000000);
    if (-1 < iVar3) {
      piVar4 = &param_1;
      iVar5 = 4;
      iVar3 = (**(code **)(iRam00000000 + 0x1c))(0,0x2711);
      if (iVar3 != 0) {
        FUN_00416350(DAT_0045c380,iVar5);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  if (*(int *)(iVar2 + 0x18) == 0) {
    FUN_0040fad0(iVar2);
  }
  return 0;
}


