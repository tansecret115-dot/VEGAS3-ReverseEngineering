/* Module: vidcap30.exe
   Function: FUN_004530d0
   Address: 004530d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004530d0(int param_1)

{
  int iVar1;
  uchar *puVar2;
  
  iVar1 = param_1 + 0x2c;
  puVar2 = (uchar *)_SfSummary_GetItemText_8(iVar1,0x474e4549);
  if (puVar2 != (uchar *)0x0) {
    _mbscpy(&DAT_005baae8,puVar2);
  }
  puVar2 = (uchar *)_SfSummary_GetItemText_8(iVar1,0x4d414e49);
  if (puVar2 != (uchar *)0x0) {
    _mbscpy(&DAT_005bab68,puVar2);
  }
  puVar2 = (uchar *)_SfSummary_GetItemText_8(iVar1,0x54524149);
  if (puVar2 != (uchar *)0x0) {
    _mbscpy(&DAT_005babe8,puVar2);
  }
  puVar2 = (uchar *)_SfSummary_GetItemText_8(iVar1,0x504f4349);
  if (puVar2 != (uchar *)0x0) {
    _mbscpy(&DAT_005bac68,puVar2);
  }
  puVar2 = (uchar *)_SfSummary_GetItemText_8(iVar1,0x544d4349);
  if (puVar2 != (uchar *)0x0) {
    _mbscpy(&DAT_005bace8,puVar2);
  }
  DAT_005bb504 = *(undefined4 *)(param_1 + 0x38);
  DAT_005bb518 = *(undefined4 *)(param_1 + 0x48);
  DAT_005bb51c = *(undefined4 *)(param_1 + 0x4c);
  DAT_005bb520 = *(undefined4 *)(param_1 + 0x58);
  DAT_005bb528 = *(undefined4 *)(param_1 + 0x50);
  DAT_005bb52c = *(undefined4 *)(param_1 + 0x54);
  lstrcpynA(&DAT_005bb57c,(LPCSTR)(param_1 + 0x60),0x104);
  DAT_005bb67f = 0;
  return 1;
}


