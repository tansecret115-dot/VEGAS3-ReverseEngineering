/* Module: vidcap30.exe
   Function: FUN_0041f710
   Address: 0041f710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041f710(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = _SfGetMetricBinary_16(DAT_005ba29c,param_2,param_1,0xfc);
  if ((*param_1 != iVar1) || (param_1[1] == 0)) {
    piVar2 = param_1;
    for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    uVar3 = 1;
    if (param_1[1] == 0) {
      iVar1 = 0;
      piVar2 = param_1 + 0x21;
      do {
        piVar2[-0x1e] = 100;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < 0x1e);
      param_1[2] = 1;
    }
  }
  *param_1 = 0xfc;
  param_1[1] = 1;
  return uVar3;
}


