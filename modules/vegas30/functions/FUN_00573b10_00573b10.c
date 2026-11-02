/* Module: vegas30.exe
   Function: FUN_00573b10
   Address: 00573b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00573b10(int param_1,int param_2)

{
  int *piVar1;
  SHORT SVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  bool bVar6;
  
  if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
    FUN_0056f0e0();
  }
  piVar1 = *(int **)(param_2 + 4);
  iVar4 = param_1;
  if (*(int *)(param_2 + 8) == 3) {
    iVar3 = (**(code **)(*piVar1 + 100))(piVar1);
    (**(code **)(**(int **)(param_2 + 4) + 0x60))(*(int **)(param_2 + 4),iVar3 != 0);
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1);
    bVar6 = iVar3 != 0;
    (**(code **)(**(int **)(param_2 + 4) + 0x44))(*(int **)(param_2 + 4),bVar6);
    if (bVar6) {
      (**(code **)(**(int **)(param_2 + 4) + 0x50))(*(int **)(param_2 + 4),0);
    }
    if (*(int **)(param_1 + 0x740) != (int *)0x0) {
      iVar3 = **(int **)(param_1 + 0x740);
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          piVar1 = *(int **)(iVar4 + 0x740);
          if (piVar1 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar1;
          }
          if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(piVar1[2] + iVar5 * 4);
          }
          if ((iVar4 != param_2) && (*(int *)(iVar4 + 8) != 1)) {
            (**(code **)(**(int **)(iVar4 + 4) + 0x44))(*(int **)(iVar4 + 4),param_1);
            if (bVar6) {
              (**(code **)(**(int **)(iVar4 + 4) + 0x50))(*(int **)(iVar4 + 4),0);
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = unaff_ESI;
        } while (iVar5 < iVar3);
      }
    }
  }
  FUN_005b4010(*(undefined4 *)(iVar4 + 0x290));
  *(uint *)**(undefined4 **)(iVar4 + 0x290) = *(uint *)**(undefined4 **)(iVar4 + 0x290) | 0x8000;
  SVar2 = GetKeyState(0x11);
  FUN_0056f660(param_2,SVar2 < 0);
  InvalidateRect(*(HWND *)(iVar4 + 0x24),(RECT *)0x0,0);
  if ((*(byte *)(param_2 + 0x1c) & 1) != 0) {
    FUN_0056f160();
  }
  return;
}


