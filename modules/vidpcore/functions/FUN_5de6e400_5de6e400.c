/* Module: vidpcore.dll
   Function: FUN_5de6e400
   Address: 5de6e400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de6e400(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  LPARAM LVar4;
  uint uVar5;
  int *unaff_ESI;
  UINT UVar6;
  undefined1 *puVar7;
  int *local_108 [66];
  
  puVar2 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_5df17ad0,local_108);
  }
  piVar1 = (int *)(param_1 + 0x50);
  (**(code **)(*local_108[0] + 0x34))(local_108[0],piVar1,0x10);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x404);
  LVar4 = ftol();
  SendMessageA(pHVar3,0x610,1,LVar4);
  LVar4 = 0;
  uVar5 = (uint)(*piVar1 == 0);
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x401);
  SendMessageA(pHVar3,UVar6,uVar5,LVar4);
  uVar5 = (uint)(*piVar1 == 1);
  LVar4 = 0;
  UVar6 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x402);
  SendMessageA(pHVar3,UVar6,uVar5,LVar4);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1fa78,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c));
  puVar7 = &stack0xfffffef0;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x52b);
  FUN_5deb6a10(pHVar3,puVar7);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


