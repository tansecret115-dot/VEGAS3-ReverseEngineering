/* Module: oggplug.dll
   Function: FUN_00442d00
   Address: 00442d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_00442d00(int *param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_4;
  
  local_18 = param_4;
  local_14 = param_4;
  if ((int)param_3 < (int)param_4) {
    do {
      uVar3 = param_3;
      if (0x2133 < (int)(local_18 - param_3)) {
        uVar3 = (int)(local_18 + param_3) / 2;
      }
      FUN_00442cc0(param_1,uVar3);
      uVar1 = FUN_00442990(param_1,&local_10,0xffffffff);
      if (uVar1 == 0xffffff80) {
        return 0xffffff80;
      }
      if (((int)uVar1 < 0) || (iVar2 = FUN_00440f10(&local_10), iVar2 != param_5)) {
        local_18 = uVar3;
        if (-1 < (int)uVar1) {
          local_14 = uVar1;
        }
      }
      else {
        param_3 = local_4 + local_c + uVar1;
      }
    } while ((int)param_3 < (int)local_18);
  }
  FUN_00442cc0(param_1,local_14);
  uVar3 = FUN_00442990(param_1,&local_10,0xffffffff);
  if (uVar3 == 0xffffff80) {
    return 0xffffff80;
  }
  if (((int)param_3 < (int)param_4) && (-1 < (int)uVar3)) {
    iVar2 = param_6 + 1;
    iVar4 = FUN_00440f10(&local_10);
    iVar2 = FUN_00442d00(param_1,local_14,param_1[2],param_4,iVar4,iVar2);
    if (iVar2 == -0x80) {
      return 0xffffff80;
    }
  }
  else {
    iVar2 = param_6 + 1;
    param_1[0xd] = iVar2;
    pvVar5 = malloc(param_6 * 8 + 0x10);
    param_1[0xe] = (int)pvVar5;
    *(uint *)((int)pvVar5 + iVar2 * 8) = param_3;
    *(int *)((int)pvVar5 + iVar2 * 8 + 4) = (int)param_3 >> 0x1f;
  }
  iVar2 = param_1[0xe];
  *(int *)(iVar2 + param_6 * 8) = param_2;
  *(int *)(iVar2 + 4 + param_6 * 8) = param_2 >> 0x1f;
  return 0;
}


