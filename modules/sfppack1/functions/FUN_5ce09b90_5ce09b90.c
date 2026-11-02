/* Module: sfppack1.dll
   Function: FUN_5ce09b90
   Address: 5ce09b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ce09b90(int param_1)

{
  short sVar1;
  byte local_8 [4];
  int local_4;
  
  if ((((*(int *)(param_1 + 0x7ec) != 0) && (*(int *)(param_1 + 0x7f4) != 0)) &&
      (*(DWORD *)(param_1 + 0x7f0) != 0)) && (*(short *)(param_1 + 0x7e8) == 0)) {
    sVar1 = FUN_5ce0e1e0(*(DWORD *)(param_1 + 0x7f0),(undefined4 *)local_8,&local_4);
    *(short *)(param_1 + 0x7f8) = sVar1;
    if ((sVar1 == 0) && ((local_8[0] & 0x81) != 0)) {
      *(undefined4 *)(param_1 + 0x7fc) = 1;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    return 0x80004005;
  }
  return 0x80004005;
}


