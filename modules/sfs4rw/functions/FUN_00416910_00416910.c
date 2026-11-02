/* Module: sfs4rw.dll
   Function: FUN_00416910
   Address: 00416910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00416910(int param_1)

{
  short sVar1;
  byte local_8 [4];
  int local_4;
  
  if ((((*(int *)(param_1 + 0x7ec) != 0) && (*(int *)(param_1 + 0x7f4) != 0)) &&
      (*(DWORD *)(param_1 + 0x7f0) != 0)) && (*(short *)(param_1 + 0x7e8) == 0)) {
    sVar1 = FUN_0041b530(*(DWORD *)(param_1 + 0x7f0),(undefined4 *)local_8,&local_4);
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


