/* Module: vidpcore.dll
   Function: FUN_5de86570
   Address: 5de86570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de86570(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  LPARAM LVar3;
  int *unaff_ESI;
  int *local_108 [66];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c00,local_108);
  }
  (**(code **)(*local_108[0] + 0x34))(local_108[0],(float *)(param_1 + 0x50),0x10);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df2adf4,(double)*(float *)(param_1 + 0x50));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x536);
  FUN_5deb6a10(pHVar2);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x58));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x537);
  FUN_5deb6a10(pHVar2);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x473);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x475);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


