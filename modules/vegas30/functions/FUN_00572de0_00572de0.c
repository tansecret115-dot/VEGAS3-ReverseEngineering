/* Module: vegas30.exe
   Function: FUN_00572de0
   Address: 00572de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00572de0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  DAT_0064945c = param_3 & 0x700;
  uVar3 = param_2 & 0x700 ^ DAT_0064945c;
  uVar4 = ~DAT_0064945c & uVar3;
  uVar3 = uVar3 & DAT_0064945c;
  if ((*(int **)(param_1 + 0x2b0) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x2b0), 0 < iVar1)
     ) {
    param_3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2b0) + 8) + param_3 * 4);
        if (*(int *)(iVar2 + 0x470) != 0) {
          _MeterInst_Message_16(*(int *)(iVar2 + 0x470),0x611,uVar3,1);
          _MeterInst_Message_16(*(undefined4 *)(iVar2 + 0x470),0x611,uVar4,0);
        }
        if ((*(int *)(iVar2 + 8) == 2) && (*(int *)(iVar2 + 0x818) != 0)) {
          _MeterInst_Message_16(*(int *)(iVar2 + 0x818),0x611,uVar3,1);
          _MeterInst_Message_16(*(undefined4 *)(iVar2 + 0x818),0x611,uVar4,0);
        }
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
    InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)0x0,0);
  }
  return;
}


