/* Module: vegas30k.dll
   Function: FUN_0112fa40
   Address: 0112fa40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0112fa40(int param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  int iVar4;
  undefined1 **ppuVar5;
  undefined1 *local_534 [2];
  undefined1 **local_52c;
  undefined1 *local_528;
  undefined1 *apuStack_524 [63];
  undefined1 auStack_428 [8];
  undefined1 auStack_420 [8];
  undefined1 auStack_418 [520];
  undefined1 auStack_210 [512];
  int iStack_10;
  
  if (param_2 != 0) {
    hWnd = *(HWND *)(param_1 + 0x18);
    ppuVar5 = local_534;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppuVar5 = (undefined1 *)0x0;
      ppuVar5 = ppuVar5 + 1;
    }
    local_528 = (undefined1 *)FUN_0112f650(hWnd,param_2,&local_52c);
    local_534[0] = (undefined1 *)0x410;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_534);
    if ((-1 < iVar4) && (local_52c != (undefined1 **)0x0)) {
      FUN_0112fff0(hWnd,param_2,auStack_210);
      apuStack_524[0] = auStack_418;
      local_528 = auStack_210;
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),&stack0xfffffac4);
      local_534[1] = auStack_420;
      local_52c = apuStack_524;
      apuStack_524[0] = (undefined1 *)((uint)apuStack_524[0] & 0xffffff00);
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),&stack0xfffffabc);
      if ((char)local_52c != '\0') {
        iStack_10 = FUN_0112fdb0(param_1,&local_52c,0,0);
        if (iStack_10 != 0) {
          LVar1 = SendMessageA(hWnd,0x110a,9,0);
          uVar2 = FUN_0112f6d0(hWnd,LVar1);
          FUN_0112fff0(hWnd,LVar1,auStack_428);
          FUN_01131390(param_1,iStack_10,0xffffffff);
          LVar3 = SendMessageA(hWnd,0x110a,9,0);
          if (LVar3 != LVar1) {
            FUN_0112fdb0(param_1,auStack_428,1,uVar2);
          }
        }
      }
    }
  }
  return;
}


