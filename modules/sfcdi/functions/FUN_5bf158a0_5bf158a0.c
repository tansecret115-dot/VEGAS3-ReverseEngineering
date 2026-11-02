/* Module: sfcdi.dll
   Function: FUN_5bf158a0
   Address: 5bf158a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf158a0(uint *param_1,HWND param_2,uint *param_3)

{
  int iVar1;
  WPARAM wParam;
  int iVar2;
  uint uVar3;
  uint local_108;
  uchar local_104 [260];
  
  uVar3 = 0;
  SendMessageA(param_2,0x14b,0,0);
  iVar2 = 0;
  if (param_1 == (uint *)0x0) {
    local_108 = 0;
  }
  else {
    local_108 = *param_1;
  }
  if (local_108 != 0) {
    do {
      iVar1 = *(int *)(param_1[2] + uVar3 * 4);
      if ((iVar1 != 0) && (iVar1 = FUN_5bf15860(iVar1,local_104), iVar1 == 0)) {
        wParam = SendMessageA(param_2,0x143,0,(LPARAM)local_104);
        SendMessageA(param_2,0x151,wParam,uVar3);
        iVar2 = iVar2 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_108);
  }
  uVar3 = *param_3;
  if (iVar2 - 1U < *param_3) {
    uVar3 = iVar2 - 1U;
  }
  *param_3 = uVar3;
  SendMessageA(param_2,0x14e,uVar3,0);
  return 0;
}


