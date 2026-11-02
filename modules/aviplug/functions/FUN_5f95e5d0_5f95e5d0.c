/* Module: aviplug.dll
   Function: FUN_5f95e5d0
   Address: 5f95e5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95e5d0(void *param_1)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  int *unaff_ESI;
  WPARAM wParam;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 local_244;
  LRESULT local_240;
  int local_23c;
  
  iVar1 = FUN_5f95c8f0(*(int *)((int)param_1 + 0x98));
  if (iVar1 != 0) {
    local_23c = *(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x5c);
    hWnd = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x436);
    local_240 = SendMessageA(hWnd,0x146,0,0);
    wParam = 0;
    if (0 < local_240) {
      do {
        LVar2 = SendMessageA(hWnd,0x150,wParam,0);
        if (LVar2 == local_23c) {
          SendMessageA(hWnd,0x14e,wParam,0);
          break;
        }
        wParam = wParam + 1;
      } while ((int)wParam < local_240);
    }
  }
  FUN_5f95ca00(param_1,0);
  puVar4 = &local_244;
  local_244 = 0;
  piVar6 = (int *)&DAT_5f9d91d8;
  iVar1 = (**(code **)**(undefined4 **)((int)param_1 + 0x2c))
                    (*(undefined4 **)((int)param_1 + 0x2c),&DAT_5f9d91d8,puVar4);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_ESI + 0xc))
                      (unaff_ESI,*(undefined4 *)(*(int *)((int)param_1 + 0x98) + 4),&stack0xfffffdb4
                      );
    if (((-1 < iVar1) &&
        (iVar1 = (**(code **)(*piVar6 + 0x10))
                           (piVar6,*(undefined4 *)((int)param_1 + 0x34),puVar4,
                            *(undefined4 *)((int)param_1 + 0x30),2), -1 < iVar1)) &&
       (iVar1 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x94), iVar1 != 0)) {
      puVar4 = (undefined4 *)(iVar1 + 0x10);
      puVar5 = *(undefined4 **)((int)param_1 + 0x98);
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  iVar1 = ICOpen(0x63646976,*(undefined4 *)(*(int *)((int)param_1 + 0x98) + 4),4);
  FUN_5f95ca00(param_1,iVar1);
  if (iVar1 != 0) {
    ICGetInfo(iVar1,&stack0xfffffdb0,0x238);
    *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0xc) = 0;
    if (*(int *)((int)param_1 + 0xe0) != 0) {
      ICSendMessage(iVar1,0x501e,&DAT_5f9f41a0,4);
      *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0xc) = DAT_5f9f41a0;
    }
    *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 8) = 0;
    if (*(int *)((int)param_1 + 0xe8) != 0) {
      ICSendMessage(iVar1,0x402a,&DAT_5f9f41a0,4);
      *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 8) = DAT_5f9f41a0;
    }
    ICClose(iVar1);
  }
  return;
}


