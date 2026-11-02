/* Module: vegas30.exe
   Function: FUN_00552840
   Address: 00552840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00552840(HWND param_1)

{
  HWND pHVar1;
  undefined4 *puVar2;
  LRESULT LVar3;
  int unaff_EBX;
  int *unaff_EBP;
  HWND hDlg;
  WPARAM lParam;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  hDlg = param_1;
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x188;
  pHVar1 = GetDlgItem(param_1,0x46e);
  WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (WVar5 != 0xffffffff) {
    LVar6 = 0;
    UVar4 = 0x199;
    pHVar1 = GetDlgItem(hDlg,0x46e);
    puVar2 = (undefined4 *)SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (puVar2 != (undefined4 *)0x0) {
      param_1 = (HWND)0x0;
      WVar5 = (*(code *)**(undefined4 **)*puVar2)((undefined4 *)*puVar2,&DAT_0060ea68,&param_1);
      if (WVar5 == 0) {
        UVar4 = 0xf0;
        lParam = WVar5;
        pHVar1 = GetDlgItem(hDlg,0x48b);
        LVar3 = SendMessageA(pHVar1,UVar4,WVar5,lParam);
        LVar6 = 0;
        UVar4 = 0x468;
        puVar2[0xc] = (uint)(LVar3 == 1);
        pHVar1 = GetParent(hDlg);
        SendMessageA(pHVar1,UVar4,(WPARAM)hDlg,LVar6);
        *(undefined4 *)(unaff_EBX + 8) = 1;
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      }
      return *(undefined4 *)(unaff_EBX + 8);
    }
  }
  return 0;
}


