/* Module: vidcap30.exe
   Function: FUN_00442ed0
   Address: 00442ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00442ed0(int param_1,undefined4 *param_2)

{
  LRESULT LVar1;
  undefined4 *puVar2;
  HCURSOR pHVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1004,0,0);
  if ((DAT_005bb558 == 1) && (0 < LVar1)) {
    *(undefined4 *)(param_1 + 0x1c18) = 5;
    *(undefined4 *)(param_1 + 0x1c1c) = *param_2;
    *(undefined4 *)(param_1 + 0x1c20) = param_2[1];
    *(undefined4 *)(param_1 + 0x1c14) = 0x2000000;
    *(undefined4 *)(param_1 + 0x1798) = 0xc;
    if (&stack0x00000000 == (undefined1 *)0x10) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_10 = 0;
      puVar2 = &local_10;
    }
    SendMessageA(*(HWND *)(param_1 + 0x1668),0x100e,0,(LPARAM)puVar2);
    *(undefined4 *)(param_1 + 0x17a4) = local_c;
    if (&stack0x00000000 == (undefined1 *)0x10) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_10 = 0;
      puVar2 = &local_10;
    }
    SendMessageA(*(HWND *)(param_1 + 0x1668),0x100e,LVar1 - 1,(LPARAM)puVar2);
    *(undefined4 *)(param_1 + 0x17a8) = local_4;
    SetCapture(*(HWND *)(param_1 + 8));
    pHVar3 = (HCURSOR)_SfGetUICursor_4(*(undefined4 *)(param_1 + 0x1798));
    pHVar3 = SetCursor(pHVar3);
    *(HCURSOR *)(param_1 + 0x179c) = pHVar3;
    *(undefined4 *)(param_1 + 0x17a0) = 0xffffffff;
  }
  return;
}


