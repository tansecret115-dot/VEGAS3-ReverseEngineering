/* Module: vegas30k.dll
   Function: FUN_011566e0
   Address: 011566e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011566e0(int param_1,int param_2,int param_3)

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
    FUN_01155f80(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((uVar5 & 4) != 0) {
      FUN_01155fb0(param_1,"Invalid gAMA after IDAT");
      FUN_011561f0(iVar2,param_3);
      return;
    }
    if ((uVar5 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_01155fb0(param_1,"Duplicate gAMA chunk");
        FUN_011561f0(iVar2,param_3);
        return;
      }
    }
    else {
      FUN_01155fb0(param_1,"Out of place gAMA chunk");
    }
  }
  iVar4 = param_3;
  if (param_3 != 4) {
    FUN_01155fb0(iVar2,"Incorrect gAMA chunk length");
    FUN_011561f0(iVar2,iVar4);
    return;
  }
  FUN_011561c0(iVar2,&param_1,4);
  iVar4 = FUN_011561f0(iVar2,0);
  if (iVar4 == 0) {
    uVar5 = FUN_01156170();
    if (uVar5 != 0) {
      if (((*(uint *)(iVar3 + 8) & 0x800) != 0) && (uVar5 != 45000)) {
        FUN_01155fb0(iVar2,"Ignoring incorrect gAMA value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"igamma = %lu\n");
        return;
      }
      fVar1 = (float)uVar5 * _DAT_011e7de8;
      *(float *)(iVar2 + 0x14e) = fVar1;
      FUN_01127fe0(iVar2,iVar3,(double)fVar1);
    }
  }
  return;
}


