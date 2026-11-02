/* Module: mp3rw.dll
   Function: FUN_00476b70
   Address: 00476b70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476b70(int *param_1,int param_2,uint param_3)

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
    FUN_00475b50(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_00475b80((int)param_1,"Invalid sRGB after IDAT");
      FUN_00475dc0(piVar2,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
        FUN_00475b80((int)param_1,"Duplicate sRGB chunk");
        FUN_00475dc0(piVar2,param_3);
        return;
      }
    }
    else {
      FUN_00475b80((int)param_1,"Out of place sRGB chunk");
    }
  }
  uVar1 = param_3;
  if (param_3 != 1) {
    FUN_00475b80((int)piVar2,"Incorrect sRGB chunk length");
    FUN_00475dc0(piVar2,uVar1);
    return;
  }
  FUN_00475d90(piVar2,(byte *)&param_1,1);
  iVar5 = FUN_00475dc0(piVar2,0);
  piVar3 = param_1;
  if (iVar5 == 0) {
    if (3 < ((uint)param_1 & 0xff)) {
      FUN_00475b80((int)piVar2,"Unknown sRGB intent");
      return;
    }
    if ((*(byte *)(iVar4 + 8) & 1) != 0) {
      iVar5 = ftol();
      if (iVar5 != 45000) {
        FUN_00475b80((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"gamma=%f\n",(double)*(float *)((int)piVar2 + 0x14e));
      }
    }
    if (((*(byte *)(iVar4 + 8) & 4) != 0) &&
       ((((((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x71) - _DAT_004a0438) ||
           ((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x75) - _DAT_004a042c))) ||
          ((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x79) - _DAT_004a0428))) ||
         (((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x7d) - _DAT_004a0424) ||
          ((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x81) - _DAT_004a0420))))) ||
        (((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x85) - _DAT_004a041c) ||
         (((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x89) - _DAT_004a0418) ||
          ((float)_DAT_004a0430 < ABS(*(float *)(iVar4 + 0x8d) - _DAT_004a0414))))))))) {
      FUN_00475b80((int)piVar2,"Ignoring incorrect cHRM value when sRGB is also present");
    }
    FUN_0044daf0((int)piVar2,iVar4,(char)piVar3);
  }
  return;
}


