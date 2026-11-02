/* Module: mcplugrw.dll
   Function: FUN_004762b0
   Address: 004762b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004762b0(int *param_1,int param_2,uint param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2;
  piVar2 = param_1;
  uVar5 = param_1[0x18];
  if ((uVar5 & 1) == 0) {
    FUN_00475b50(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((uVar5 & 4) != 0) {
      FUN_00475b80((int)param_1,"Invalid gAMA after IDAT");
      FUN_00475dc0(piVar2,param_3);
      return;
    }
    if ((uVar5 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_00475b80((int)param_1,"Duplicate gAMA chunk");
        FUN_00475dc0(piVar2,param_3);
        return;
      }
    }
    else {
      FUN_00475b80((int)param_1,"Out of place gAMA chunk");
    }
  }
  uVar5 = param_3;
  if (param_3 != 4) {
    FUN_00475b80((int)piVar2,"Incorrect gAMA chunk length");
    FUN_00475dc0(piVar2,uVar5);
    return;
  }
  FUN_00475d90(piVar2,(byte *)&param_1,4);
  iVar4 = FUN_00475dc0(piVar2,0);
  if (iVar4 == 0) {
    uVar5 = FUN_00475d40((byte *)&param_1);
    if (uVar5 != 0) {
      if (((*(uint *)(iVar3 + 8) & 0x800) != 0) && (uVar5 != 45000)) {
        FUN_00475b80((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"igamma = %lu\n");
        return;
      }
      fVar1 = (float)uVar5 * _DAT_004a01f0;
      *(float *)((int)piVar2 + 0x14e) = fVar1;
      FUN_0044d780((int)piVar2,iVar3,(double)fVar1);
    }
  }
  return;
}


