/* Module: vidcap30.exe
   Function: FUN_005746d0
   Address: 005746d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005746d0(int param_1)

{
  short sVar1;
  byte local_8 [4];
  undefined1 local_4 [4];
  
  if ((((*(int *)(param_1 + 0x7ec) != 0) && (*(int *)(param_1 + 0x7f4) != 0)) &&
      (*(int *)(param_1 + 0x7f0) != 0)) && (*(short *)(param_1 + 0x7e8) == 0)) {
    sVar1 = FUN_005792c0(*(int *)(param_1 + 0x7f0),local_8,local_4);
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


