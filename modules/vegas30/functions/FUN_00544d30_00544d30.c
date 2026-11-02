/* Module: vegas30.exe
   Function: FUN_00544d30
   Address: 00544d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00544e0b) */

void __fastcall FUN_00544d30(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  LPARAM lParam;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_20 [8];
  
  piVar4 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  lVar5 = ftol();
  lVar6 = ftol();
  uVar7 = ftol();
  iVar3 = FUN_004294e0(lVar5);
  while (iVar3 != 0) {
    FUN_005463e0(uVar7,1);
    PostMessageA(*(HWND *)(param_1 + 8),0x666,0,(LPARAM)lVar5);
    lVar2 = lVar5 + 1;
    lVar5 = lVar5 + 1;
    if ((lVar6 <= lVar5) || (FUN_005448c0(local_20), local_20[0] != 0)) break;
    uVar7 = ftol();
    iVar3 = FUN_004294e0(lVar2);
  }
  iVar3 = (int)((ulonglong)lVar5 >> 0x20);
  lParam = (int)lVar5 + -1;
  uVar1 = (uint)((int)lVar5 == 0);
  if (((int)(iVar3 - uVar1) < 0) || ((iVar3 <= (int)uVar1 && (lParam == 0)))) {
    lParam = 0;
  }
  PostMessageA(*(HWND *)(param_1 + 8),0x666,1,lParam);
  return;
}


