/* Module: sfppack2.dll
   Function: FUN_5ccd4480
   Address: 5ccd4480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccd4480(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = 1;
  if (*(int *)(param_1 + 0x270) != 0) {
    piVar2 = (int *)(param_1 + 0x74);
    do {
      if (piVar2[-1] < 0) {
        piVar2[-1] = 0;
LAB_5ccd44b5:
        uVar1 = 0;
      }
      else if (10000 < piVar2[-1]) {
        piVar2[-1] = 10000;
        goto LAB_5ccd44b5;
      }
      if (*piVar2 < -500) {
        *piVar2 = -500;
LAB_5ccd44d7:
        uVar1 = 0;
      }
      else if (400 < *piVar2) {
        *piVar2 = 400;
        goto LAB_5ccd44d7;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < *(uint *)(param_1 + 0x270));
  }
  return uVar1;
}


