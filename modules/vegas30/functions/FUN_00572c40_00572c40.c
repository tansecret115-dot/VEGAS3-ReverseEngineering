/* Module: vegas30.exe
   Function: FUN_00572c40
   Address: 00572c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00572c40(int param_1)

{
  int iVar1;
  int iVar2;
  HDC hDC;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int **)(param_1 + 0x2b0) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x2b0);
    if (0 < iVar1) {
      hDC = GetDC(*(HWND *)(param_1 + 0x24));
      iVar3 = 0;
      local_8 = 0xbf800000;
      local_4 = 0xbf800000;
      if (0 < iVar1) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + iVar3 * 4);
          if (*(int *)(iVar2 + 0x470) != 0) {
            _MeterInst_Message_16(*(int *)(iVar2 + 0x470),0x60c,0x20000,&local_8);
            if (*(int *)(iVar2 + 0x2c0) != *(int *)(iVar2 + 0x2b8)) {
              _MeterInst_Draw_16(*(undefined4 *)(iVar2 + 0x470),hDC,&LAB_005751c0,param_1);
            }
          }
          if ((*(int *)(iVar2 + 8) == 2) && (*(int *)(iVar2 + 0x818) != 0)) {
            _MeterInst_Message_16(*(int *)(iVar2 + 0x818),0x60c,0x20000,&local_8);
            if (*(int *)(iVar2 + 0x6e0) != *(int *)(iVar2 + 0x6d8)) {
              _MeterInst_Draw_16(*(undefined4 *)(iVar2 + 0x818),hDC,&LAB_005751e0,param_1);
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
      ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
    }
  }
  return;
}


