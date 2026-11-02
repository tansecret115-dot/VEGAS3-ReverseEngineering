/* Module: vegas30.exe
   Function: FUN_0051d430
   Address: 0051d430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0051d430(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_2 = 0;
  while( true ) {
    if (param_1 == 0) {
      iVar1 = 0x898;
    }
    else if (param_1 == 1) {
      iVar1 = 0x8ca;
    }
    else if (param_1 == 2) {
      iVar1 = 0x8fc;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = _SfDoesMetricExist_12(DAT_00647200,iVar1 + iVar2,3);
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
    *param_2 = *param_2 + 1;
    if (0x31 < iVar2) {
      return 0;
    }
  }
  return 0;
}


