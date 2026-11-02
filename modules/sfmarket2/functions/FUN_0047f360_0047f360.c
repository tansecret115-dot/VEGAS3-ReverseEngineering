/* Module: sfmarket2.dll
   Function: FUN_0047f360
   Address: 0047f360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f360(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  piVar2 = param_1;
  uVar1 = param_1[0x18];
  if ((uVar1 & 1) == 0) {
    FUN_0047e340(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_0047e370((int)param_1,"Invalid sRGB after IDAT");
      FUN_0047e5b0(piVar2,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
        FUN_0047e370((int)param_1,"Duplicate sRGB chunk");
        FUN_0047e5b0(piVar2,param_3);
        return;
      }
    }
    else {
      FUN_0047e370((int)param_1,"Out of place sRGB chunk");
    }
  }
  uVar1 = param_3;
  if (param_3 != 1) {
    FUN_0047e370((int)piVar2,"Incorrect sRGB chunk length");
    FUN_0047e5b0(piVar2,uVar1);
    return;
  }
  FUN_0047e580(piVar2,(byte *)&param_1,1);
  iVar5 = FUN_0047e5b0(piVar2,0);
  piVar3 = param_1;
  if (iVar5 == 0) {
    if (3 < ((uint)param_1 & 0xff)) {
      FUN_0047e370((int)piVar2,"Unknown sRGB intent");
      return;
    }
    if ((*(byte *)(iVar4 + 8) & 1) != 0) {
      iVar5 = ftol();
      if (iVar5 != 45000) {
        FUN_0047e370((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"gamma=%f\n",(double)*(float *)((int)piVar2 + 0x14e));
      }
    }
    if (((*(byte *)(iVar4 + 8) & 4) != 0) &&
       ((((((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x71) - _DAT_004a2e38) ||
           ((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x75) - _DAT_004a2e2c))) ||
          ((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x79) - _DAT_004a2e28))) ||
         (((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x7d) - _DAT_004a2e24) ||
          ((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x81) - _DAT_004a2e20))))) ||
        (((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x85) - _DAT_004a2e1c) ||
         (((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x89) - _DAT_004a2e18) ||
          ((float)_DAT_004a2e30 < ABS(*(float *)(iVar4 + 0x8d) - _DAT_004a2e14))))))))) {
      FUN_0047e370((int)piVar2,"Ignoring incorrect cHRM value when sRGB is also present");
    }
    FUN_00456160((int)piVar2,iVar4,(char)piVar3);
  }
  return;
}


