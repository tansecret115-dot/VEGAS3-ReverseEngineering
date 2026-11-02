/* Module: vegas30.exe
   Function: FUN_004cb9c0
   Address: 004cb9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004cb9c0(int *param_1)

{
  int iVar1;
  int iVar2;
  UINT UVar3;
  HMENU hmenu;
  UINT UVar4;
  uint uVar5;
  UINT *pUVar6;
  UINT UVar7;
  bool bVar8;
  undefined4 local_34;
  int local_30;
  UINT local_28 [10];
  
  UVar3 = (UINT)param_1;
  iVar1 = *(int *)((int)param_1 + 0xce4);
  local_28[0] = 0xc5e5;
  local_28[1] = 0xc5e6;
  local_28[2] = 0xc5e7;
  local_28[3] = 0xc5e8;
  local_28[4] = 0xc5e9;
  local_28[5] = 0;
  local_28[6] = 1;
  local_28[7] = 2;
  local_28[8] = 3;
  local_28[9] = 4;
  hmenu = (HMENU)FUN_004047d0(0x352,0);
  CheckMenuRadioItem(hmenu,0xc5e5,0xc5e9,local_28[*(int *)(iVar1 + 0x230)],0);
  UVar4 = FUN_00404830(*(undefined4 *)((int)param_1 + 4),hmenu,&stack0x00000008,2);
  if (UVar4 == 0) {
    return 1;
  }
  uVar5 = 0;
  local_34 = 1;
  pUVar6 = local_28;
  do {
    if (UVar4 == *pUVar6) {
      UVar7 = local_28[uVar5 + 5];
      break;
    }
    uVar5 = uVar5 + 1;
    pUVar6 = pUVar6 + 1;
    UVar7 = (UINT)param_1;
  } while (uVar5 < 5);
  if (4 < (int)UVar7) {
    UVar7 = *(UINT *)(iVar1 + 0x230);
  }
  if ((*(byte *)(iVar1 + 0x10) & 0x10) == 0) {
    if (*(UINT *)(iVar1 + 0x230) != UVar7) {
      *(UINT *)(iVar1 + 0x230) = UVar7;
      FUN_004e9f70(*(undefined4 *)((int)param_1 + 0xbc8),0x53,0);
      FUN_004ea250(*(undefined4 *)((int)param_1 + 0xbc8),iVar1,0xe,0);
      *(UINT *)(iVar1 + 0x230) = UVar7;
      FUN_004eb2b0(*(undefined4 *)((int)param_1 + 0xbc8));
      FUN_004ea040(*(undefined4 *)((int)param_1 + 0xbc8),0);
      return 0;
    }
  }
  else {
    bVar8 = false;
    if (*(int *)((int)param_1 + 0xbc8) == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)FUN_005b87b0(*(int *)((int)param_1 + 0xbc8));
    }
    local_30 = 0;
    iVar1 = *param_1;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1[2] + local_30 * 4);
        if (((*(byte *)(iVar2 + 0x10) & 0x10) != 0) && (*(UINT *)(iVar2 + 0x230) != UVar7)) {
          if (!bVar8) {
            FUN_004e9f70(*(undefined4 *)(UVar3 + 0xbc8),0x53,0);
            bVar8 = true;
            local_34 = 0;
          }
          FUN_004ea250(*(undefined4 *)(UVar3 + 0xbc8),iVar2,0xe,0);
          *(UINT *)(iVar2 + 0x230) = UVar7;
        }
        local_30 = local_30 + 1;
      } while (local_30 < iVar1);
      if (bVar8) {
        FUN_004eb2b0(*(undefined4 *)(UVar3 + 0xbc8));
        FUN_004ea040(*(undefined4 *)(UVar3 + 0xbc8),0);
      }
      return local_34;
    }
  }
  return 1;
}


