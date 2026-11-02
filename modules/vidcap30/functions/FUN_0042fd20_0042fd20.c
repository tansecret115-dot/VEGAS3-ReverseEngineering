/* Module: vidcap30.exe
   Function: FUN_0042fd20
   Address: 0042fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042fd20(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (param_1[0x2b] != 0) {
    piVar2 = param_1 + 0x2f;
    do {
      if ((*(byte *)((int)piVar2 + 0xf) & 1) == 0) {
        if ((*piVar2 == piVar2[-2] || *piVar2 - piVar2[-2] < 0) ||
           ((*(byte *)((int)piVar2 + 0xe) & 8) != 0)) {
          FUN_00431d30(*(undefined4 *)(DAT_005ba4c0 + 0x98),*param_1,piVar2[2]);
        }
        else {
          FUN_00431c30(*(undefined4 *)(DAT_005ba4c0 + 0x98),*param_1,piVar2 + -2,piVar2[2],
                       0xffffffff);
        }
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (uVar1 < (uint)param_1[0x2b]);
  }
  return;
}


