/* Module: sfcdi.dll
   Function: FUN_5bf15f80
   Address: 5bf15f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf15f80(HWND param_1,HSFCD__ *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  HWND pHVar1;
  uint uVar2;
  uint uVar3;
  LRESULT LVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  int local_48 [8];
  uint local_28 [3];
  byte local_1c;
  undefined4 local_18;
  uint local_8;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  iVar7 = 1;
  pHVar1 = GetDlgItem(param_1,0xe74);
  uVar2 = SendMessageA(pHVar1,Msg,wParam,lParam);
  pHVar1 = GetDlgItem(param_1,0xe75);
  uVar3 = SendMessageA(pHVar1,0x1004,0,0);
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      puVar8 = local_28;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_28[0] = 0xc;
      local_18 = 2;
      local_28[1] = uVar6;
      LVar4 = SendMessageA(pHVar1,0x1005,0,(LPARAM)local_28);
      if ((LVar4 != 0) && ((local_1c & 2) != 0)) {
        piVar9 = local_48;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *piVar9 = 0;
          piVar9 = piVar9 + 1;
        }
        iVar7 = FUN_5bf15ee0(param_2,uVar2,local_8,param_5,param_4,local_48);
        if (iVar7 < 0) {
          return iVar7;
        }
        FUN_5bf2ade0(param_3,local_48,0x20,-1,(int *)0x0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return iVar7;
}


