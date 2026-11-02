/* Module: vegas30.exe
   Function: FUN_00521780
   Address: 00521780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00521780(int param_1,HWND param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 8) != 0) && (param_2 != (HWND)0x0)) {
    uVar1 = _SfGetUIFont_4(100);
    if (*(HWND *)(param_1 + 0xf0) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(param_1 + 0xf0));
      uVar1 = FUN_0051fc80(param_2,0x3ec,uVar1,2);
      *(undefined4 *)(param_1 + 0xf0) = uVar1;
    }
    puVar3 = (undefined4 *)(param_1 + 0xc0);
    iVar2 = 0x10;
    do {
      if (((HWND)*puVar3 != (HWND)0x0) && ((*(byte *)(puVar3 + -5) & 4) == 0)) {
        SetParent((HWND)*puVar3,param_2);
      }
      puVar3 = puVar3 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (*(HWND *)(param_1 + 0x210) != (HWND)0x0) {
      SetParent(*(HWND *)(param_1 + 0x210),param_2);
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_00455400(*(int *)(param_1 + 0x90));
    }
    if (*(HWND *)(param_1 + 0x180) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x180),0x701,0,0);
    }
    FUN_0043bc40(param_1 + 0x150,0,param_2);
    FUN_0043bc40(param_1 + 0x108,0,param_2);
    FUN_0050cfd0(param_1);
    FUN_0051ddc0(param_1,0);
  }
  return 0;
}


