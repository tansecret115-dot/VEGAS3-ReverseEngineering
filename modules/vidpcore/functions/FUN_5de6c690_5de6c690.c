/* Module: vidpcore.dll
   Function: FUN_5de6c690
   Address: 5de6c690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de6c690(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  HWND hWnd_00;
  LPARAM LVar3;
  int *unaff_ESI;
  int **ppiVar4;
  int *local_110 [68];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_110[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17ac0,local_110);
  }
  (**(code **)(*local_110[0] + 0x34))(local_110[0],(undefined4 *)(param_1 + 0x50),0x18);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f9);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f8);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x526);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd_00,0x610,1,LVar3);
  FUN_5deb5050(local_110,&DAT_5df1fa78,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  ppiVar4 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3fc);
  FUN_5deb6a10(pHVar2,ppiVar4);
  FUN_5deb5050(local_110,&DAT_5df1fa78,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c));
  ppiVar4 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3fd);
  FUN_5deb6a10(pHVar2,ppiVar4);
  FUN_5deb5050(local_110,&DAT_5df1fa78,*(undefined4 *)(param_1 + 0x60),
               *(undefined4 *)(param_1 + 100));
  ppiVar4 = local_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x527);
  FUN_5deb6a10(pHVar2,ppiVar4);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


