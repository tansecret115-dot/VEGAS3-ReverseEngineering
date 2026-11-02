/* Module: vegas30k.dll
   Function: FUN_010f8f50
   Address: 010f8f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010f8f50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  uVar2 = *(uint *)(param_1 + 0x2d8) & 0xf;
  if ((uVar2 == 0) || ((uVar2 & uVar2 - 1) != 0)) {
    FUN_010f9060(param_1,"must specify exactly one of -Be, -Bu, -Ch, -Re",0,0);
  }
  uVar2 = *(uint *)(param_1 + 0x2d8);
  if ((uVar2 & 8) == 0) {
    uVar2 = uVar2 & 0x1e0;
    if ((uVar2 == 0) || ((uVar2 & uVar2 - 1) != 0)) {
      FUN_010f9060(param_1,"must specify exactly one of -Lp, -Hp, -Bp, -Bs",0,0);
    }
    if ((*(uint *)(param_1 + 0x2d8) & 0x800) == 0) {
      FUN_010f9060(param_1,"must specify -o",0,0);
    }
    else {
      if ((*(int *)(param_1 + 0x290) < 1) || (10 < *(int *)(param_1 + 0x290))) {
        FUN_010f9060(param_1,"pIIRParam->order must be in range 1 .. %d",10,0);
      }
      if (((*(uint *)(param_1 + 0x2d8) & 0x1000) != 0) &&
         (iVar1 = *(int *)(param_1 + 0x290),
         (*(uint *)(param_1 + 0x300) & ~((1 << ((byte)iVar1 & 0x1f)) - 1U)) != 0)) {
        FUN_010f9060(param_1,"pIIRParam->order=%d, so args to -p must be in range 0 .. %d",iVar1,
                     iVar1 + -1);
        return;
      }
    }
  }
  else {
    uVar2 = uVar2 & 0x180;
    if ((uVar2 == 0) || ((uVar2 & uVar2 - 1) != 0)) {
      FUN_010f9060(param_1,"must specify exactly one of -Bp, -Bs with -Re",0,0);
    }
    if ((*(uint *)(param_1 + 0x2d8) & 0x7860) != 0) {
      FUN_010f9060(param_1,"can\'t use -Lp, -Hp, -o, -p, -w, -z with -Re",0,0);
      return;
    }
  }
  return;
}


