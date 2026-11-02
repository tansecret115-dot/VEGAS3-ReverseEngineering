/* Module: rmto3260.dll
   Function: FUN_662d9eb0
   Address: 662d9eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_662d9eb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,int param_6)

{
  double dVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong local_c;
  
  iVar4 = 0;
  if (*(int *)((int)this + 0xba) == 0) {
    local_c = (ulonglong)(uint)(*(int *)((int)this + 0x92) + *(int *)((int)this + 0x9a));
    floor((double)local_c + *(double *)((int)this + 0x3a));
    uVar2 = ftol();
    *(undefined4 *)((int)this + 0x9a) = uVar2;
  }
  else {
    *(undefined4 *)((int)this + 0x9a) = 0;
  }
  *(undefined4 *)((int)this + 0x56) = param_1;
  *(undefined4 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x5e) = param_3;
  *(undefined4 *)((int)this + 0x5a) = param_2;
  *(undefined4 *)((int)this + 0x92) = param_4;
  if (*(short *)((int)this + 0x6c) == 1) {
    *(uint *)((int)this + 0x9a) = *(int *)((int)this + 0x9a) + param_5;
    if (param_5 != 0) {
      FUN_66301f30(0,s_Id___lu_Offsetting__gap__next_su_6630b178);
      return 0;
    }
  }
  else {
    if (*(int *)((int)this + 0xba) == 0) {
      param_5 = param_5 + param_6;
      if (param_5 < *(uint *)((int)this + 0x9a)) {
        *(uint *)((int)this + 0x9a) = *(uint *)((int)this + 0x9a) - param_6;
      }
      else {
        *(undefined4 *)((int)this + 0x9a) = 0;
      }
    }
    if (param_5 != 0) {
      local_c = (ulonglong)param_5;
      dVar1 = (double)local_c;
      floor(dVar1 / *(double *)((int)this + 0x2a));
      uVar3 = ftol();
      if (*(double *)((int)this + 0x2a) * _DAT_663073f0 <
          dVar1 - (double)uVar3 * *(double *)((int)this + 0x2a)) {
        uVar3 = uVar3 + 1;
      }
      if (dVar1 != (double)uVar3 * *(double *)((int)this + 0x2a)) {
        ftol();
        FUN_66301f30(0,s_Id___lu_Skewing_stream_by__ldms_6630b154);
      }
      iVar4 = FUN_662d9ca0(this,uVar3);
    }
  }
  return iVar4;
}


