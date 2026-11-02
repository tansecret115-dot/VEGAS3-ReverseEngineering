/* Module: sftrans1.dll
   Function: FUN_00459f50
   Address: 00459f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00459f50(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  LPARAM LVar4;
  LRESULT LVar5;
  uint uVar6;
  int *unaff_EBP;
  WPARAM wParam;
  int *local_8 [2];
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_8[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00554c20,local_8);
  }
  (**(code **)(*local_8[0] + 0x34))(local_8[0],param_1 + 0x4c,0x1c);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44d);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44f);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x453);
  SendMessageA(pHVar3,0x703,0,param_1 + 0x58);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59f);
  uVar1 = *(ushort *)(param_1 + 0x4c);
  LVar5 = SendMessageA(pHVar3,0x146,0,0);
  wParam = 0;
  if (0 < LVar5) {
    do {
      uVar6 = SendMessageA(pHVar3,0x150,wParam,0);
      if (uVar1 == uVar6) goto LAB_0045a05b;
      wParam = wParam + 1;
    } while ((int)wParam < LVar5);
  }
  wParam = 0xffffffff;
LAB_0045a05b:
  SendMessageA(pHVar3,0x14e,wParam,0);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x5a0,"%1.3f",(double)*(float *)(param_1 + 0x50));
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x537,"%1.3f",(double)*(float *)(param_1 + 0x54));
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return;
}


