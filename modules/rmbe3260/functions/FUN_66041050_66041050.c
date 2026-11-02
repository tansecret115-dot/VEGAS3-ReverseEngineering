/* Module: rmbe3260.dll
   Function: FUN_66041050
   Address: 66041050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_66041050(void *this,uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    uVar6 = *(uint *)((int)this + 0x230);
    if (param_1 < uVar6) {
      iVar1 = (param_1 - uVar6) + -1;
    }
    else {
      iVar1 = param_1 - uVar6;
    }
    if (iVar1 != 0) {
      iVar1 = *(int *)((int)this + 0x264) + *(int *)((int)this + 0x238);
      *(int *)((int)this + 0x264) = iVar1;
      *(int *)((int)this + 0x26c) = *(int *)((int)this + 0x26c) + *(int *)((int)this + 0x23c);
      uVar2 = ftol();
      *(undefined4 *)((int)this + 0x274) = uVar2;
      if (*(int *)(*(int *)((int)this + 0x42) + 0x10) != 0) {
        uVar3 = *(uint *)((int)this + 0x250);
        if (uVar6 < uVar3) {
          uVar3 = (uVar6 - uVar3) - 1;
        }
        else {
          uVar3 = uVar6 - uVar3;
        }
        if (0x9c3 < uVar3) {
          iVar4 = (int)(((ulonglong)uVar6 % 10000) / 0x9c4);
          *(int *)((int)this + iVar4 * 4 + 0x254) = iVar1;
          uVar6 = *(uint *)((int)this + 0x230);
          uVar3 = *(uint *)((int)this + 0x250);
          *(undefined4 *)((int)this + 0x264) = 0;
          if (uVar6 < uVar3) {
            iVar1 = (uVar6 - uVar3) + -1;
          }
          else {
            iVar1 = uVar6 - uVar3;
          }
          *(int *)((int)this + iVar4 * 4 + 0x240) = iVar1;
          uVar6 = *(uint *)((int)this + 0x230);
          *(uint *)((int)this + 0x250) = uVar6;
          if (10000 < uVar6) {
            iVar4 = 0;
            iVar1 = (int)this + 0x254;
            iVar5 = 4;
            do {
              iVar4 = iVar4 + *(int *)(iVar1 + -0x14);
              iVar1 = iVar1 + 4;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            if (_DAT_660680f8 < (double)iVar4 * _DAT_660680f0) {
              uVar2 = ftol();
              *(undefined4 *)((int)this + 0x274) = uVar2;
            }
          }
        }
      }
      *(uint *)((int)this + 0x234) = uVar6;
      *(uint *)((int)this + 0x230) = param_1;
      *(undefined4 *)((int)this + 0x238) = 0;
      *(undefined4 *)((int)this + 0x23c) = 0;
    }
    uVar6 = *(uint *)((int)this + 0x234);
    iVar1 = *(int *)((int)this + 0x238) + param_2;
    uVar3 = *(uint *)((int)this + 0x230);
    *(int *)((int)this + 0x238) = iVar1;
    if (uVar3 < uVar6) {
      iVar4 = (uVar3 - uVar6) + -1;
    }
    else {
      iVar4 = uVar3 - uVar6;
    }
    iVar1 = iVar1 - (*(uint *)((int)this + 0x6a) * iVar4) / 1000;
    *(int *)((int)this + 0x23c) = iVar1;
    if ((double)*(int *)((int)this + 0x280) <
        ((double)(*(int *)((int)this + 0x26c) + iVar1) * _DAT_660680e8) /
        (double)*(uint *)((int)this + 0x6a) - _DAT_66068118) {
      uVar2 = ftol();
      *(undefined4 *)((int)this + 0x280) = uVar2;
    }
    if (*(int *)(*(int *)((int)this + 0x42) + 0x10) != 0) {
      if (*(int *)((int)this + 0x18c) != 0) {
        *(undefined4 *)((int)this + 0x280) = *(undefined4 *)((int)this + 0x1ac);
        return;
      }
      *(undefined4 *)((int)this + 0x280) = 5000;
    }
  }
  return;
}


