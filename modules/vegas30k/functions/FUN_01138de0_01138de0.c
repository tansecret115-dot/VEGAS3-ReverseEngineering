/* Module: vegas30k.dll
   Function: FUN_01138de0
   Address: 01138de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138de0(HWND param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  WPARAM wParam;
  undefined1 *lParam;
  undefined1 *lParam_00;
  int *piVar5;
  UINT UVar6;
  WPARAM WVar7;
  WCHAR *pWVar8;
  LPARAM LVar9;
  WCHAR aWStack_230 [4];
  undefined1 auStack_228 [12];
  undefined1 auStack_21c [28];
  WCHAR local_200 [255];
  undefined2 local_2;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  LVar9 = 0;
  WVar7 = 0;
  UVar6 = 0x188;
  pHVar2 = GetDlgItem(param_1,0x423);
  WVar7 = SendMessageA(pHVar2,UVar6,WVar7,LVar9);
  if (WVar7 != 0xffffffff) {
    LVar9 = 0;
    UVar6 = 0x199;
    pHVar2 = GetDlgItem(param_1,0x423);
    LVar3 = SendMessageA(pHVar2,UVar6,WVar7,LVar9);
    MultiByteToWideChar(0,1,(LPCSTR)(LVar3 + 0x20),-1,local_200,0x100);
    pWVar8 = local_200;
    local_2 = 0;
    piVar5 = *(int **)(LVar3 + 0x10);
    iVar4 = (**(code **)(*(int *)*puVar1 + 0x88))((int *)*puVar1);
    if (iVar4 == 0) {
      lParam_00 = auStack_21c;
      (**(code **)(**(int **)pWVar8 + 0x6c))(*(int **)pWVar8,3);
      (**(code **)(*piVar5 + 0x28))(piVar5,auStack_228);
      if ((&stack0x00000000 == (undefined1 *)0x230) || (aWStack_230[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_230,-1,&stack0xfffffcd0,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      lParam = &stack0xfffffcd0;
      WVar7 = 0;
      UVar6 = 0x180;
      pHVar2 = GetDlgItem(param_1,0x426);
      wParam = SendMessageA(pHVar2,UVar6,WVar7,(LPARAM)lParam);
      UVar6 = 0x19a;
      WVar7 = wParam;
      pHVar2 = GetDlgItem(param_1,0x426);
      SendMessageA(pHVar2,UVar6,WVar7,(LPARAM)lParam_00);
      LVar9 = 0;
      UVar6 = 0x186;
      pHVar2 = GetDlgItem(param_1,0x426);
      SendMessageA(pHVar2,UVar6,wParam,LVar9);
      FUN_01138770(param_1);
      FUN_01138a00(param_1);
    }
  }
  return;
}


