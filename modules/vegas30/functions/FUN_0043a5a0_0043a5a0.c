/* Module: vegas30.exe
   Function: FUN_0043a5a0
   Address: 0043a5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0043a5a0(HWND param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  LRESULT LVar3;
  int *piVar4;
  int iVar5;
  uint wParam;
  undefined1 local_14 [4];
  int local_10;
  char local_b;
  
  uVar1 = SendMessageA(param_1,0x418,0,0);
  wParam = 0;
LAB_0043a5c3:
  do {
    while( true ) {
      uVar2 = param_3;
      if (uVar1 < param_3) {
        uVar2 = uVar1;
      }
      if (uVar2 <= wParam) {
        return uVar1;
      }
      LVar3 = SendMessageA(param_1,0x417,wParam,(LPARAM)local_14);
      if (LVar3 == 0) {
        return uVar1;
      }
      if (local_b != '\x01') break;
      *param_2 = 0;
      wParam = wParam + 1;
      param_2 = param_2 + 2;
    }
    iVar5 = 0;
    piVar4 = &DAT_00610ffc;
    do {
      if (*piVar4 == local_10) {
        *param_2 = iVar5;
        param_2[1] = 0;
        wParam = wParam + 1;
        param_2 = param_2 + 2;
        goto LAB_0043a5c3;
      }
      piVar4 = piVar4 + 5;
      iVar5 = iVar5 + 1;
    } while (piVar4 < &DAT_00611894);
    wParam = wParam + 1;
    param_2 = param_2 + 2;
  } while( true );
}


