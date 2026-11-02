/* Module: sftrans1.dll
   Function: FUN_0045ae40
   Address: 0045ae40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0045ae40(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM LVar3;
  uint wParam;
  int *unaff_ESI;
  UINT UVar4;
  WPARAM wParam_00;
  int *local_8 [2];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_8[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c40,local_8);
  }
  (**(code **)(*local_8[0] + 0x34))(local_8[0],(float *)(param_1 + 0x4c),0x20);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4ed);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4ef);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4f3);
  SendMessageA(pHVar2,0x703,0,param_1 + 0x58);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x473);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x536,"%1.3f",(double)*(float *)(param_1 + 0x4c));
  wParam = (uint)(*(int *)(param_1 + 0x68) == 0);
  LVar3 = 0;
  UVar4 = 0xf1;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x574);
  SendMessageA(pHVar2,UVar4,wParam,LVar3);
  wParam_00 = *(WPARAM *)(param_1 + 0x68);
  LVar3 = 0;
  UVar4 = 0xf1;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x575);
  SendMessageA(pHVar2,UVar4,wParam_00,LVar3);
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x5a1,"%1.3f",(double)*(float *)(param_1 + 0x50));
  FUN_004c85d0(*(undefined4 *)(param_1 + 0x30),0x5a2,"%1.3f",(double)*(float *)(param_1 + 0x54));
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


