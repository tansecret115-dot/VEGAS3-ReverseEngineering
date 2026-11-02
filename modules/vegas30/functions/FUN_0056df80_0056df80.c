/* Module: vegas30.exe
   Function: FUN_0056df80
   Address: 0056df80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056df80(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x340);
    if (iVar1 != 0) {
      fVar2 = (float10)*(double *)(param_1 + 0x20);
      if ((float10)_DAT_006106d0 == fVar2) {
        local_8 = 0;
      }
      else if ((float10)_DAT_00610fd8 == fVar2) {
        local_8 = 0xfffffd30;
      }
      else {
        log2(fVar2);
        local_8 = ftol();
      }
      local_4 = local_8;
      if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
        fVar2 = (float10)*(double *)(param_1 + 0x28);
        if ((float10)_DAT_006106d0 == fVar2) {
          local_4 = 0;
        }
        else if ((float10)_DAT_00610fd8 == fVar2) {
          local_4 = 0xfffffd30;
        }
        else {
          log2(fVar2);
          local_4 = ftol();
        }
      }
      _FaderInst_Message_16(iVar1,0x62f,1,&local_8);
    }
    if ((*(int *)(param_1 + 8) == 2) && (iVar1 = *(int *)(param_1 + 0x6e8), iVar1 != 0)) {
      fVar2 = (float10)*(double *)(param_1 + 0x628);
      if ((float10)_DAT_006106d0 == fVar2) {
        local_8 = 0;
      }
      else if ((float10)_DAT_00610fd8 == fVar2) {
        local_8 = 0xfffffd30;
      }
      else {
        log2(fVar2);
        local_8 = ftol();
      }
      local_4 = local_8;
      if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
        fVar2 = (float10)*(double *)(param_1 + 0x630);
        if ((float10)_DAT_006106d0 == fVar2) {
          local_4 = 0;
        }
        else if ((float10)_DAT_00610fd8 == fVar2) {
          local_4 = 0xfffffd30;
        }
        else {
          log2(fVar2);
          local_4 = ftol();
        }
      }
      _FaderInst_Message_16(iVar1,0x62f,1,&local_8);
    }
  }
  return;
}


