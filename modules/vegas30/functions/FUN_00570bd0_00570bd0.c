/* Module: vegas30.exe
   Function: FUN_00570bd0
   Address: 00570bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00570bd0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  float10 fVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_2 + 8) != 3) && (*(int *)(param_2 + 0x340) == 0)) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x10;
    *(int *)(param_2 + 0x340) = param_2 + 0x344;
    *(undefined4 *)(param_2 + 0x2a8) = 0;
    *(undefined4 *)(param_2 + 0x2ac) = 0;
    *(undefined4 *)(param_2 + 0x2b0) = 0;
    *(undefined4 *)(param_2 + 0x2b4) = 0;
    *(uint *)(param_2 + 0xc) = (param_4 & 1) << 5 | *(uint *)(param_2 + 0xc) & 0xffffffdf;
    _FaderInst_Init_28(*(undefined4 *)(param_2 + 0x340),
                       (-(uint)(param_4 != 0) & 0xffffffc0) + 0x40 | 0x128b,
                       (undefined4 *)(param_2 + 0x2a8),*(undefined4 *)(param_1 + 0x24),param_3,
                       FUN_0056f180,param_1);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x340),0x60e,0,0xfffffd30);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x340),0x60f,0,0x78);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x340),0x611,0,0);
    fVar1 = (float10)*(double *)(param_2 + 0x20);
    if ((float10)_DAT_006106d0 == fVar1) {
      local_8 = 0;
    }
    else if ((float10)_DAT_00610fd8 == fVar1) {
      local_8 = 0xfffffd30;
    }
    else {
      log2(fVar1);
      local_8 = ftol();
    }
    local_4 = local_8;
    if (param_4 == 0) {
      fVar1 = (float10)*(double *)(param_2 + 0x28);
      if ((float10)_DAT_006106d0 == fVar1) {
        local_4 = 0;
      }
      else if ((float10)_DAT_00610fd8 == fVar1) {
        local_4 = 0xfffffd30;
      }
      else {
        log2(fVar1);
        local_4 = ftol();
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x24);
      (**(code **)(**(int **)(param_2 + 4) + 0x58))(*(int **)(param_2 + 4),param_2 + 0x20);
    }
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x340),0x62f,0,&local_8);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x340),10,~*(uint *)(param_2 + 0xc) >> 2 & 1,0);
    _FaderInst_Message_16
              (*(undefined4 *)(param_2 + 0x340),0x631,0,*(uint *)(param_2 + 0x1c) >> 1 & 1);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x340),0x633,0,1);
    FUN_0056df80(param_2);
  }
  if ((*(int *)(param_2 + 8) == 2) && (*(int *)(param_2 + 0x6e8) == 0)) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x10;
    *(int *)(param_2 + 0x6e8) = param_2 + 0x6ec;
    *(undefined4 *)(param_2 + 0x6b8) = 0;
    *(undefined4 *)(param_2 + 0x6bc) = 0;
    *(undefined4 *)(param_2 + 0x6c0) = 0;
    *(undefined4 *)(param_2 + 0x6c4) = 0;
    *(uint *)(param_2 + 0xc) = (param_4 & 1) << 5 | *(uint *)(param_2 + 0xc) & 0xffffffdf;
    _FaderInst_Init_28(*(undefined4 *)(param_2 + 0x6e8),
                       (-(uint)(param_4 != 0) & 0xffffffc0) + 0x40 | 0x128b,
                       (undefined4 *)(param_2 + 0x6b8),*(undefined4 *)(param_1 + 0x24),param_3,
                       FUN_0056f3c0,param_1);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x6e8),0x60e,0,0xfffffd30);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x6e8),0x60f,0,0x78);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x6e8),0x611,0,0);
    fVar1 = (float10)*(double *)(param_2 + 0x628);
    if ((float10)_DAT_006106d0 == fVar1) {
      local_8 = 0;
    }
    else if ((float10)_DAT_00610fd8 == fVar1) {
      local_8 = 0xfffffd30;
    }
    else {
      log2(fVar1);
      local_8 = ftol();
    }
    local_4 = local_8;
    if (param_4 == 0) {
      fVar1 = (float10)*(double *)(param_2 + 0x630);
      if ((float10)_DAT_006106d0 == fVar1) {
        local_4 = 0;
      }
      else if ((float10)_DAT_00610fd8 == fVar1) {
        local_4 = 0xfffffd30;
      }
      else {
        log2(fVar1);
        local_4 = ftol();
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x630) = *(undefined4 *)(param_2 + 0x628);
      *(undefined4 *)(param_2 + 0x634) = *(undefined4 *)(param_2 + 0x62c);
      (**(code **)(**(int **)(param_2 + 4) + 0x74))
                (*(int **)(param_2 + 4),(undefined4 *)(param_2 + 0x628));
    }
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x6e8),0x62f,0,&local_8);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x6e8),10,~*(uint *)(param_2 + 0xc) >> 2 & 1,0);
    _FaderInst_Message_16
              (*(undefined4 *)(param_2 + 0x6e8),0x631,0,*(uint *)(param_2 + 0x1c) >> 2 & 1);
    _FaderInst_Message_16(*(undefined4 *)(param_2 + 0x6e8),0x633,0,1);
    FUN_0056df80(param_2);
  }
  return;
}


