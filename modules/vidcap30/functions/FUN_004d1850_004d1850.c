/* Module: vidcap30.exe
   Function: FUN_004d1850
   Address: 004d1850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d1850(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if ((iVar1 != 0) && (param_2 < *(uint *)(param_1 + 0x70))) {
    iVar4 = *(int *)(param_1 + 0x7c) * 0x3c;
    piVar2 = *(int **)(iVar4 + 0x20 + iVar1);
    iVar3 = (**(code **)(*piVar2 + 0x28))(piVar2);
    if ((iVar3 == 0) &&
       (piVar2 = *(int **)(*(int *)(param_1 + 0x6c) + 0x20 + iVar4),
       iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2), iVar3 < 0)) {
      SendMessageA(*(HWND *)(param_1 + 0x9c),0x602,*(WPARAM *)(param_1 + 0x7c),0);
      return;
    }
    GetFocus();
    piVar2 = *(int **)(iVar4 + 0x20 + iVar1);
    (**(code **)(*piVar2 + 0x14))(piVar2);
    *(undefined4 *)(iVar4 + 0x34 + iVar1) = 0;
    *(undefined4 *)(iVar4 + 0x38 + iVar1) = 0;
    *(uint *)(param_1 + 0x7c) = param_2;
    FUN_004d0f30(param_1);
    GetClientRect(*(HWND *)(param_1 + 0x84),(LPRECT)&stack0xffffffe8);
    InflateRect((LPRECT)&stack0xffffffe8,-2,-2);
    piVar2 = *(int **)(iVar1 + 0x20 + param_2 * 0x3c);
    iVar1 = iVar1 + param_2 * 0x3c;
    (**(code **)(*piVar2 + 0x10))(piVar2,*(undefined4 *)(param_1 + 0x84),&stack0xffffffe8,0);
    *(undefined4 *)(iVar1 + 0x34) = 1;
    *(undefined4 *)(iVar1 + 0x38) = 1;
    SendMessageA(*(HWND *)(param_1 + 0x9c),0x602,*(WPARAM *)(param_1 + 0x7c),0);
    if (unaff_EBX != 0) {
      SetFocus(*(HWND *)(param_1 + 0x9c));
      return;
    }
  }
  return;
}


