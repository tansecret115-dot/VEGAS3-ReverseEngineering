/* Module: vegas30.exe
   Function: FUN_005d0420
   Address: 005d0420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_005d0420(int param_1)

{
  int iVar1;
  int *unaff_EBX;
  int iVar2;
  undefined1 *puStack_20;
  int *piStack_1c;
  int *piStack_18;
  int local_4;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    local_4 = 0;
    if (DAT_0064ab78 != 0) {
      piStack_18 = (int *)0x5d044f;
      _fpreset();
    }
    piStack_1c = *(int **)(param_1 + 0x244);
    piStack_18 = &local_4;
    puStack_20 = (undefined1 *)0x5d0460;
    iVar1 = (**(code **)(*piStack_1c + 0xc))();
    if (-1 < iVar1) {
      puStack_20 = &stack0xfffffff0;
      iVar1 = (**(code **)(*unaff_EBX + 0xb8))(unaff_EBX);
      if ((-1 < iVar1) && (piStack_18 != (int *)0x0)) {
        (**(code **)(*piStack_18 + 0xc))(piStack_18,1);
        while (piStack_1c != (int *)0x0) {
          iVar2 = iVar2 + 1;
          (**(code **)(*piStack_1c + 8))(piStack_1c);
          puStack_20 = (undefined1 *)0x0;
          (*pcRam0000000c)(&stack0xfffffff4,1,&puStack_20,0);
        }
        (**(code **)(_DAT_00000000 + 8))(0);
        (**(code **)(_DAT_00000000 + 8))(0);
        return iVar2;
      }
    }
  }
  return 0;
}


