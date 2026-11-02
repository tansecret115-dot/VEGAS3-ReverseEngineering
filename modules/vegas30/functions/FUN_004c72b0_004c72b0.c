/* Module: vegas30.exe
   Function: FUN_004c72b0
   Address: 004c72b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c72b0(undefined4 param_1,undefined4 param_2,HMENU param_3,uint *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  UINT_PTR UVar4;
  LPCSTR pCVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  EnableMenuItem(param_3,0x9d0c,1);
  EnableMenuItem(param_3,0x9d0b,1);
  EnableMenuItem(param_3,0x9d0d,1);
  if (param_5 != 0) {
    uVar2 = *(uint *)(param_5 + 0x10);
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar2;
    }
    CheckMenuItem(param_3,0xa0c2,(uVar2 & 1) << 3);
    CheckMenuItem(param_3,0xa0c1,(uVar2 & 2) << 2);
    CheckMenuItem(param_3,0xa0c3,(uVar2 & 4) << 1);
    CheckMenuItem(param_3,0xa0c4,uVar2 & 8);
    uVar2 = FUN_005b87c0(*(undefined4 *)(param_5 + 4));
    if (uVar2 < 3) {
      local_8 = 0xa0c2;
      local_4 = 0;
      _SfCullMenu_16(param_3,&local_8,2,1);
    }
    if (*(int *)(param_5 + 4) == 2) {
      CheckMenuItem(param_3,0xa0d4,(*(uint *)(param_5 + 0x634) & 1) << 3);
      iVar3 = *(int *)(*(int *)(param_5 + 0x69c) + 0x54);
      iVar1 = *(int *)(iVar3 + 0x40);
      iVar3 = *(int *)(iVar3 + 0x38);
      if (iVar1 == iVar3 || iVar1 - iVar3 < 0) {
        EnableMenuItem(param_3,0xa0c7,1);
      }
      iVar3 = _SfGetSubmenuByID_12(param_3,0xa2b2,0);
      if (iVar3 != 0) {
        FUN_004c6bc0(param_1,param_5,iVar3,0);
      }
      if ((DAT_0064761c & 0x800) != 0) {
        EnableMenuItem(param_3,0xa0c6,1);
        EnableMenuItem(param_3,0xa0c0,1);
      }
      UVar4 = FUN_004c6df0(param_5,1);
      if (UVar4 != 0) {
        AppendMenuA(param_3,0x800,0,(LPCSTR)0x0);
        pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e0f);
        AppendMenuA(param_3,0x10,UVar4,pCVar5);
      }
    }
    else if (*(int *)(param_5 + 4) == 3) {
      iVar3 = *(int *)(*(int *)(param_5 + 0x69c) + 0x54);
      iVar1 = *(int *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x58);
      if (iVar1 == iVar3 || iVar1 - iVar3 < 0) {
        EnableMenuItem(param_3,0xa0c7,1);
      }
      CheckMenuItem(param_3,0xa1ca,(*(uint *)(param_5 + 0x44) & 2) << 2);
      CheckMenuItem(param_3,0xa1cb,(*(uint *)(param_5 + 0x44) & 4) << 1);
      CheckMenuItem(param_3,0xa1cc,(*(uint *)(param_5 + 0x44) & 1) << 3);
      CheckMenuItem(param_3,0xa1ce,*(uint *)(param_5 + 0x44) & 8);
      CheckMenuItem(param_3,0xa37a,*(uint *)(param_5 + 0x44) >> 1 & 8);
      FUN_004c6b60(param_1,param_5,param_3,0);
    }
    UVar4 = FUN_004c6a80(param_1,param_2,param_5);
    if (UVar4 != 0) {
      AppendMenuA(param_3,0x800,0,(LPCSTR)0x0);
      pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5104);
      AppendMenuA(param_3,0x10,UVar4,pCVar5);
    }
    return;
  }
  SetMenuDefaultItem(param_3,0xc5ca,0);
  return;
}


