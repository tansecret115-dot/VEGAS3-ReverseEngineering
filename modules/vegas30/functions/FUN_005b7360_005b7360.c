/* Module: vegas30.exe
   Function: FUN_005b7360
   Address: 005b7360
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_005b7360(int param_1)

{
  int iVar1;
  LONG local_b0;
  undefined1 local_ac [24];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uchar local_88 [136];
  
  riff_UpdateRIFFSize(*(undefined4 *)(param_1 + 0x118),-8 - *(int *)(param_1 + 0x120));
  local_b0 = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x118),*(LONG *)(param_1 + 0x1c0),&local_b0,0);
  iVar1 = FUN_005b5a00(local_ac);
  if (-1 < iVar1) {
    _mbscpy((uchar *)(param_1 + 0x140),local_88);
    *(undefined4 *)(param_1 + 0x138) = local_90;
    *(undefined4 *)(param_1 + 0x134) = local_94;
    *(undefined4 *)(param_1 + 0x13c) = local_8c;
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
  }
  return iVar1;
}


