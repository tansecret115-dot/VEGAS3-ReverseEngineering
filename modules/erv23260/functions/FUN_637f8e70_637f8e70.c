/* Module: erv23260.dll
   Function: FUN_637f8e70
   Address: 637f8e70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_637f8e70(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [6];
  uint local_c;
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  local_8 = 0;
  uVar2 = *(uint *)(param_1 + 0xc);
  local_c = *(uint *)(*(int *)((int)this + 0x34) + 0xc);
  local_24[5] = *(uint *)(*(int *)((int)this + 0x34) + 0x10);
  local_8 = FUN_637f4a60(*(void **)((int)this + 4),(int)this + 0x18,(int *)((int)this + 0x28));
  if (local_8 == 0) {
    iVar3 = *(int *)((int)*(void **)((int)this + 4) + 8);
    if (((iVar3 != 0x15) && (iVar3 != 0x16)) && ((local_c != uVar2 || (local_24[5] != uVar1)))) {
      if (((((uVar2 < 0x20) || (0x800 < uVar2)) || (uVar1 < 0x20)) ||
          ((0x480 < uVar1 || ((uVar2 & 0xfffffffc) != uVar2)))) || ((uVar1 & 0xfffffffc) != uVar1))
      {
        return 1;
      }
      piVar5 = FUN_637f5040(*(void **)((int)this + 4),*(int **)((int)this + 0x24),
                            *(int **)((int)this + 0x34),uVar2,uVar1,&local_8);
      if (local_8 != 0) {
        return local_8;
      }
      piVar4 = *(int **)((int)this + 0x34);
      local_24[0] = 0;
      local_24[1] = 0;
      local_24[2] = 0;
      local_24[3] = 0;
      local_64 = *piVar4;
      local_60 = piVar4[1];
      local_5c = piVar4[2];
      local_58 = piVar4[7];
      local_54 = piVar4[3];
      local_50 = piVar4[5];
      local_4c = piVar4[4];
      local_48 = piVar4[6];
      local_44 = *piVar5;
      local_38 = piVar5[7];
      local_40 = piVar5[1];
      local_34 = piVar5[3];
      local_3c = piVar5[2];
      local_2c = piVar5[4];
      local_30 = piVar5[5];
      local_28 = piVar5[6];
      local_24[4] = 3;
      FUN_637ff670(&local_64,&local_44,local_24,local_24 + 4,0,2 < *(int *)((int)this + 0xc));
      piVar5[0x1f] = *(int *)(*(int *)((int)this + 0x34) + 0x7c);
      *(int **)((int)this + 0x34) = piVar5;
    }
    local_8 = FUN_637f4d50(*(void **)((int)this + 4),(int)this + 0x18,(int *)((int)this + 0x28));
  }
  return local_8;
}


