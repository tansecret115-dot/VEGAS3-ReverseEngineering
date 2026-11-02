/* Module: vidcap30.exe
   Function: FUN_00438c70
   Address: 00438c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00438c70(int param_1)

{
  LRESULT LVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [8];
  
  puVar3 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_1 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x1668),0x103b,0x1e,param_1 + 0x16f0);
    local_20[0] = 2;
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1019,0,(LPARAM)local_20);
    if (LVar1 != 0) {
      puVar3 = (undefined4 *)(param_1 + 0x1678);
      do {
        *puVar3 = local_20[2];
        puVar3 = puVar3 + 1;
        SendMessageA(*(HWND *)(param_1 + 0x1668),0x101c,0,0);
        LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1668),0x1019,0,(LPARAM)local_20);
      } while (LVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x1670) = 1;
    FUN_0041f6d0(param_1 + 0x166c,0x47e);
    FUN_00430c70(*(undefined4 *)(param_1 + 0x13c0));
    FUN_00430c70(*(undefined4 *)(param_1 + 0x13c4));
    FUN_00460850(*(undefined4 *)(param_1 + 0x13dc),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x13e0),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x13e4),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d0),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d4),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x13d8),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x13cc),2,0,0);
    FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),2,0,0);
    free(*(void **)(param_1 + 0x13c8));
    *(undefined4 *)(param_1 + 0x13c8) = 0;
    DestroyWindow(*(HWND *)(param_1 + 0x14dc));
    DestroyWindow(*(HWND *)(param_1 + 0x14e0));
    DestroyWindow(*(HWND *)(param_1 + 0x14e4));
    DestroyWindow(*(HWND *)(param_1 + 0x14e8));
    DestroyWindow(*(HWND *)(param_1 + 0x14ec));
    DestroyWindow(*(HWND *)(param_1 + 0x14f0));
    DestroyWindow(*(HWND *)(param_1 + 0x14f4));
    FUN_00460850(*(undefined4 *)(param_1 + 0x14f8),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x14fc),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1500),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1504),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1508),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x150c),2,0,0);
    FUN_00460850(*(undefined4 *)(param_1 + 0x1510),2,0,0);
    FUN_00430c70(*(undefined4 *)(param_1 + 0x151c));
    FUN_00430c70(*(undefined4 *)(param_1 + 0x1514));
    FUN_00430c70(*(undefined4 *)(param_1 + 0x1518));
    DestroyWindow(*(HWND *)(param_1 + 0x1664));
    DestroyWindow(*(HWND *)(param_1 + 0x1668));
  }
  return;
}


