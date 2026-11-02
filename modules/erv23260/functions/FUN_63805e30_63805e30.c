/* Module: erv23260.dll
   Function: FUN_63805e30
   Address: 63805e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_63805e30(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20 [6];
  int local_8;
  
  iVar1 = *(int *)((int)this + 0x80) * 0x77c;
  local_8 = iVar1 + -0x6f8 + (int)this;
  iVar1 = FUN_638095a0(*(int **)(iVar1 + -300 + (int)this));
  *(uint *)(iVar1 + 0x14) = param_1[0xc];
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  FUN_6380b0d0(this,param_1,iVar1);
  (**(code **)(**(int **)((int)this + 0x8d0) + 0x24))
            (*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
             *(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x10),param_1[1],param_1[2]);
  local_60 = *(int *)(iVar1 + 4);
  local_58 = *(undefined4 *)(iVar1 + 8);
  local_5c = *(undefined4 *)(iVar1 + 0xc);
  local_48 = param_1[2];
  local_54 = *(undefined4 *)(iVar1 + 0x10);
  local_50 = param_1[1];
  local_4c = *(int *)(local_8 + 0x6e0) << 4;
  local_44 = *(int *)(local_8 + 0x6dc) << 4;
  iVar1 = *(int *)((int)this + 0x80) + -2;
  local_20[4] = 3;
  if (-1 < iVar1) {
    piVar3 = (int *)(iVar1 * 0x77c + 0x764 + (int)this);
    iVar1 = *(int *)((int)this + 0x80) + -1;
    local_30 = local_50;
    local_28 = local_48;
    do {
      iVar2 = FUN_638095a0((int *)piVar3[-0x45]);
      *(uint *)(iVar2 + 0x14) = param_1[0xc];
      if (piVar3[-5] != 0) {
        local_40 = *(int *)(iVar2 + 4);
        local_38 = *(undefined4 *)(iVar2 + 8);
        local_3c = *(undefined4 *)(iVar2 + 0xc);
        local_34 = *(undefined4 *)(iVar2 + 0x10);
        local_2c = *piVar3 << 4;
        local_24 = piVar3[-1] << 4;
        iVar2 = piVar3[-5];
        if (iVar2 == 1) {
          local_30 = local_30 >> 1;
        }
        else if (iVar2 == 2) {
          local_28 = local_28 >> 1;
        }
        else if (iVar2 == 3) {
          local_30 = local_30 >> 1;
          local_28 = local_28 >> 1;
        }
        FUN_637ff670(&local_60,&local_40,local_20,local_20 + 4,0,'\x01');
      }
      piVar3 = piVar3 + -0x1df;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


