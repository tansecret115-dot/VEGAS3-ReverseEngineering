/* Module: vegas30.exe
   Function: FUN_005739d0
   Address: 005739d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005739d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  bool bVar5;
  
  if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
    FUN_0056f0e0();
  }
  piVar1 = *(int **)(param_2 + 4);
  iVar3 = param_1;
  if (*(int *)(param_2 + 8) == 3) {
    iVar2 = (**(code **)(*piVar1 + 0x70))(piVar1);
    (**(code **)(**(int **)(param_2 + 4) + 0x6c))(*(int **)(param_2 + 4),iVar2 != 0);
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
    bVar5 = iVar2 != 0;
    (**(code **)(**(int **)(param_2 + 4) + 0x50))(*(int **)(param_2 + 4),bVar5);
    if (bVar5) {
      (**(code **)(**(int **)(param_2 + 4) + 0x44))(*(int **)(param_2 + 4),0);
    }
    if (*(int **)(param_1 + 0x740) != (int *)0x0) {
      iVar2 = **(int **)(param_1 + 0x740);
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          piVar1 = *(int **)(iVar3 + 0x740);
          if (piVar1 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar1;
          }
          if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(piVar1[2] + iVar4 * 4);
          }
          if ((iVar3 != param_2) && (*(int *)(iVar3 + 8) != 1)) {
            (**(code **)(**(int **)(iVar3 + 4) + 0x50))(*(int **)(iVar3 + 4),param_1);
            if (bVar5) {
              (**(code **)(**(int **)(iVar3 + 4) + 0x44))(*(int **)(iVar3 + 4),0);
            }
          }
          iVar4 = iVar4 + 1;
          iVar3 = unaff_ESI;
        } while (iVar4 < iVar2);
      }
    }
  }
  FUN_005b4010(*(undefined4 *)(iVar3 + 0x290));
  *(uint *)**(undefined4 **)(iVar3 + 0x290) = *(uint *)**(undefined4 **)(iVar3 + 0x290) | 0x8000;
  FUN_0056f660(param_2,0);
  InvalidateRect(*(HWND *)(iVar3 + 0x24),(RECT *)0x0,0);
  if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
    FUN_0056f160();
  }
  return;
}


