/* Module: vegas30k.dll
   Function: FUN_011381c0
   Address: 011381c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011381c0(HWND param_1)

{
  int *piVar1;
  int *piVar2;
  HWND pHVar3;
  WPARAM WVar4;
  LRESULT LVar5;
  int iVar6;
  int unaff_EBP;
  UINT UVar7;
  LPARAM LVar8;
  
  piVar2 = (int *)GetWindowLongA(param_1,8);
  pHVar3 = GetDlgItem(param_1,0x427);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  if (WVar4 != 0xffffffff) {
    LVar8 = 0;
    UVar7 = 0x150;
    pHVar3 = GetDlgItem(param_1,0x427);
    LVar5 = SendMessageA(pHVar3,UVar7,WVar4,LVar8);
    piVar1 = *(int **)(*(int *)(*piVar2 + 0x39c) + 0x218);
    (**(code **)(*piVar1 + 0x3c))(piVar1,LVar5);
    if (unaff_EBP < 1) {
      pHVar3 = GetDlgItem(param_1,0x423);
      WVar4 = SendMessageA(pHVar3,0x147,0,0);
      if (WVar4 == 0xffffffff) {
        return;
      }
      LVar8 = 0;
      UVar7 = 0x150;
      pHVar3 = GetDlgItem(param_1,0x423);
      LVar5 = SendMessageA(pHVar3,UVar7,WVar4,LVar8);
      MultiByteToWideChar(0,1,(LPCSTR)(LVar5 + 0x20),-1,(LPWSTR)&stack0xfffffdf8,0x100);
      piVar2 = (int *)*piVar2;
      iVar6 = *piVar2;
    }
    else {
      piVar1 = *(int **)(*(int *)(*piVar2 + 0x39c) + 0x218);
      (**(code **)(*piVar1 + 0x38))(piVar1,unaff_EBP,&stack0xfffffdf8,0x100);
      piVar2 = (int *)*piVar2;
      iVar6 = *piVar2;
    }
    (**(code **)(iVar6 + 0x6c))(piVar2,3,&stack0xfffffdf8);
    FUN_01137eb0(param_1);
  }
  return;
}


