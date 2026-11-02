/* Module: wmfplug2.dll
   Function: FUN_00477010
   Address: 00477010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00477010(int param_1)

{
  int *piVar1;
  WPARAM wParam;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  undefined1 auStack_220 [11];
  undefined1 uStack_215;
  WCHAR aWStack_214 [266];
  
  wParam = SendMessageA(*(HWND *)(param_1 + 0xc4),0x147,0,0);
  if (wParam != 0xffffffff) {
    uVar2 = SendMessageA(*(HWND *)(param_1 + 0xc4),0x150,wParam,0);
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x7c))();
    if (iVar3 < 0) {
      SendMessageA(*(HWND *)(param_1 + 0xc4),0x14e,*(WPARAM *)(param_1 + 0x24),0);
      (**(code **)(**(int **)(param_1 + 8) + 0x7c))
                (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x24));
      (**(code **)(**(int **)(param_1 + 8) + 0x80))
                (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),uVar2,auStack_220,0x104);
      if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_214,-1,&stack0xfffffce8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      uStack_215 = 0;
      puVar4 = FUN_00420d00(DAT_00489e30,0x10be);
      iVar3 = FUN_00425f10(*(HWND *)(param_1 + 0x48),0x31,puVar4);
      if (iVar3 == 1) {
        (**(code **)(**(int **)(param_1 + 8) + 0x68))
                  (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 4),&stack0xfffffce8);
        piVar1 = *(int **)(param_1 + 0xc);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined4 *)(param_1 + 4),&stack0xfffffcdc);
        }
        if (uVar2 < *(uint *)(param_1 + 0x24)) {
          *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) - 1;
        }
        (**(code **)(**(int **)(param_1 + 8) + 0x7c))
                  (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 0x24));
        piVar1 = *(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c);
        (**(code **)(*piVar1 + 0x3c))(piVar1);
        FUN_00476bd0(param_1);
      }
    }
    else {
      *(uint *)(param_1 + 0x24) = uVar2;
    }
    FUN_00476d70(param_1);
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00476e70(param_1);
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c) +
                0x3c))();
  }
  return;
}


