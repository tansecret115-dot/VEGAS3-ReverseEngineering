/* Module: vegas30.exe
   Function: FUN_00572d50
   Address: 00572d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00572d50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 700) = param_2;
  DAT_00649458 = param_2;
  if ((*(int **)(param_1 + 0x2b0) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x2b0), 0 < iVar1)
     ) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar3 * 4);
        if (*(int *)(iVar2 + 0x470) != 0) {
          _MeterInst_Message_16(*(int *)(iVar2 + 0x470),0x60f,0,param_2);
        }
        if ((*(int *)(iVar2 + 8) == 2) && (*(int *)(iVar2 + 0x818) != 0)) {
          _MeterInst_Message_16(*(int *)(iVar2 + 0x818),0x60f,0,param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,0);
  }
  return;
}


