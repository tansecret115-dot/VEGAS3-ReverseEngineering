/* Module: vegas30.exe
   Function: FUN_00526de0
   Address: 00526de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00526de0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  int *piStack_18;
  int *piStack_14;
  int local_8;
  int iStack_4;
  
  if ((*(int *)(param_1 + 0x104) != 0) && (*(int *)(param_1 + 0x104) != 1)) {
    return 2;
  }
  piStack_18 = *(int **)(param_1 + 300);
  piStack_14 = &local_8;
  local_8 = 0;
  iVar1 = (**(code **)(*piStack_18 + 0xb8))();
  if ((-1 < iVar1) && (unaff_EDI != (int *)0x0)) {
    uVar2 = 1;
    iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1);
    if (iVar1 == 0) {
      while( true ) {
        iVar1 = FUN_005d0d80(piStack_14,&stack0xffffffe4);
        (**(code **)(*piStack_14 + 8))(piStack_14);
        if (iVar1 < 0) break;
        (**(code **)(_DAT_00000000 + 8))(0);
        iVar1 = (**(code **)(iStack_4 + 0xc))(&iStack_4,1,&piStack_18,0);
        if (iVar1 != 0) {
          (**(code **)(_DAT_00000000 + 8))(0);
          return 1;
        }
      }
      uVar2 = 0;
    }
    (**(code **)(_DAT_00000000 + 8))(0);
    return uVar2;
  }
  return 0;
}


