/* Module: sfcdi.dll
   Function: FUN_5bf16080
   Address: 5bf16080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf16080(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND pHVar3;
  LRESULT LVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UINT UVar8;
  WPARAM WVar9;
  int iVar10;
  LPARAM LVar11;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 == 0x110) {
      FUN_5bf2fd50(param_1,(HWND)0x0,(int *)0x0,0x8001);
      if (((param_4 != (HWND)0x0) && (param_4[3].unused != 0)) && (param_4[4].unused != 0)) {
        SetWindowLongA(param_1,8,(LONG)param_4);
        pHVar3 = param_4 + 2;
        pHVar2 = GetDlgItem(param_1,0xe74);
        FUN_5bf158a0((uint *)param_4[3].unused,pHVar2,(uint *)pHVar3);
        uVar7 = param_4[2].unused;
        iVar10 = 1;
        pHVar3 = GetDlgItem(param_1,0xe75);
        FUN_5bf15960((HSFCD__ *)param_4[3].unused,pHVar3,uVar7,iVar10);
        return 1;
      }
    }
  }
  else if (param_2 < 0x113) {
    if (param_2 == 0x112) {
      if (param_3 == 0xf140) {
        return 1;
      }
    }
    else {
      if (param_2 == 0x53) {
        FUN_5bf35d70(0,param_1,0,param_4[2].unused,&DAT_5bf64808,(uchar *)0x0);
        return 1;
      }
      if (param_2 == 0x111) {
        uVar7 = param_3 & 0xffff;
        if (uVar7 != 0) {
          if (uVar7 < 3) {
            if (uVar7 == 1) {
              LVar11 = 0;
              WVar9 = 0;
              UVar8 = 0x147;
              pHVar3 = GetDlgItem(param_1,0xe74);
              LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar11);
              puVar1[2] = LVar4;
              iVar10 = FUN_5bf15f80(param_1,(HSFCD__ *)puVar1[3],(int *)puVar1[4],*puVar1,puVar1[1])
              ;
              if (iVar10 != 0) {
                uVar7 = 2;
              }
            }
            EndDialog(param_1,uVar7);
            return 1;
          }
          if ((uVar7 == 0xe74) && (param_3 >> 0x10 == 1)) {
            uVar7 = SendMessageA(param_4,0x147,0,0);
            iVar10 = 0;
            pHVar3 = GetDlgItem(param_1,0xe75);
            FUN_5bf15960((HSFCD__ *)puVar1[3],pHVar3,uVar7,iVar10);
            return 0;
          }
        }
      }
    }
  }
  else if ((param_2 == 0x219) && ((param_3 == 0x8000 || (param_3 == 0x8004)))) {
    LVar11 = 0;
    WVar9 = 0;
    UVar8 = 0x147;
    pHVar3 = GetDlgItem(param_1,0xe74);
    uVar7 = SendMessageA(pHVar3,UVar8,WVar9,LVar11);
    if (param_4[1].unused == 2) {
      uVar6 = param_4[3].unused;
      uVar5 = 1;
      do {
        if ((uVar6 & 1) != 0) break;
        uVar6 = uVar6 >> 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x1b);
      if ((byte)((~-(0x1a < uVar5) & (byte)uVar5) + 0x40) ==
          (byte)(*(char *)(*(int *)(*(int *)(puVar1[3] + 8) + uVar7 * 4) + 0x1ac) + '@')) {
        iVar10 = 0;
        pHVar3 = GetDlgItem(param_1,0xe75);
        FUN_5bf15960((HSFCD__ *)puVar1[3],pHVar3,uVar7,iVar10);
      }
    }
  }
  return 0;
}


