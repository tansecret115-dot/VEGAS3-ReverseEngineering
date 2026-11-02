/* Module: rmbe3260.dll
   Function: FUN_66040de0
   Address: 66040de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_66040de0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (param_2 == 0) {
    *(int *)((int)this + 0x1d4) = param_1;
    return;
  }
  uVar4 = *(undefined4 *)((int)this + 0x1d4);
  *(int *)((int)this + 0x1d4) = param_1;
  *(undefined4 *)((int)this + 0x1d0) = uVar4;
  *(int *)((int)this + 0x200) = *(int *)((int)this + 0x200) + 1;
  FUN_660428b0(*(void **)(*(int *)((int)this + 0x128) + 8),*(undefined4 *)((int)this + 0xa6),0x1000b
               ,&param_2);
  *(int *)((int)this + 0x218) = *(int *)((int)this + 0x218) + param_2;
  *(int *)((int)this + 0x214) = *(int *)((int)this + 0x214) + param_2;
  FUN_6604f020(&DAT_660752e0,s_Frame_Encode_Time__6606e448,(uint)*(ushort *)((int)this + 0x40),0,
               param_2,param_2 >> 0x1f);
  param_1 = 0;
  FUN_660428b0(*(void **)(*(int *)((int)this + 0x128) + 8),*(undefined4 *)((int)this + 0xa6),0x10014
               ,&param_1);
  uVar1 = *(uint *)((int)this + 0x1d4);
  *(int *)((int)this + 0x22c) = *(int *)((int)this + 0x22c) + param_1;
  uVar5 = *(uint *)((int)this + 0x1e8);
  if (uVar1 < uVar5) {
    uVar5 = (uVar1 - uVar5) - 1;
  }
  else {
    uVar5 = uVar1 - uVar5;
  }
  if (499 < uVar5) {
    iVar7 = (int)(((ulonglong)uVar1 % 2000) / 500);
    *(int *)((int)this + iVar7 * 4 + 0x1ec) =
         *(int *)((int)this + 0x200) - *(int *)((int)this + 0x1fc);
    *(undefined4 *)((int)this + 0x1fc) = *(undefined4 *)((int)this + 0x200);
    *(undefined4 *)((int)this + iVar7 * 4 + 0x204) = *(undefined4 *)((int)this + 0x218);
    *(undefined4 *)((int)this + 0x218) = 0;
    *(undefined4 *)((int)this + iVar7 * 4 + 0x21c) = *(undefined4 *)((int)this + 0x22c);
    uVar1 = *(uint *)((int)this + 0x1d4);
    uVar5 = *(uint *)((int)this + 0x1e8);
    *(undefined4 *)((int)this + 0x22c) = 0;
    if (uVar1 < uVar5) {
      iVar2 = (uVar1 - uVar5) + -1;
    }
    else {
      iVar2 = uVar1 - uVar5;
    }
    *(int *)((int)this + iVar7 * 4 + 0x1d8) = iVar2;
    *(uint *)((int)this + 0x1e8) = *(uint *)((int)this + 0x1d4);
    if (*(uint *)((int)this + 0x1d4) < 2000) {
      FUN_660412b0((int)this);
      uVar1 = *(uint *)((int)this + iVar7 * 4 + 0x1ec);
      if (uVar1 != 0) {
        *(uint *)((int)this + 0x27c) = *(uint *)((int)this + iVar7 * 4 + 0x21c) / uVar1;
        return;
      }
    }
    else {
      iVar7 = 0;
      param_1 = 0;
      param_2 = 4;
      piVar3 = (int *)((int)this + 0x1ec);
      do {
        iVar7 = iVar7 + piVar3[-5];
        iVar6 = iVar6 + *piVar3;
        param_1 = param_1 + piVar3[0xc];
        param_2 = param_2 + -1;
        piVar3 = piVar3 + 1;
      } while (param_2 != 0);
      param_2 = iVar6;
      if (_DAT_660680f8 < (double)iVar7 * _DAT_660680f0) {
        uVar4 = ftol();
        *(undefined4 *)((int)this + 0x270) = uVar4;
      }
      if (0 < iVar7) {
        uVar4 = ftol();
        *(undefined4 *)((int)this + 0x278) = uVar4;
      }
      if (0 < iVar6) {
        uVar4 = ftol();
        *(undefined4 *)((int)this + 0x27c) = uVar4;
      }
    }
  }
  return;
}


