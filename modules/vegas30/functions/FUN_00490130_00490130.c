/* Module: vegas30.exe
   Function: FUN_00490130
   Address: 00490130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00490130(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x94) != param_2) {
    SendMessageA(*(HWND *)(param_1 + 0xdc),0x430,0,0);
    *(int *)(param_1 + 0x94) = param_2;
    DAT_00647e74 = param_2;
    *(undefined4 *)(param_1 + 0x98) = (&DAT_00647e78)[*(int *)(param_1 + 0x94)];
    if (((*(byte *)(param_1 + 0x80) & 2) != 0) && (*(int *)(param_1 + 0x134) != 0)) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x134));
      *(undefined4 *)(param_1 + 0x134) = 0;
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffd;
    }
    FUN_004903b0(*(undefined4 *)(param_1 + 0xdc),param_1);
    FUN_004901f0(param_1,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
    FUN_0048f940(DAT_0064b138,0,param_2);
  }
  return;
}


