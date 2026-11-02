/* Module: erv23260.dll
   Function: FUN_637fd890
   Address: 637fd890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637fd890(void *this,int param_1,uint *param_2,int param_3,undefined1 *param_4,byte param_5,
            uint param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte **ppbVar4;
  byte *local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte **local_14;
  byte *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *param_2;
  local_c = param_2[1];
  if ((param_7 != 0) && (*(int *)((int)this + 0x464) != 7)) {
    FUN_63819000((int *)&local_8,(int *)&local_c,param_5,param_6);
  }
  uVar3 = local_8 & 1 | (local_c & 1) << 1;
  iVar1 = *(int *)(*(int *)((int)this + 0x340) + 0x100);
  iVar2 = *(int *)((int)this + 0x378);
  local_10 = (byte *)(iVar2 + 8);
  local_2c = (byte *)(iVar2 + 0x10);
  local_28 = iVar2 + 0x18;
  local_24 = (byte *)(iVar2 + 0x20);
  local_20 = iVar2 + 0x28;
  if (uVar3 == 0) {
    local_10 = (byte *)(((int)local_8 >> 1) + param_1 + ((int)local_c >> 1) * iVar1);
  }
  else {
    (**(code **)((int)this + (uVar3 + 0x120 + *(int *)((int)this + 700) * 4) * 4))(iVar1);
  }
  ppbVar4 = &local_2c;
  local_14 = ppbVar4;
  local_18 = param_3 - (int)&local_2c;
  param_3 = 4;
  do {
    iVar1 = *(int *)(local_18 + (int)ppbVar4);
    if (iVar1 == 0) {
      *ppbVar4 = local_10;
    }
    else {
      local_8 = param_2[iVar1 * 2];
      local_c = param_2[iVar1 * 2 + 1];
      local_14 = ppbVar4;
      if ((param_7 != 0) && (*(int *)((int)this + 0x464) != 7)) {
        FUN_63819000((int *)&local_8,(int *)&local_c,param_5,param_6);
      }
      ppbVar4 = local_14;
      local_1c = *(int *)(*(int *)((int)this + 0x340) + 0x100);
      uVar3 = local_8 & 1 | (local_c & 1) << 1;
      if (uVar3 == 0) {
        *local_14 = (byte *)(((int)local_8 >> 1) + param_1 + ((int)local_c >> 1) * local_1c);
      }
      else {
        (**(code **)((int)this + (uVar3 + 0x120 + *(int *)((int)this + 700) * 4) * 4))(local_1c);
      }
    }
    ppbVar4 = ppbVar4 + 1;
    param_3 = param_3 + -1;
    local_14 = ppbVar4;
  } while (param_3 != 0);
  FUN_63800580(local_10,local_2c,local_28,local_24,local_20,param_4,
               *(int *)(*(int *)((int)this + 0x340) + 0x100));
  return;
}


