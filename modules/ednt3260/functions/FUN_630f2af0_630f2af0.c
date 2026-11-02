/* Module: ednt3260.dll
   Function: FUN_630f2af0
   Address: 630f2af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f2af0(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short *psVar4;
  short sVar5;
  int local_c;
  int local_8;
  
  *(short *)((int)this + 0x1a) = param_2._2_2_;
  *(int *)this = param_3;
  *(short *)((int)this + 0x1c) = param_2._2_2_;
  *(int *)((int)this + 0x868) = (int)this + 0x68;
  if (param_2._2_2_ == 0) {
    FUN_630f2dc0(this);
    FUN_630f28b0((int)this);
    FUN_630f5db0((int)this);
    FUN_630f60f0((int)this);
    param_3 = 0;
    local_8 = 0;
    local_c = 0;
    do {
      sVar1 = 0;
      sVar5 = (short)param_3;
      if (0 < *(short *)((int)this + 0x6346)) {
        do {
          FUN_630f3f50(this,local_8,(int)sVar1);
          if (sVar1 < *(short *)((int)this + 0x6344)) {
            FUN_630f40b0(this,param_3,sVar1);
            sVar3 = *(short *)((int)this + (local_c + sVar1) * 2 + 0x6348);
          }
          else {
            FUN_630f4100((int)this);
            sVar3 = 0;
          }
          FUN_630faa80(this,sVar5,sVar1);
          FUN_630f87d0(this,sVar5,sVar1);
          FUN_630f3ed0(this,(int)sVar1);
          FUN_630f9100(this,sVar3);
          FUN_630f6170(this,sVar3);
          FUN_630f9150(this,sVar3,local_8,(int)sVar1);
          FUN_630f3f10(this,(int)sVar1);
          FUN_630f9100(this,sVar3);
          FUN_630f6170(this,sVar3);
          FUN_630f9210(this,sVar3,local_8,(int)sVar1);
          sVar1 = sVar1 + 1;
        } while (sVar1 < *(short *)((int)this + 0x6346));
      }
      FUN_630f8690(this,sVar5);
      param_3 = param_3 + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 5;
    } while ((short)param_3 < 6);
    FUN_630fa200(this);
    FUN_630f9bd0((int)this);
    FUN_630f8120((int)this);
    sVar1 = 0;
    do {
      sVar5 = 0;
      if (0 < *(short *)((int)this + 0x6346)) {
        do {
          FUN_630f2950(this,sVar1,sVar5);
          FUN_630f2a10(this,sVar1,sVar5);
          if (sVar5 < *(short *)((int)this + 0x6344)) {
            FUN_630f1350(this,sVar1,sVar5);
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < *(short *)((int)this + 0x6346));
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < 6);
    FUN_630f13f0((int)this);
    FUN_630f2420((int)this);
    FUN_630f5230(this);
    FUN_630f4130((int)this);
    FUN_630f7500((int)this);
    FUN_630f4ae0(this);
    FUN_630f92e0((int)this);
    FUN_630f37c0(this);
    FUN_630f3390((int)this);
    if (*(short *)((int)this + 0x1c) == 0) {
      FUN_630f66a0((int)this);
      FUN_630f6640((int)this);
      psVar4 = (short *)0x0;
      iVar2 = 6;
      do {
        FUN_630f8b30(this,psVar4);
        FUN_630faff0(this,psVar4);
        FUN_630f64c0(this,psVar4);
        psVar4 = (short *)((int)psVar4 + 1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_630f1000(this);
      FUN_630f49a0((int)this);
    }
  }
  if (*(short *)((int)this + 0x1c) == 0) {
    if (*(short *)((int)this + 0x6300) != 0) {
      **(undefined2 **)((int)this + 0x62fa) = *(undefined2 *)((int)this + 0x62fe);
    }
    *(undefined2 *)((int)this + 6) = *(undefined2 *)((int)this + 0x3fbac);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x62fa);
    *(undefined2 *)((int)this + 0xc) = *(undefined2 *)((int)this + 0x6300);
    iVar2 = *(int *)this;
    *(undefined2 *)((int)this + 4) = 7;
    *(undefined2 *)((int)this + 0xe) = 0;
  }
  else {
    iVar2 = *(int *)this;
    *(undefined2 *)((int)this + 6) = 0;
    *(undefined2 *)((int)this + 4) = 7;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(iVar2 + 0x14);
    *(undefined2 *)((int)this + 0xe) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar2 + 0x26);
  *(undefined2 *)((int)this + 0x14) = *(undefined2 *)(iVar2 + 0x2a);
  param_2 = CONCAT22(*(undefined2 *)((int)this + 0x1c),0x405);
  *param_1 = param_2;
  param_1[1] = (int)this + 4;
  return;
}


