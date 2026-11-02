/* Module: sftrans1.dll
   Function: FUN_00546860
   Address: 00546860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00546860(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  INITCOMMONCONTROLSEX IStack_30;
  undefined4 auStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  DWORD DStack_4;
  
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0xc) = DVar1;
  uVar2 = FUN_004c4840();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = DrawDibOpen();
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  if (((*(int *)(param_1 + 0x10) != 0) ||
      (iVar3 = FUN_004c9ac0(param_1 + 0x10,*(undefined4 *)(param_1 + 8),0,0), -1 < iVar3)) &&
     (iVar3 = FUN_004ca310(*(undefined4 *)(DAT_00622478 + 0x10),&PTR_s_Preferences_00577200,1,0x43e8
                          ), -1 < iVar3)) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
    puVar4 = (undefined4 *)FUN_00546af0(0);
    iVar3 = FUN_0050af00(param_1 + 0x14,*puVar4,uVar2,0);
    if (-1 < iVar3) {
      IStack_30.dwSize = 8;
      IStack_30.dwICC = 0x16ff;
      BVar5 = InitCommonControlsEx(&IStack_30);
      if (BVar5 == 0) {
        FUN_00546a60();
        return -0x7ffb18ff;
      }
      iVar3 = FUN_005477b0();
      if (-1 < iVar3) {
        FUN_00545bc0();
        FUN_00546830(&IStack_30,"Static");
        puVar4 = auStack_28;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        uStack_10 = FUN_004c93c0(0,0x7f00);
        DStack_4 = IStack_30.dwSize;
        uStack_14 = 0;
        uStack_c = 0x10;
        uStack_18 = *(undefined4 *)(DAT_00622478 + 8);
        auStack_28[0] = 8;
        iVar3 = FUN_00546d90(auStack_28);
        if (-1 < iVar3) {
          FUN_00545f20(&IStack_30);
        }
        FUN_00546830(&IStack_30,"StaticHV");
        puVar4 = auStack_28;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        uStack_10 = FUN_004c93c0(0,0x7f00);
        uStack_14 = 0;
        DStack_4 = IStack_30.dwSize;
        uStack_c = 0x10;
        uStack_18 = *(undefined4 *)(DAT_00622478 + 8);
        auStack_28[0] = 0xb;
        iVar3 = FUN_00546d90(auStack_28);
        if (-1 < iVar3) {
          FUN_00545f20(&IStack_30);
        }
        FUN_00545d80();
        if (-1 < iVar3) {
          return iVar3;
        }
      }
    }
  }
  FUN_00546a60();
  return iVar3;
}


