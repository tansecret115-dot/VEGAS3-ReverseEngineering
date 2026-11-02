/* Module: vidcap30.exe
   Function: FUN_00549ca0
   Address: 00549ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00549ca0(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2;
  iVar2 = param_1;
  uVar5 = *(uint *)(param_1 + 0x60);
  if ((uVar5 & 1) == 0) {
    FUN_00549540(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((uVar5 & 4) != 0) {
      FUN_00549570(param_1,"Invalid gAMA after IDAT");
      FUN_005497b0(iVar2,param_3);
      return;
    }
    if ((uVar5 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_00549570(param_1,"Duplicate gAMA chunk");
        FUN_005497b0(iVar2,param_3);
        return;
      }
    }
    else {
      FUN_00549570(param_1,"Out of place gAMA chunk");
    }
  }
  iVar4 = param_3;
  if (param_3 != 4) {
    FUN_00549570(iVar2,"Incorrect gAMA chunk length");
    FUN_005497b0(iVar2,iVar4);
    return;
  }
  FUN_00549780(iVar2,&param_1,4);
  iVar4 = FUN_005497b0(iVar2,0);
  if (iVar4 == 0) {
    uVar5 = FUN_00549730();
    if (uVar5 != 0) {
      if (((*(uint *)(iVar3 + 8) & 0x800) != 0) && (uVar5 != 45000)) {
        FUN_00549570(iVar2,"Ignoring incorrect gAMA value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"igamma = %lu\n");
        return;
      }
      fVar1 = (float)uVar5 * _DAT_0059e8b4;
      *(float *)(iVar2 + 0x14e) = fVar1;
      FUN_0052bd80(iVar2,iVar3,(double)fVar1);
    }
  }
  return;
}


