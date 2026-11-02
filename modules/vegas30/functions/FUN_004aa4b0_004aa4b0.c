/* Module: vegas30.exe
   Function: FUN_004aa4b0
   Address: 004aa4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004aa553) */
/* WARNING: Removing unreachable block (ram,0x004aa5dc) */

void FUN_004aa4b0(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  
  pbVar4 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x40) == 0)) {
    *(undefined4 *)(param_2 + 0x40) = param_3;
    *(undefined4 *)(param_2 + 0x44) = param_4;
    iVar1 = *(int *)(param_1 + 0xb90);
    iVar2 = *(int *)(param_1 + 0xb94);
    if (iVar1 == 0 && iVar2 == 0) {
      param_2 = (byte *)0xffffffff;
    }
    else {
      lVar6 = ftol();
      uVar3 = lVar6 + *(int *)(param_1 + 0xac0);
      param_2 = (byte *)uVar3;
      if ((uVar3 < 0x8000000000000000) ||
         ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < param_2)))) {
        if (0x3fff < (longlong)uVar3) {
          param_2 = (byte *)0x3fff;
        }
      }
      else {
        param_2 = (byte *)0xffffc000;
      }
    }
    if (iVar1 == 0 && iVar2 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      lVar6 = ftol();
      uVar3 = lVar6 + *(int *)(param_1 + 0xac0);
      uVar5 = (uint)uVar3;
      if ((uVar3 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar5)))
         ) {
        if (0x3fff < (longlong)uVar3) {
          uVar5 = 0x3fff;
        }
      }
      else {
        uVar5 = 0xffffc000;
      }
    }
    *(byte **)(pbVar4 + 0x54) = param_2;
    if ((int)(uVar5 - (int)param_2) < 1) {
      *(uint *)(pbVar4 + 0x5c) = (int)param_2 + 1;
      return;
    }
    *(uint *)(pbVar4 + 0x5c) = uVar5;
  }
  return;
}


