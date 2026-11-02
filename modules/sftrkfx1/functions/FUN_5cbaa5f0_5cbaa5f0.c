/* Module: sftrkfx1.dll
   Function: FUN_5cbaa5f0
   Address: 5cbaa5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaa5f0(int *param_1)

{
  bool bVar1;
  HWND pHVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  bVar1 = false;
  if ((uint)param_1[0x16] < (uint)param_1[0x20]) {
    iVar5 = param_1[param_1[0x16] + 0x21];
  }
  else {
    iVar5 = 0;
  }
  pHVar2 = GetCapture();
  if (pHVar2 == (HWND)*param_1) {
    ReleaseCapture();
    if (((param_1[0x15] & 0xeU) != 0) && (*(uint *)(iVar5 + 0x28) != 0)) {
      pfVar4 = (float *)(iVar5 + 0x34);
      pfVar3 = (float *)(*(int *)(iVar5 + 0x24) + 0x34);
      do {
        if ((pfVar4[-1] != pfVar3[-1]) || (*pfVar4 != *pfVar3)) {
          bVar1 = true;
          break;
        }
        uVar6 = uVar6 + 1;
        pfVar4 = pfVar4 + 8;
        pfVar3 = pfVar3 + 8;
      } while (uVar6 < *(uint *)(iVar5 + 0x28));
    }
    if (iVar5 != 0) {
      FUN_5cbaa050(iVar5);
    }
    if ((param_1[0x15] & 0x10U) != 0) {
      MessageBeep(0);
      return;
    }
    if (bVar1) {
      FUN_5cbaa3a0(param_1);
    }
    else {
      FUN_5cbaa6d0(param_1);
    }
    param_1[0x1d] = -1;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x15] = param_1[0x15] & 0xffffffb1;
  }
  return;
}


