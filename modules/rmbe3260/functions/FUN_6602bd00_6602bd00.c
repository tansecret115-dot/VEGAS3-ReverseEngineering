/* Module: rmbe3260.dll
   Function: FUN_6602bd00
   Address: 6602bd00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602bd00(int param_1,int param_2,undefined4 *param_3,int param_4,char *param_5)

{
  ushort uVar1;
  ushort uVar2;
  CPNPropertySheet *this;
  undefined4 uVar3;
  CPNRouter *pCVar4;
  CPNWindow *this_00;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  undefined1 local_104 [256];
  
  if (param_5 != (char *)0x0) {
    FUN_6605b970((void *)(param_1 + 0xe4),param_5);
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    uVar1 = GetKeyState(0x10);
    uVar2 = GetKeyState(0x11);
    *(uint *)(param_1 + 0xf0) = (uint)((uVar1 & uVar2 & 0x8000) == 0x8000);
    if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
      FUN_6602bc60(param_1);
    }
    FUN_6602ca50(param_1);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar7 = 4;
      if (*(int *)(*(int *)(param_1 + 0xe4) + -8) != 0) {
        uVar7 = 0xc;
      }
      this = operator_new(0x128);
      if (this == (CPNPropertySheet *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = CPNPropertySheet::CPNPropertySheet(this,uVar7);
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      if (((*(int *)(param_1 + 0x54) == 0) || (FUN_6602c090(param_1), *(int *)(param_1 + 0x54) == 0)
          ) || (*(int *)(param_1 + 0x50) != 0)) {
        FUN_6602bf30(param_1);
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      if (*(int *)(param_1 + 0x54) != 0) {
        FUN_6602bfe0(param_1);
      }
      *(uint *)(param_1 + 0x34) = (uint)(*(int *)(param_1 + 0x54) == 0);
      if (param_1 == 0) {
        pCVar4 = (CPNRouter *)0x0;
      }
      else {
        pCVar4 = (CPNRouter *)(param_1 + 4);
      }
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x1c),pCVar4,2,0xb2);
      if (param_1 == 0) {
        pCVar4 = (CPNRouter *)0x0;
      }
      else {
        pCVar4 = (CPNRouter *)(param_1 + 4);
      }
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x1c),pCVar4,0x10,0x590);
      FUN_6602e290(*(int *)(param_1 + 0xf4) << 0x10 | 0x25,local_104,0x100);
      if (param_3 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 1;
        this_00 = operator_new(0xb8);
        if (this_00 == (CPNWindow *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)CPNWindow::CPNWindow(this_00);
        }
        *(int **)(param_1 + 0x20) = piVar5;
        (**(code **)(*piVar5 + 0xc4))(*param_3);
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x150))(*(undefined4 *)(param_1 + 0x20),local_104,0)
      ;
    }
    else if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      iVar6 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x9c))();
      if (iVar6 == 0) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x154))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(3);
      }
    }
    if (param_4 != 0) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x1c))(*(int **)(param_1 + 0x48));
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
    return 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    return 0;
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 300))(0);
  }
  FUN_6602bc60(param_1);
  return 0;
}


