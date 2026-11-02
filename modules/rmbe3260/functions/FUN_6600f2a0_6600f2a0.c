/* Module: rmbe3260.dll
   Function: FUN_6600f2a0
   Address: 6600f2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600f2a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &PTR_FUN_66064990;
  if ((void *)param_1[0x33] != (void *)0x0) {
    operator_delete((void *)param_1[0x33]);
    param_1[0x33] = 0;
  }
  if ((void *)param_1[0x34] != (void *)0x0) {
    operator_delete((void *)param_1[0x34]);
    param_1[0x34] = 0;
  }
  iVar1 = param_1[0x36];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(param_1[0x35] + iVar1 * 4);
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
  FUN_6605cdc0(param_1 + 0x35,0,0xffffffff);
  FUN_6605cdb0(param_1 + 0x35);
  FUN_660159e0(param_1);
  return;
}


