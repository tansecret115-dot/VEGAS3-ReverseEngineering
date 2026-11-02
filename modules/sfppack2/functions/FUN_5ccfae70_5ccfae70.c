/* Module: sfppack2.dll
   Function: FUN_5ccfae70
   Address: 5ccfae70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccfae70(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = 1;
  if (*(int *)(param_1 + 0xb0) != 0) {
    piVar2 = (int *)(param_1 + 0x34);
    do {
      if (piVar2[-1] < -0x348) {
        piVar2[-1] = -0x348;
LAB_5ccfaea5:
        uVar1 = 0;
      }
      else if (0 < piVar2[-1]) {
        piVar2[-1] = 0;
        goto LAB_5ccfaea5;
      }
      if (*piVar2 < -0x348) {
        *piVar2 = -0x348;
LAB_5ccfaec3:
        uVar1 = 0;
      }
      else if (0 < *piVar2) {
        *piVar2 = 0;
        goto LAB_5ccfaec3;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < *(uint *)(param_1 + 0xb0));
  }
  return uVar1;
}


