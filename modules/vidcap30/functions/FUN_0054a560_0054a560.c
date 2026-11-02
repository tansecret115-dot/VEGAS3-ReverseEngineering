/* Module: vidcap30.exe
   Function: FUN_0054a560
   Address: 0054a560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054a560(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_2;
  uVar1 = param_1;
  uVar4 = *(uint *)(param_1 + 0x60);
  if ((uVar4 & 1) == 0) {
    FUN_00549540(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar4 & 4) != 0) {
      FUN_00549570(param_1,"Invalid sRGB after IDAT");
      FUN_005497b0(uVar1,param_3);
      return;
    }
    if ((uVar4 & 2) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
        FUN_00549570(param_1,"Duplicate sRGB chunk");
        FUN_005497b0(uVar1,param_3);
        return;
      }
    }
    else {
      FUN_00549570(param_1,"Out of place sRGB chunk");
    }
  }
  iVar3 = param_3;
  if (param_3 != 1) {
    FUN_00549570(uVar1,"Incorrect sRGB chunk length");
    FUN_005497b0(uVar1,iVar3);
    return;
  }
  FUN_00549780(uVar1,&param_1,1);
  iVar3 = FUN_005497b0(uVar1,0);
  if (iVar3 == 0) {
    uVar4 = param_1 & 0xff;
    if (3 < uVar4) {
      FUN_00549570(uVar1,"Unknown sRGB intent");
      return;
    }
    if ((*(byte *)(iVar2 + 8) & 1) != 0) {
      iVar3 = ftol();
      if (iVar3 != 45000) {
        FUN_00549570(uVar1,"Ignoring incorrect gAMA value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"gamma=%f\n",(double)*(float *)(uVar1 + 0x14e));
      }
    }
    if (((*(byte *)(iVar2 + 8) & 4) != 0) &&
       ((((((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x71) - _DAT_0059eaf0) ||
           ((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x75) - _DAT_0059eaec))) ||
          ((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x79) - _DAT_0059eae8))) ||
         (((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x7d) - _DAT_0059eae4) ||
          ((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x81) - _DAT_005935d4))))) ||
        (((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x85) - _DAT_0059eae0) ||
         (((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x89) - _DAT_0059eadc) ||
          ((float)_DAT_0058a5f8 < ABS(*(float *)(iVar2 + 0x8d) - _DAT_0059ead8))))))))) {
      FUN_00549570(uVar1,"Ignoring incorrect cHRM value when sRGB is also present");
    }
    FUN_0052c0f0(uVar1,iVar2,uVar4);
  }
  return;
}


