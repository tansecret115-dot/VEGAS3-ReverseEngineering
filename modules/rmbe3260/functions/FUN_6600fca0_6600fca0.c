/* Module: rmbe3260.dll
   Function: FUN_6600fca0
   Address: 6600fca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600fca0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined2 *)(param_1 + 0xaa) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = *(int *)(param_1 + 0xd8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 0xd4) + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      if ((XPNTimer *)*piVar2 != (XPNTimer *)0x0) {
        XPNTimer::SetPending((XPNTimer *)*piVar2,0);
        piVar3 = (int *)*piVar2;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *piVar2 = 0;
        }
      }
      operator_delete(piVar2);
    }
  }
  FUN_6605cdc0((void *)(param_1 + 0xd4),0,0xffffffff);
  return 0;
}


