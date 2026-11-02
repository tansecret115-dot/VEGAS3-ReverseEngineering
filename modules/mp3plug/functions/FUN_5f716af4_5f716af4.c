/* Module: mp3plug.dll
   Function: FUN_5f716af4
   Address: 5f716af4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5f716af4(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[0xf] - (param_2[0x10] - param_2[0x11]);
  fVar2 = param_2[0xe] - fVar1;
  param_2[0x10] = param_2[0x10] - param_2[0x11];
  fVar1 = fVar1 - param_2[0x11];
  fVar3 = param_2[0xd] - fVar2;
  fVar4 = param_2[0xc] - fVar3;
  param_2[0xe] = fVar2;
  fVar3 = fVar3 - fVar1;
  fVar2 = param_2[0xb] - fVar4;
  fVar5 = param_2[10] - fVar2;
  param_2[0xc] = fVar4;
  fVar2 = fVar2 - fVar3;
  fVar4 = param_2[9] - fVar5;
  fVar6 = param_2[8] - fVar4;
  param_2[10] = fVar5;
  fVar4 = fVar4 - fVar2;
  fVar5 = param_2[7] - fVar6;
  fVar7 = param_2[6] - fVar5;
  param_2[8] = fVar6;
  fVar5 = fVar5 - fVar4;
  fVar6 = param_2[5] - fVar7;
  fVar8 = param_2[4] - fVar6;
  param_2[6] = fVar7;
  fVar6 = fVar6 - fVar5;
  fVar7 = param_2[3] - fVar8;
  param_2[4] = fVar8;
  fVar8 = param_2[2] - fVar7;
  param_2[0xf] = fVar1;
  fVar1 = param_2[1] - fVar8;
  param_2[2] = fVar8;
  param_2[5] = fVar6;
  fVar7 = fVar7 - fVar6;
  *param_2 = (*param_2 - fVar1) * _DAT_5f76530c;
  param_2[7] = fVar5;
  param_2[9] = fVar4;
  param_2[0xb] = fVar2;
  param_2[0xd] = fVar3;
  fVar1 = (fVar1 - fVar7) * _DAT_5f765310;
  param_2[3] = fVar7;
  param_2[1] = fVar1;
  FUN_5f716e34(param_2,(float *)((int)this + 0x90));
  FUN_5f716e34(param_2 + 1,(float *)((int)this + 0xb4));
  *(float *)((int)this + 0xb4) = *(float *)((int)this + 0xb4) * _DAT_5f7652e8;
  *(float *)((int)this + 0xb8) = _DAT_5f7652ec * *(float *)((int)this + 0xb8);
  *(float *)((int)this + 0xbc) = *(float *)((int)this + 0xbc) * _DAT_5f7652f0;
  *(float *)((int)this + 0xc0) = *(float *)((int)this + 0xc0) * _DAT_5f7652f4;
  *(float *)((int)this + 0xc4) = *(float *)((int)this + 0xc4) * _DAT_5f7652f8;
  *(float *)((int)this + 200) = *(float *)((int)this + 200) * _DAT_5f7652fc;
  *(float *)((int)this + 0xcc) = *(float *)((int)this + 0xcc) * _DAT_5f765300;
  *(float *)((int)this + 0xd0) = *(float *)((int)this + 0xd0) * _DAT_5f765304;
  *(float *)((int)this + 0xd4) = *(float *)((int)this + 0xd4) * _DAT_5f765308;
  FUN_5f716fd4(this,param_1,param_2,param_3);
  return;
}


