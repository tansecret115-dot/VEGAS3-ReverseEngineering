/* Module: qt4plug.dll
   Function: FUN_5f521920
   Address: 5f521920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f52199d) */
/* WARNING: Removing unreachable block (ram,0x5f5219ca) */
/* WARNING: Removing unreachable block (ram,0x5f5219c2) */
/* WARNING: Removing unreachable block (ram,0x5f5219cc) */

void __thiscall FUN_5f521920(void *this,HWND param_1)

{
  WPARAM WVar1;
  LRESULT LVar2;
  HWND pHVar3;
  LRESULT LVar4;
  int iVar5;
  undefined4 *puVar6;
  UINT UVar7;
  LPARAM LVar8;
  undefined4 auStack_48 [11];
  uint uStack_1c;
  uint uStack_18;
  
  WVar1 = SendMessageA(param_1,0x147,0,0);
  LVar2 = SendMessageA(param_1,0x150,WVar1,0);
  if ((-1 < LVar2) && (LVar2 < *DAT_5f5a3ed4)) {
    FUN_5f5808e0();
    puVar6 = auStack_48;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    LVar8 = 0;
    WVar1 = 0;
    UVar7 = 0xf0;
    pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d9);
    LVar4 = SendMessageA(pHVar3,UVar7,WVar1,LVar8);
    *(undefined4 *)((int)this + 0x74) = 0;
    *(uint *)((int)this + 0x70) = uStack_18 >> 5 & 1;
    *(uint *)((int)this + 0x6c) = uStack_1c >> 10 & 1;
    FUN_5f521710(this,*(int *)(DAT_5f5a3ed4 + LVar2 * 0x16 + 3));
    if (*(int *)((int)this + 0x6c) == 0) {
      LVar8 = 0;
      WVar1 = 0;
      UVar7 = 0xf1;
      pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f0);
      SendMessageA(pHVar3,UVar7,WVar1,LVar8);
    }
    FUN_5f521aa0(this,*(undefined4 *)(DAT_5f5a3ed4 + LVar2 * 0x16 + 3),(int)auStack_48,0,0);
    (**(code **)(*(int *)this + 0x54))(LVar4 == 1);
  }
  return;
}


