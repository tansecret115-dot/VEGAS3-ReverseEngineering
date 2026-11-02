/* Module: rmto3260.dll
   Function: FUN_662ce200
   Address: 662ce200
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662ce200(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = -0x7ffbfff9;
  }
  if (-1 < iVar2) {
    if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    puVar1 = FUN_662f0880(0);
    *(undefined4 **)(param_1 + 0x24) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    if (-1 < iVar2) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))
                        (*(undefined4 *)(param_1 + 0x14),0x8000,0);
    }
  }
  return iVar2;
}


