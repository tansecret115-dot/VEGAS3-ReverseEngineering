/* Module: aviplug.dll
   Function: FUN_5f95f190
   Address: 5f95f190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5f95f190(void *this,HWND param_1)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint unaff_ESI;
  UINT UVar7;
  LPARAM LVar8;
  BOOL bEnable;
  double dStack_240;
  
  if (*(int *)((int)this + 0x98) != 0) {
    pHVar1 = GetDlgItem(param_1,1000);
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    WVar2 = SendMessageA(pHVar1,0x147,0,0);
    if (WVar2 != 0xffffffff) {
      LVar3 = SendMessageA(pHVar1,0x150,WVar2,0);
      *(LRESULT *)(*(int *)((int)this + 0x98) + 4) = LVar3;
      iVar4 = *(int *)(*(int *)((int)this + 0x98) + 4);
      if ((iVar4 == 0) || (iVar4 == 0x20424944)) {
        *(undefined4 *)((int)this + 0xec) = 1;
      }
      iVar4 = ICOpen(0x63646976,*(undefined4 *)(*(int *)((int)this + 0x98) + 4),4);
      if (iVar4 != 0) {
        iVar5 = ICSendMessage(iVar4,0x500a,0xffffffff,1);
        *(uint *)((int)this + 0xdc) = (uint)(iVar5 == 0);
        ICGetInfo(iVar4,&stack0xfffffdb8,0x238);
        *(uint *)((int)this + 0xe0) = unaff_ESI & 1;
        *(uint *)((int)this + 0xe8) = unaff_ESI >> 2 & 1;
        if (((unaff_ESI & 4) == 0) && ((unaff_ESI & 1) == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        *(undefined4 *)((int)this + 0xe4) = uVar6;
        ICClose(iVar4);
      }
    }
    LVar8 = 0;
    WVar2 = 0;
    UVar7 = 0xf0;
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d9);
    LVar3 = SendMessageA(pHVar1,UVar7,WVar2,LVar8);
    FUN_5f95f3c0(this,(uint)(LVar3 == 1));
    iVar4 = FUN_5f95c8f0(*(int *)((int)this + 0x98));
    if (iVar4 == 0) {
      pHVar1 = *(HWND *)((int)this + 0x10);
      bEnable = 1;
    }
    else {
      iVar4 = *(int *)(*(int *)((int)this + 0x34) + 0x428);
      dStack_240 = *(double *)(iVar4 + 0x68);
      if ((dStack_240 < _DAT_5f9d91f8) || (_DAT_5f9d9200 < dStack_240)) {
        dStack_240 = *(double *)(iVar4 + 0x20);
      }
      if ((dStack_240 < _DAT_5f9d91f8) || (_DAT_5f9d9200 < dStack_240)) {
        dStack_240 = 1.0;
      }
      WVar2 = FUN_5f95e410(dStack_240);
      if (WVar2 != 0xffffffff) {
        LVar8 = 0;
        UVar7 = 0x14e;
        pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x10),0x437);
        SendMessageA(pHVar1,UVar7,WVar2,LVar8);
      }
      pHVar1 = *(HWND *)((int)this + 0x10);
      bEnable = 0;
    }
    pHVar1 = GetDlgItem(pHVar1,0x437);
    EnableWindow(pHVar1,bEnable);
    FUN_5f960230(this,(uint)(LVar3 == 1));
    FUN_5f95fdb0(this);
    return 0;
  }
  return 0x8000ffff;
}


