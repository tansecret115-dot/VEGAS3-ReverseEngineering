/* Module: rnco3260.dll
   Function: Enhance
   Address: 636f3dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Enhance(void *this,byte *param_1,uint param_2,int param_3,int param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint local_1c;
  byte *local_10;
  byte *local_8;
  
                    /* 0x3dd0  6  Enhance */
  if (((param_3 < 0x1001) && (0xf < (int)param_2)) &&
     (((float)_DAT_63765308 <= param_5 - (float)_DAT_637652f0 ||
      (param_5 - (float)_DAT_637652f0 <= (float)_DAT_63765310)))) {
    uVar5 = 0;
    if (DAT_63766258 == 1) {
      FUN_636f55a0(this);
      FUN_636f5770();
      DAT_63766258 = 0;
    }
    uVar1 = param_3 - 1;
    pbVar4 = param_1 + 1;
    pbVar3 = param_1 + param_4;
    local_8 = param_1;
    FUN_636f52b0(pbVar3,pbVar4,(undefined4 *)&DAT_63767f40,uVar1);
    local_10 = pbVar3 + 1;
    FUN_636f52b0(local_10,param_1,(undefined4 *)&DAT_6376bf40,uVar1);
    if (1 < (int)(param_2 - 9)) {
      uVar2 = param_3 - 2;
      local_1c = param_2 - 3 >> 3;
      do {
        local_8 = local_8 + param_4;
        local_10 = local_10 + param_4;
        pbVar4 = pbVar4 + param_4;
        pbVar3 = pbVar3 + param_4;
        FUN_636f4e70(pbVar3,pbVar4,(undefined4 *)&DAT_6376ff40,uVar1);
        FUN_636f4e70(local_10,local_8,(undefined4 *)&DAT_63773f40,uVar1);
        FUN_636f4d60(0x6376ff40,0x63767f40,(int)pbVar4,uVar2);
        local_10 = local_10 + param_4;
        local_8 = local_8 + param_4;
        pbVar4 = pbVar4 + param_4;
        pbVar3 = pbVar3 + param_4;
        FUN_636f4e70(pbVar3,pbVar4,(undefined4 *)&DAT_63767f40,uVar1);
        FUN_636f4e70(local_10,local_8,(undefined4 *)&DAT_6376bf40,uVar1);
        FUN_636f4d60(0x63767f40,0x6376ff40,(int)pbVar4,uVar2);
        local_10 = local_10 + param_4;
        local_8 = local_8 + param_4;
        pbVar4 = pbVar4 + param_4;
        pbVar3 = pbVar3 + param_4;
        FUN_636f4e70(pbVar3,pbVar4,(undefined4 *)&DAT_6376ff40,uVar1);
        FUN_636f4e70(local_10,local_8,(undefined4 *)&DAT_63773f40,uVar1);
        FUN_636f4d60(0x6376ff40,0x63767f40,(int)pbVar4,uVar2);
        local_10 = local_10 + param_4;
        local_8 = local_8 + param_4;
        pbVar4 = pbVar4 + param_4;
        pbVar3 = pbVar3 + param_4;
        FUN_636f4e70(pbVar3,pbVar4,(undefined4 *)&DAT_63767f40,uVar1);
        FUN_636f4e70(local_10,local_8,(undefined4 *)&DAT_6376bf40,uVar1);
        FUN_636f4d60(0x63767f40,0x6376ff40,(int)pbVar4,uVar2);
        local_10 = local_10 + param_4;
        local_8 = local_8 + param_4;
        pbVar4 = pbVar4 + param_4;
        pbVar3 = pbVar3 + param_4;
        FUN_636f4e70(pbVar3,pbVar4,(undefined4 *)&DAT_6376ff40,uVar1);
        FUN_636f4e70(local_10,local_8,(undefined4 *)&DAT_63773f40,uVar1);
        FUN_636f4d60(0x6376ff40,0x63767f40,(int)pbVar4,uVar2);
        local_8 = local_8 + param_4;
        pbVar3 = pbVar3 + param_4;
        local_10 = local_10 + param_4;
        pbVar4 = pbVar4 + param_4;
        FUN_636f4e70(pbVar3,pbVar4,(undefined4 *)&DAT_63767f40,uVar1);
        FUN_636f4e70(local_10,local_8,(undefined4 *)&DAT_6376bf40,uVar1);
        FUN_636f4d60(0x63767f40,0x6376ff40,(int)pbVar4,uVar2);
        pbVar4 = pbVar4 + param_4;
        FUN_636f52b0(pbVar3 + param_4,pbVar4,(undefined4 *)&DAT_6376ff40,uVar1);
        FUN_636f52b0(local_10 + param_4,local_8 + param_4,(undefined4 *)&DAT_63773f40,uVar1);
        FUN_636f4d60(0x6376ff40,0x63767f40,(int)pbVar4,uVar2);
        local_10 = local_10 + param_4 + param_4;
        param_1 = local_8 + param_4 + param_4;
        pbVar4 = pbVar4 + param_4;
        pbVar3 = pbVar3 + param_4 + param_4;
        FUN_636f52b0(pbVar3,pbVar4,(undefined4 *)&DAT_63767f40,uVar1);
        FUN_636f52b0(local_10,param_1,(undefined4 *)&DAT_6376bf40,uVar1);
        FUN_636f4d60(0x63767f40,0x6376ff40,(int)pbVar4,uVar2);
        local_1c = local_1c - 1;
        local_8 = param_1;
      } while (local_1c != 0);
    }
    uVar2 = uVar5;
    switch(param_2 - (param_2 & 0xfffffff8)) {
    case 7:
      uVar5 = 1;
      param_1 = param_1 + param_4;
      FUN_636f4e70(param_1 + param_4,param_1 + 1,(undefined4 *)&DAT_6376ff40,uVar1);
      FUN_636f4e70(param_1 + param_4 + 1,param_1,(undefined4 *)&DAT_63773f40,uVar1);
      FUN_636f4d60(0x6376ff40,0x63767f40,(int)(param_1 + 1),param_3 - 2);
    case 6:
      uVar2 = uVar5 ^ 1;
      param_1 = param_1 + param_4;
      FUN_636f4e70(param_1 + param_4,param_1 + 1,(undefined4 *)(&DAT_63767f40 + uVar2 * 0x8000),
                   uVar1);
      FUN_636f4e70(param_1 + param_4 + 1,param_1,(undefined4 *)(&DAT_6376bf40 + uVar2 * 0x8000),
                   uVar1);
      FUN_636f4d60((int)(&DAT_63767f40 + uVar2 * 0x8000),(int)(&DAT_63767f40 + uVar5 * 0x8000),
                   (int)(param_1 + 1),param_3 - 2);
    case 5:
      uVar5 = uVar2 ^ 1;
      param_1 = param_1 + param_4;
      FUN_636f4e70(param_1 + param_4,param_1 + 1,(undefined4 *)(&DAT_63767f40 + uVar5 * 0x8000),
                   uVar1);
      FUN_636f4e70(param_1 + param_4 + 1,param_1,(undefined4 *)(&DAT_6376bf40 + uVar5 * 0x8000),
                   uVar1);
      FUN_636f4d60((int)(&DAT_63767f40 + uVar5 * 0x8000),(int)(&DAT_63767f40 + uVar2 * 0x8000),
                   (int)(param_1 + 1),param_3 - 2);
    case 4:
      uVar2 = uVar5 ^ 1;
      param_1 = param_1 + param_4;
      FUN_636f4e70(param_1 + param_4,param_1 + 1,(undefined4 *)(&DAT_63767f40 + uVar2 * 0x8000),
                   uVar1);
      FUN_636f4e70(param_1 + param_4 + 1,param_1,(undefined4 *)(&DAT_6376bf40 + uVar2 * 0x8000),
                   uVar1);
      FUN_636f4d60((int)(&DAT_63767f40 + uVar2 * 0x8000),(int)(&DAT_63767f40 + uVar5 * 0x8000),
                   (int)(param_1 + 1),param_3 - 2);
    case 3:
      uVar5 = uVar2 ^ 1;
      param_1 = param_1 + param_4;
      FUN_636f4e70(param_1 + param_4,param_1 + 1,(undefined4 *)(&DAT_63767f40 + uVar5 * 0x8000),
                   uVar1);
      FUN_636f4e70(param_1 + param_4 + 1,param_1,(undefined4 *)(&DAT_6376bf40 + uVar5 * 0x8000),
                   uVar1);
      FUN_636f4d60((int)(&DAT_63767f40 + uVar5 * 0x8000),(int)(&DAT_63767f40 + uVar2 * 0x8000),
                   (int)(param_1 + 1),param_3 - 2);
    case 2:
      pbVar4 = param_1 + param_4;
      iVar6 = (uVar5 ^ 1) * 0x8000;
      FUN_636f4e70(pbVar4 + param_4,pbVar4 + 1,(undefined4 *)(&DAT_63767f40 + iVar6),uVar1);
      FUN_636f4e70(pbVar4 + param_4 + 1,pbVar4,(undefined4 *)(&DAT_6376bf40 + iVar6),uVar1);
      FUN_636f4d60((int)(&DAT_63767f40 + iVar6),(int)(&DAT_63767f40 + uVar5 * 0x8000),
                   (int)(pbVar4 + 1),param_3 - 2);
    }
  }
  return;
}


