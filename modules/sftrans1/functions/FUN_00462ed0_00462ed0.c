/* Module: sftrans1.dll
   Function: FUN_00462ed0
   Address: 00462ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00462ed0(int *param_1,uint param_2,HWND param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  CHAR local_104 [260];
  
  iVar1 = param_1[2];
  if ((param_2 & 0xffff) == 0x539) {
    if (param_2 >> 0x10 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
    if (iVar2 != 0) {
      fVar3 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_0055f5d0 <= fVar3) {
        fVar3 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar3 <= (float10)_DAT_0055f5c8) {
          fVar3 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar3 = (float10)_DAT_0055f5c8;
        }
      }
      else {
        fVar3 = (float10)_DAT_0055f5d0;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar3 - (float10)*(double *)(iVar1 + 0x70))) {
        *(double *)(iVar1 + 0x70) = (double)fVar3;
        FUN_0045fcb0();
        return 0;
      }
    }
  }
  else {
    if ((param_2 & 0xffff) != 0x53a) {
      return 0;
    }
    if (param_2 >> 0x10 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
    if (iVar2 != 0) {
      fVar3 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_0055f5d0 <= fVar3) {
        fVar3 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar3 <= (float10)_DAT_0055f5c8) {
          fVar3 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar3 = (float10)_DAT_0055f5c8;
        }
      }
      else {
        fVar3 = (float10)_DAT_0055f5d0;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar3 - (float10)*(double *)(iVar1 + 0x78))) {
        *(double *)(iVar1 + 0x78) = (double)fVar3;
        FUN_0045fcb0();
        return 0;
      }
    }
  }
  (**(code **)(*param_1 + 8))();
  return 0;
}


