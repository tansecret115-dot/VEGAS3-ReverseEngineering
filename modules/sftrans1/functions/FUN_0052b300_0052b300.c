/* Module: sftrans1.dll
   Function: FUN_0052b300
   Address: 0052b300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052b300(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  HWND pHVar1;
  LONG lParam;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158 [11];
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
    iVar2 = FUN_0052b270(lParam,&local_164,1);
    if (iVar2 == 0) {
      if (param_2 != 0) {
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        local_c = 0;
        local_158[0] = 0;
        local_158[1] = 0x3fe00000;
        local_158[2] = 0;
        local_158[3] = 0x3fe00000;
        local_158[4] = 2;
        local_158[5] = 1;
        local_158[6] = 0xffffffff;
        local_158[7] = 0x3f800000;
        local_158[8] = 0x3f000000;
        local_158[9] = 0x3f000000;
        local_158[10] = 0;
        local_12c = 0;
        local_28 = 0;
        local_24 = 0xffffff;
        local_20 = 0;
        local_1c = 0x3f800000;
        local_8 = 1;
        local_4 = 0;
        FUN_005296f0(&local_164,lParam + 0x2cc,local_158);
        iVar2 = FUN_00529890(lParam,local_158);
        FUN_00529820(param_1,&local_15c,**(int **)(lParam + 0x308) + -1);
        *(undefined4 *)(lParam + 0x2fc) = local_15c;
        if (iVar2 != -1) {
          iVar2 = **(int **)(lParam + 0x308);
          FUN_0052ac40(param_1);
          *(int *)(lParam + 0xc) = iVar2 + -1;
          *(undefined4 *)(lParam + 8) = 0x835;
          puVar3 = local_158;
          puVar4 = (undefined4 *)(lParam + 0x10);
          for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          pHVar1 = *(HWND *)(lParam + 0x2c8);
          puVar3 = local_158;
          puVar4 = (undefined4 *)(lParam + 0x168);
          for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
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
    puVar5 = (undefined4 *)(lParam + 0x310);
    for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    SetCapture(param_1);
    FUN_0052ac40(param_1);
    *(undefined4 *)(lParam + 8) = 0x836;
    *(undefined4 *)(lParam + 0xc) = *(undefined4 *)(lParam + 0x2fc);
    puVar4 = puVar3;
    puVar5 = (undefined4 *)(lParam + 0x10);
    for (iVar2 = 0x56; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
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


