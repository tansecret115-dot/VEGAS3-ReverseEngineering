/* Module: mcmpgdec.dll
   Function: FUN_100013b4
   Address: 100013b4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100013b4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x10;
  if (*(int *)(param_1 + 0x20) == 3) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  *(int *)(param_1 + 0x40) = iVar3 * 2;
  if (*(int *)(param_1 + 0x44) < 3) {
    if (*(int *)(param_1 + 0x44) == 1) {
      *(undefined4 *)(param_1 + 0x4c) = 0x180;
      *(undefined4 *)(param_1 + 100) = 0x20;
      *(uint *)(param_1 + 0x50) =
           (uint)(*(int *)(param_1 + 0x3c) * 48000) / *(uint *)(param_1 + 0x34);
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0x480;
      uVar1 = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x50) = (uint)(*(int *)(param_1 + 0x3c) * 0x23280) / uVar1;
      iVar3 = *(int *)(param_1 + 0x3c) / iVar3;
      if (((uVar1 == 48000) && (0x37 < iVar3)) || (iVar3 - 0x38U < 0x19)) {
        *(undefined **)(param_1 + 0x5c) = &DAT_10027280;
        *(undefined4 *)(param_1 + 100) = 0x1b;
      }
      else if ((uVar1 == 48000) || (iVar3 < 0x60)) {
        if ((*(int *)(param_1 + 0x34) == 32000) || (0x30 < iVar3)) {
          *(undefined **)(param_1 + 0x5c) = &DAT_1002d280;
          *(undefined4 *)(param_1 + 100) = 0xc;
        }
        else {
          *(undefined **)(param_1 + 0x5c) = &DAT_1002b280;
          *(undefined4 *)(param_1 + 100) = 8;
        }
      }
      else {
        *(undefined **)(param_1 + 0x5c) = &DAT_10029280;
        *(undefined4 *)(param_1 + 100) = 0x1e;
      }
    }
    if (*(int *)(param_1 + 0x20) != 1) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


