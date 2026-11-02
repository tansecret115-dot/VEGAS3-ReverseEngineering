/* Module: erv23260.dll
   Function: FUN_637fd600
   Address: 637fd600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637fd600(void *this,int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var;
  uint uVar5;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)((int)this + 4);
  uVar4 = FUN_637fd3d0(this,param_1);
  uVar5 = 0;
  if (uVar4 != param_2) {
    do {
      if (param_3 <= uVar5) break;
      bVar3 = FUN_637fd5c0((int)this);
      uVar4 = CONCAT31(extraout_var,bVar3) | *(uint *)(&DAT_638293f0 + param_1 * 4) & uVar4 * 2;
      uVar5 = uVar5 + 1;
    } while (uVar4 != param_2);
    if (uVar4 != param_2) {
      *(undefined4 *)((int)this + 4) = uVar2;
      *(undefined4 *)((int)this + 0xc) = uVar1;
      return 0;
    }
  }
  return 1;
}


