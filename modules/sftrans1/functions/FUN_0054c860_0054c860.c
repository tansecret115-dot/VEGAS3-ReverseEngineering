/* Module: sftrans1.dll
   Function: FUN_0054c860
   Address: 0054c860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0054c860(int param_1)

{
  int iVar1;
  double *pdVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x158) == 0) {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 1:
    case 2:
    case 3:
    case 4:
      pdVar2 = *(double **)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8) + 8) +
                *(int *)(param_1 + 0x14c) * 4);
      local_18 = *(double *)(param_1 + 0x198) - pdVar2[1];
      FUN_0054dfa0(*(double *)(param_1 + 400) - *pdVar2,0,0);
      FUN_0054dfa0(0,0,(LONG)local_18,local_18._4_4_);
      FUN_0054ddf0();
      FUN_0054ef90(0,0);
      GetClientRect(*(HWND *)(param_1 + -4),(LPRECT)&local_18);
      InvalidateRect(*(HWND *)(param_1 + -4),(RECT *)&local_18,0);
      return;
    case 5:
    case 6:
      FUN_0054dae0(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),
                   *(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
      FUN_0054ef90(0,0);
      GetClientRect(*(HWND *)(param_1 + -4),(LPRECT)&local_18);
      InvalidateRect(*(HWND *)(param_1 + -4),(RECT *)&local_18,0);
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  iVar4 = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
  if (0 < *piVar3) {
    do {
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(piVar3[2] + -4 + iVar4 * 4);
      *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(iVar1 + 0x11);
      piVar3 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
    } while (iVar4 < *piVar3);
  }
  FUN_0054ddf0();
  GetClientRect(*(HWND *)(param_1 + -4),(LPRECT)&local_18);
  InvalidateRect(*(HWND *)(param_1 + -4),(RECT *)&local_18,0);
  return;
}


