/* Module: sftrans1.dll
   Function: FUN_0054b810
   Address: 0054b810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0054b810(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined8 local_28;
  int local_1c;
  tagRECT local_18;
  
  if (((param_6 == 2) || (param_6 == 6)) &&
     (*(undefined4 *)(param_1 + 0x18c) = 0, -1 < *(int *)(param_1 + 0x144))) {
    if (*(int *)(param_1 + 0x1c0) != 0) {
      GetWindowRect(*(HWND *)(param_1 + -4),&local_18);
      GetWindowRect(*(HWND *)(param_1 + 0x1a8),(LPRECT)&local_28);
      SendMessageA(*(HWND *)(param_1 + 0x1a8),0x412,0,
                   ((local_28._4_4_ - local_1c) + param_4 + local_18.top) * 0x10000 |
                   param_3 + local_18.left & 0xffffU);
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x158) = 1;
      *(int *)(param_1 + 0x164) = param_3;
      *(int *)(param_1 + 0x168) = param_4;
      local_38 = *(int *)(param_1 + 0x15c);
      iVar1 = *(int *)(param_1 + 0x164);
      local_3c = local_38;
      if (iVar1 <= local_38) {
        local_3c = iVar1;
      }
      if (local_38 <= iVar1) {
        local_38 = iVar1;
      }
      local_30 = *(int *)(param_1 + 0x160);
      iVar1 = *(int *)(param_1 + 0x168);
      local_34 = local_30;
      if (iVar1 <= local_30) {
        local_34 = iVar1;
      }
      if (local_30 <= iVar1) {
        local_30 = iVar1;
      }
      local_40 = 0;
      piVar5 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
      if (0 < *piVar5) {
        do {
          iVar1 = *(int *)(piVar5[2] + local_40 * 4);
          local_28._0_4_ = *(LONG *)(param_1 + 0x130);
          iVar4 = ftol();
          local_28._0_4_ = *(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134);
          iVar6 = ftol();
          if (((iVar4 < local_3c) || (local_38 <= iVar4)) ||
             ((iVar6 < local_34 || (local_30 <= iVar6)))) {
            *(undefined1 *)(iVar1 + 0x10) = *(undefined1 *)(iVar1 + 0x11);
          }
          else {
            *(bool *)(iVar1 + 0x10) = *(char *)(iVar1 + 0x11) == '\0';
          }
          piVar5 = *(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8);
          local_40 = local_40 + 1;
        } while (local_40 < *piVar5);
      }
      FUN_0054ddf0();
      GetClientRect(*(HWND *)(param_1 + -4),&local_18);
      InvalidateRect(*(HWND *)(param_1 + -4),&local_18,0);
      break;
    case 1:
    case 2:
    case 3:
    case 4:
      pdVar3 = *(double **)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8) + 8) +
                *(int *)(param_1 + 0x14c) * 4);
      local_28 = (((double)((*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x1a4)) - param_4) /
                  (double)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134))) *
                  *(double *)(param_1 + 0xb8) + *(double *)(param_1 + 0xb0)) - pdVar3[1];
      FUN_0054dfa0((((double)((*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x130)) + param_3) /
                    (double)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x130))) *
                    *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xa0)) - *pdVar3,0,0);
      FUN_0054dfa0(0,0,(LONG)local_28,(int)((ulonglong)local_28 >> 0x20));
      FUN_0054ddf0();
      GetClientRect(*(HWND *)(param_1 + -4),&local_18);
      InvalidateRect(*(HWND *)(param_1 + -4),&local_18,0);
      return;
    case 5:
    case 6:
      FUN_0054dae0(*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x10),
                   ((double)((*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x130)) + param_3) /
                   (double)(*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x130))) *
                   *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xa0),
                   ((double)((*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x1a4)) - param_4) /
                   (double)(*(int *)(param_1 + 0x13c) - *(int *)(param_1 + 0x134))) *
                   *(double *)(param_1 + 0xb8) + *(double *)(param_1 + 0xb0));
      iVar1 = *(int *)(param_1 + 0x150) + 1;
      iVar4 = **(int **)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x144) * 8) + -1;
      if (iVar1 <= iVar4) {
        iVar4 = iVar1;
      }
      uVar2 = *(int *)(param_1 + 0x150) - 1;
      FUN_00550040(uVar2 & ((int)uVar2 < 0) - 1,iVar4);
      return;
    }
  }
  return;
}


