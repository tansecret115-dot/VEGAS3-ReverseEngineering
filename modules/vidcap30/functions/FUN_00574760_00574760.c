/* Module: vidcap30.exe
   Function: FUN_00574760
   Address: 00574760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00574760(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  if ((((*(int *)(param_1 + 0x7ec) != 0) && (*(int *)(param_1 + 0x7f4) != 0)) &&
      (*(int *)(param_1 + 0x7f0) != 0)) && (*(short *)(param_1 + 0x7e8) == 0)) {
    sVar1 = FUN_00579390(*(int *)(param_1 + 0x7f0));
    *(short *)(param_1 + 0x7f8) = sVar1;
    if (sVar1 == 0) {
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x7f0) = 0;
    *(undefined4 *)(param_1 + 0x7fc) = 0;
    return uVar2;
  }
  return 0x80004005;
}


