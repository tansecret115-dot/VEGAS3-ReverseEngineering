/* Module: mpegin.dll
   Function: FUN_10005780
   Address: 10005780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 __cdecl FUN_10005780(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  piVar5 = (int *)*param_1;
  if (*piVar5 + 0x200000U <= (uint)param_1[1]) {
    do {
      uVar2 = param_1[8];
      iVar4 = param_1[9];
      iVar3 = iVar4 + (uint)(0xffdfffff < uVar2);
      if ((iVar3 < param_1[0x13]) ||
         ((iVar3 <= param_1[0x13] && (uVar2 + 0x200000 <= (uint)param_1[0x12])))) {
        uVar6 = 0x200000;
LAB_100057d1:
        piVar5[2] = uVar2;
        piVar5[3] = iVar4;
        if (*(int *)(*param_1 + 0x10) != 0) {
          *(undefined4 *)(*param_1 + 0x10) = 0;
          iVar4 = (*(code *)param_1[0x2c])(param_1[0x2f],param_1[8],param_1[9]);
          if (iVar4 != 0) {
            param_1[0x10] = 1;
            return 0;
          }
        }
        uVar6 = (*(code *)param_1[0x2d])(param_1[0x2f],*(undefined4 *)*param_1,uVar6);
      }
      else {
        uVar6 = param_1[0x12] - param_1[8];
        if (0 < (int)uVar6) goto LAB_100057d1;
      }
      if ((int)uVar6 < 0x200000) {
        if ((int)uVar6 < 0) {
          uVar6 = 0;
        }
        while ((uVar6 & 3) != 0) {
          uVar6 = uVar6 + 1;
          *(undefined1 *)(*(int *)*param_1 + -1 + uVar6) = 0;
        }
      }
      iVar4 = param_1[1];
      piVar5 = (int *)*param_1;
      param_1[1] = iVar4 - 0x200000U;
      param_1[3] = param_1[3] + -0x200000;
      param_1[4] = *piVar5 + uVar6;
    } while (*piVar5 + 0x200000U <= iVar4 - 0x200000U);
  }
  uVar2 = param_1[8];
  param_1[8] = uVar2 + 1;
  param_1[9] = param_1[9] + (uint)(0xfffffffe < uVar2);
  uVar1 = *(undefined1 *)param_1[1];
  param_1[1] = (int)((undefined1 *)param_1[1] + 1);
  return uVar1;
}


