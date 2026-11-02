/* Module: g2plug.dll
   Function: FUN_5f80ae40
   Address: 5f80ae40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80ae40(HWND param_1)

{
  HWND hWnd;
  WPARAM wParam;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *local_4;
  
  hWnd = param_1;
  wParam = SendMessageA(param_1,0x147,0,0);
  if (wParam != 0xffffffff) {
    puVar1 = (undefined4 *)SendMessageA(hWnd,0x150,wParam,0);
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = 0;
      do {
        iVar2 = (**(code **)(*DAT_5f8774a0 + 0xc))(DAT_5f8774a0,iVar3,&local_4);
        if (iVar2 == 0) {
          iVar2 = (**(code **)*local_4)(local_4,&DAT_5f86a440,&param_1);
          if (iVar2 == 0) {
            (**(code **)(param_1->unused + 0x28))(param_1,*puVar1,puVar1[1]);
            if (param_1 != (HWND)0x0) {
              (**(code **)(param_1->unused + 8))(param_1);
              param_1 = (HWND)0x0;
            }
          }
          if (local_4 != (int *)0x0) {
            (**(code **)(*local_4 + 8))(local_4);
            local_4 = (int *)0x0;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 9);
    }
  }
  return 0;
}


