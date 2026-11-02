/* Module: vegas30.exe
   Function: FUN_005a8710
   Address: 005a8710
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a8710(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar1 = param_1 + 2;
    do {
      FUN_005a7cf0(piVar1);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x136;
    } while (iVar2 < *param_1);
  }
  iVar2 = 0;
  if (0 < param_1[0x26e]) {
    piVar1 = param_1 + 0x270;
    do {
      FUN_005a7cf0(piVar1);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x136;
    } while (iVar2 < param_1[0x26e]);
  }
  if (param_1[0x4dd] != 0) {
    FUN_005a7a60(param_1[0x4dd],1);
  }
  return;
}


