/* Module: vegas30.exe
   Function: FUN_005d67b0
   Address: 005d67b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d67b0(HWND param_1,HWND param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  LRESULT LVar2;
  int iVar3;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_4 == 1) {
    LVar2 = SendMessageA(param_2,0x147,0,0);
    if (LVar2 != -1) {
      *(LRESULT *)(param_3 + 0xd70) = LVar2;
      if (LVar2 < 0xc) {
        iVar3 = LVar2 * 0x28;
        *(undefined4 *)(param_3 + 0xd74) = *(undefined4 *)(&DAT_00646988 + iVar3);
        *(undefined4 *)(param_3 + 0xd78) = *(undefined4 *)(&DAT_0064698c + iVar3);
        *(undefined4 *)(param_3 + 0xd80) = *(undefined4 *)(&DAT_00646990 + LVar2 * 5);
        *(undefined4 *)(param_3 + 0xd84) = *(undefined4 *)((int)&DAT_00646990 + iVar3 + 4);
        *(undefined4 *)(param_3 + 0xd7c) = (&DAT_00646984)[LVar2 * 10];
        *(undefined4 *)(param_3 + 0xda0) = *(undefined4 *)(&DAT_00646998 + iVar3);
        *(undefined4 *)(param_3 + 0xda4) = *(undefined4 *)(&DAT_0064699c + iVar3);
      }
      else {
        iVar3 = FUN_005d6910(LVar2 + -0xc,local_28);
        if (iVar3 == 0) {
          return 0;
        }
        *(undefined4 *)(param_3 + 0xd74) = local_20;
        *(undefined4 *)(param_3 + 0xd80) = local_18;
        *(undefined4 *)(param_3 + 0xd78) = local_1c;
        *(undefined4 *)(param_3 + 0xd84) = local_14;
        *(undefined4 *)(param_3 + 0xda0) = local_10;
        *(undefined4 *)(param_3 + 0xd7c) = local_24;
        *(undefined4 *)(param_3 + 0xda4) = local_c;
      }
    }
    uVar1 = *(undefined4 *)(param_3 + 0xd58);
    *(undefined4 *)(param_3 + 0xd58) = 1;
    FUN_005d6590(param_1,param_3);
    *(undefined4 *)(param_3 + 0xd58) = uVar1;
    if (*(int *)(param_3 + 0xd30) == 0) {
      lParam = 0;
      Msg = 0x468;
      hWnd = GetParent(param_1);
      SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
    }
    *(undefined4 *)(param_3 + 0xd4c) = 1;
  }
  return 1;
}


