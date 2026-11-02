/* Module: vegas30k.dll
   Function: FUN_0113a3f0
   Address: 0113a3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113a3f0(HWND param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  LPCSTR lpString;
  HWND pHVar4;
  uint wParam;
  int unaff_EBX;
  UINT UVar5;
  WPARAM wParam_00;
  LPARAM LVar6;
  
  piVar2 = param_2;
  piVar1 = (int *)param_2[1];
  iVar3 = FUN_01139380(param_1);
  if (iVar3 != 0) {
    if (*piVar2 != 0) {
      lpString = (LPCSTR)_SfGetString2_8(DAT_0120e5c8,0x10c2);
      pHVar4 = GetDlgItem(param_1,1);
      SetWindowTextA(pHVar4,lpString);
      iVar3 = 0;
      pHVar4 = GetDlgItem(param_1,2);
      ShowWindow(pHVar4,iVar3);
    }
    (**(code **)(*piVar1 + 0x70))(piVar1,4,&param_2);
    LVar6 = 0;
    wParam = (uint)(unaff_EBX != 0);
    UVar5 = 0xf1;
    pHVar4 = GetDlgItem(param_1,0x47);
    SendMessageA(pHVar4,UVar5,wParam,LVar6);
    FUN_01139ac0(param_1);
    FUN_0113a000(param_1);
    LVar6 = 0;
    wParam_00 = 0;
    UVar5 = 0x130c;
    pHVar4 = GetDlgItem(param_1,0x430);
    SendMessageA(pHVar4,UVar5,wParam_00,LVar6);
    pHVar4 = GetDlgItem(param_1,0x430);
    FUN_0113a760(param_1,pHVar4);
    return 1;
  }
  return 0;
}


