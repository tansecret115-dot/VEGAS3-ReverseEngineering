/* Module: vegas30.exe
   Function: FUN_005d0620
   Address: 005d0620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005d0620(int param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_EBX;
  int *unaff_EBP;
  int *piVar3;
  undefined1 *puStack_20;
  int *piStack_1c;
  int *piStack_18;
  int local_4;
  
  piVar3 = (int *)0x0;
  if (*(int *)(param_1 + 0x244) == 0) {
    return -0x7fffbffe;
  }
  if (DAT_0064ab78 != 0) {
    piStack_18 = (int *)0x5d0652;
    _fpreset();
  }
  piStack_1c = *(int **)(param_1 + 0x244);
  piStack_18 = &local_4;
  local_4 = 0;
  puStack_20 = (undefined1 *)0x5d0667;
  iVar2 = (**(code **)(*piStack_1c + 0xc))();
  if (-1 < iVar2) {
    puStack_20 = &stack0xfffffff0;
    iVar2 = (**(code **)(*unaff_EBX + 0xb8))();
    if ((-1 < iVar2) && (piStack_18 != (int *)0x0)) {
      iVar2 = (**(code **)(*piStack_18 + 0xc))(piStack_18,1,&stack0xfffffff4);
      piVar1 = piStack_18;
      for (; (piStack_1c != (int *)0x0 && (piVar1 != piVar3)); piVar3 = (int *)((int)piVar3 + 1)) {
        (**(code **)(*piStack_1c + 8))(piStack_1c);
        puStack_20 = (undefined1 *)0x0;
        iVar2 = (**(code **)(_DAT_00000000 + 0xc))(0,1,&puStack_20,0);
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      *piStack_1c = (int)unaff_EBX;
      if (unaff_EBX == (int *)0x0) {
        iVar2 = -0x7fffbffe;
      }
    }
    return iVar2;
  }
  return -0x7fffbffb;
}


