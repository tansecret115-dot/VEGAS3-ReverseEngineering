/* Module: vidpcore.dll
   Function: FUN_5de83720
   Address: 5de83720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de83720(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM lParam;
  int *unaff_ESI;
  int *local_108 [66];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_108[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17be0,local_108);
  }
  (**(code **)(*local_108[0] + 0x34))(local_108[0],(float *)(param_1 + 0x4c),4);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x464);
  lParam = ftol();
  SendMessageA(pHVar2,0x610,1,lParam);
  FUN_5deb5050(&stack0xfffffef0,&DAT_5df1fa78,(double)*(float *)(param_1 + 0x4c));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x465);
  FUN_5deb6a10(pHVar2);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


