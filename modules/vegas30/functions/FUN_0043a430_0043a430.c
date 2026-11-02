/* Module: vegas30.exe
   Function: FUN_0043a430
   Address: 0043a430
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043a430(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  uVar1 = FUN_0043a2d0(param_1,param_2,param_3);
  iVar2 = _SfDoesMetricExist_12(DAT_00647200,param_1 + 199,3);
  if (iVar2 == 0) {
    uVar1 = _SfGetMetricBinary_16(DAT_00647200,param_1 + 199,param_2,param_3 * 8);
    uVar1 = uVar1 >> 3;
    if (uVar1 == 0) {
      uVar1 = FUN_0043a2d0(param_1,param_2,param_3);
      return uVar1;
    }
    uVar3 = 0;
    piVar6 = param_2;
    if (uVar1 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar1) {
          uVar4 = uVar3;
          piVar5 = piVar6;
          do {
            piVar5 = piVar5 + 2;
            if ((*piVar6 != 0) && (*piVar6 == *piVar5)) {
              uVar1 = FUN_0043a2d0(param_1,param_2,param_3);
              return uVar1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
        piVar6 = piVar6 + 2;
      } while (uVar3 < uVar1);
    }
  }
  return uVar1;
}


