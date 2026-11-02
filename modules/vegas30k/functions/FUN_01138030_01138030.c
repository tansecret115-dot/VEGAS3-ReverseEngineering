/* Module: vegas30k.dll
   Function: FUN_01138030
   Address: 01138030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138030(HWND param_1)

{
  int *piVar1;
  int *piVar2;
  HWND pHVar3;
  WPARAM wParam;
  LRESULT LVar4;
  UINT UVar5;
  LPARAM LVar6;
  WCHAR local_200 [255];
  undefined2 local_2;
  
  piVar2 = (int *)GetWindowLongA(param_1,8);
  pHVar3 = GetDlgItem(param_1,0x423);
  wParam = SendMessageA(pHVar3,0x147,0,0);
  if (wParam != 0xffffffff) {
    piVar1 = (int *)*piVar2;
    if (piVar1[3] == 0) {
      if (piVar1[0xe8] != 0) {
        (**(code **)(*piVar1 + 0x90))();
      }
      LVar6 = 0;
      UVar5 = 0x150;
      pHVar3 = GetDlgItem(param_1,0x423);
      LVar4 = SendMessageA(pHVar3,UVar5,wParam,LVar6);
      MultiByteToWideChar(0,1,(LPCSTR)(LVar4 + 0x20),-1,local_200,0x100);
      local_2 = 0;
      (**(code **)(*(int *)*piVar2 + 0x88))
                ((int *)*piVar2,*(undefined4 *)(LVar4 + 0x10),*(undefined4 *)(LVar4 + 0x14),
                 *(undefined4 *)(LVar4 + 0x18));
      (**(code **)(*(int *)*piVar2 + 0x6c))((int *)*piVar2,3,&stack0xfffffde4);
    }
    else {
      LVar6 = 0;
      UVar5 = 0x150;
      pHVar3 = GetDlgItem(param_1,0x423);
      LVar4 = SendMessageA(pHVar3,UVar5,wParam,LVar6);
      MultiByteToWideChar(0,1,(LPCSTR)(LVar4 + 0x20),-1,local_200,0x100);
      local_2 = 0;
      FUN_0103fa40(*(undefined4 *)(*(int *)(*piVar2 + 0x39c) + 0x218),*(undefined4 *)(LVar4 + 0x10),
                   *(undefined4 *)(LVar4 + 0x14));
      (**(code **)(*(int *)*piVar2 + 0x6c))();
    }
    FUN_01137b10(param_1);
    FUN_01137eb0(param_1);
  }
  return;
}


