/* Module: vfplugs.dll
   Function: FUN_00472f30
   Address: 00472f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00472f30(HWND param_1,int param_2,int param_3,undefined4 param_4)

{
  HWND pHVar1;
  LONG lParam;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  int local_164;
  undefined4 local_160;
  int local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  lParam = GetWindowLongA(param_1,0);
  local_164 = param_3;
  local_160 = param_4;
  if (*(int *)(lParam + 0x2ec) != 0) {
    SetFocus(param_1);
    iVar2 = FUN_00472ea0(lParam,&local_164,1);
    if (iVar2 == 0) {
      if (param_2 != 0) {
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        local_158._0_4_ = 0;
        local_158._4_4_ = 0x3fe00000;
        local_150 = 0;
        local_14c = 0x3fe00000;
        local_148 = 2;
        local_144 = 1;
        local_140 = 0xffffffff;
        local_13c = 0x3f800000;
        local_138 = 0x3f000000;
        local_134 = 0x3f000000;
        local_130 = 0;
        local_12c = 0;
        local_28 = 0;
        local_24 = 0xffffff;
        local_20 = 0;
        local_1c = 0x3f800000;
        local_8 = 1;
        local_4 = 0;
        FUN_00471320(&local_164,(int *)(lParam + 0x2cc),(double *)&local_158);
        iVar2 = FUN_004714c0(lParam,(double *)&local_158);
        FUN_00471450(param_1,&local_15c,**(int **)(lParam + 0x308) + -1);
        *(int *)(lParam + 0x2fc) = local_15c;
        if (iVar2 != -1) {
          iVar2 = **(int **)(lParam + 0x308);
          FUN_00472870(param_1);
          *(int *)(lParam + 0xc) = iVar2 + -1;
          *(undefined4 *)(lParam + 8) = 0x835;
          puVar5 = &local_158;
          puVar3 = (undefined4 *)(lParam + 0x10);
          for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *(undefined4 *)puVar5;
            puVar5 = (undefined8 *)((int)puVar5 + 4);
            puVar3 = puVar3 + 1;
          }
          pHVar1 = *(HWND *)(lParam + 0x2c8);
          puVar5 = &local_158;
          puVar3 = (undefined4 *)(lParam + 0x168);
          for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *(undefined4 *)puVar5;
            puVar5 = (undefined8 *)((int)puVar5 + 4);
            puVar3 = puVar3 + 1;
          }
          SendMessageA(pHVar1,0x4e,*(WPARAM *)(lParam + 4),lParam);
          return 1;
        }
      }
      return 1;
    }
    *(undefined4 *)(lParam + 0x2f8) = 1;
    *(undefined1 *)(lParam + 0x4ad) = 0xff;
    *(undefined1 *)(lParam + 0x4ac) = 0;
    puVar3 = (undefined4 *)
             (*(int *)(*(int *)(lParam + 0x308) + 4) * *(int *)(lParam + 0x2fc) +
             *(int *)(*(int *)(lParam + 0x308) + 8));
    puVar4 = puVar3;
    puVar6 = (undefined4 *)(lParam + 0x310);
    for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    SetCapture(param_1);
    FUN_00472870(param_1);
    *(undefined4 *)(lParam + 8) = 0x836;
    *(undefined4 *)(lParam + 0xc) = *(undefined4 *)(lParam + 0x2fc);
    puVar4 = puVar3;
    puVar6 = (undefined4 *)(lParam + 0x10);
    for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    pHVar1 = *(HWND *)(lParam + 0x2c8);
    puVar4 = (undefined4 *)(lParam + 0x168);
    for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    SendMessageA(pHVar1,0x4e,*(WPARAM *)(lParam + 4),lParam);
    SendMessageA(param_1,0x20,(WPARAM)param_1,0x2010001);
  }
  return 1;
}


