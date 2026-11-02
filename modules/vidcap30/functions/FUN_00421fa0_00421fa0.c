/* Module: vidcap30.exe
   Function: FUN_00421fa0
   Address: 00421fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421fa0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  int *piVar2;
  undefined1 *puVar3;
  int *piVar4;
  int local_118 [68];
  int iStack_8;
  
  piVar4 = local_118;
  local_118[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  (**(code **)(*unaff_ESI + 0x14))(unaff_ESI);
  while (iVar1 == 0) {
    do {
      iVar1 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&stack0xfffffee0,local_118);
      if (iVar1 == -0x7ffbfdfd) {
        (**(code **)(*unaff_EDI + 0x14))(unaff_EDI);
        iVar1 = (**(code **)(*piVar4 + 0xc))(piVar4,1,&stack0xfffffedc,&stack0xfffffee4);
      }
      if (iVar1 != 0) goto LAB_004220c5;
    } while (unaff_ESI == (int *)0x0);
    puVar3 = &stack0xfffffee4;
    piVar2 = unaff_ESI;
    (**(code **)(*unaff_ESI + 0x18))(unaff_ESI,puVar3);
    iVar1 = 0;
    if (unaff_EDI != (int *)0x0) {
      iVar1 = (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,&stack0xfffffee4);
      if (iVar1 == 0) {
        if (unaff_ESI == (int *)0x0) {
          FUN_00421fa0(iStack_8,unaff_EDI);
          (**(code **)(**(int **)(iStack_8 + 0x350) + 0x24))(*(int **)(iStack_8 + 0x350),param_2);
          (**(code **)(**(int **)(iStack_8 + 0x350) + 0x24))(*(int **)(iStack_8 + 0x350),piVar2);
          (**(code **)(**(int **)(iStack_8 + 0x350) + 0x10))(*(int **)(iStack_8 + 0x350),puVar3);
        }
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      (**(code **)(*param_2 + 8))(param_2);
    }
    (**(code **)(*piVar4 + 8))(piVar4);
  }
LAB_004220c5:
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return;
}


