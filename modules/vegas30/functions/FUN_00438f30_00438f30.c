/* Module: vegas30.exe
   Function: FUN_00438f30
   Address: 00438f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00438f30(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x80) != param_2) {
    *(uint *)(param_1 + 0x80) = param_2;
    *(undefined1 *)(param_1 + 0xd4) = 0;
    if ((0 < (int)param_2) && (param_2 < 4)) {
      _SfLoadString_16(DAT_00647204,*(undefined4 *)(&DAT_00610fe8 + param_2 * 4),
                       (undefined1 *)(param_1 + 0xd4),0x20);
    }
    FUN_00438b70(param_1);
    FUN_00438c40((LPCSTR)(param_1 + 0xb4));
    iVar1 = lstrlenA((LPCSTR)(param_1 + 0xb4));
    *(int *)(param_1 + 0x134) = iVar1;
    if ((DAT_006487c8 < 4) || (0x14 < DAT_006487c8)) {
      DAT_006487c8 = 9;
    }
    if ((*(int *)(param_1 + 0x80) == 1) || (*(int *)(param_1 + 0x80) == 2)) {
      *(undefined4 *)(param_1 + 0x138) = 0xb;
    }
    iVar1 = DAT_006487c8;
    if (DAT_006487c8 < *(int *)(param_1 + 0x134)) {
      iVar1 = *(int *)(param_1 + 0x134);
    }
    *(int *)(param_1 + 0x138) = iVar1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}


