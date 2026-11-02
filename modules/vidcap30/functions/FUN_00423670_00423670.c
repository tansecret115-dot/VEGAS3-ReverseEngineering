/* Module: vidcap30.exe
   Function: FUN_00423670
   Address: 00423670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00423670(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int *unaff_retaddr;
  undefined4 local_4;
  
  iVar1 = param_1;
  iVar2 = FUN_004237c0(param_1,param_2);
  if (-1 < iVar2) {
    param_2 = 0;
    local_4 = 1;
    param_1 = 1;
    iVar2 = FUN_00420460(&local_4,1,&DAT_005a35a8,0,0,*(undefined4 *)(iVar1 + 0x32c),&param_2,
                         &param_1);
    if (iVar2 < 0) {
      iVar2 = FUN_00420460(&local_4,1,&DAT_005a35f8,0,0,*(undefined4 *)(iVar1 + 0x32c),&param_2,
                           &param_1);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x30))(*(int **)(iVar1 + 0x350),param_2);
        if (unaff_retaddr != (int *)0x0) {
          (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
        }
        if ((-1 < iVar2) && ((*(uint *)(iVar1 + 0x148) & 0x10) != 0)) {
          iVar2 = FUN_00420460(&stack0xfffffff4,1,&DAT_005a35e8,0,0,*(undefined4 *)(iVar1 + 0x32c),
                               &stack0x00000000,&local_4);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x30))(*(int **)(iVar1 + 0x350),0);
            if (unaff_ESI != (int *)0x0) {
              (**(code **)(*unaff_ESI + 8))(unaff_ESI);
            }
          }
        }
      }
    }
    else {
      iVar2 = (**(code **)(**(int **)(iVar1 + 0x350) + 0x30))(*(int **)(iVar1 + 0x350),param_2);
      if (unaff_retaddr != (int *)0x0) {
        (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
        return iVar2;
      }
    }
  }
  return iVar2;
}


