/* Module: vegas30.exe
   Function: FUN_0054d670
   Address: 0054d670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d670(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  tagPOINT local_10 [2];
  
  piVar2 = (int *)FUN_0054a530(param_1);
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, (*(byte *)(iVar1 + 0x134) & 0x20) == 0)) {
    piVar2 = *(int **)(iVar1 + 0x130);
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      piVar2 = (int *)piVar2[2];
      while (*(int *)(*piVar2 + 4) != 3) {
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
        if (iVar4 <= iVar3) {
          return;
        }
      }
      SendMessageA(*(HWND *)(param_1 + 0x90),0x433,0xfdf0,(LPARAM)local_10);
      MapWindowPoints(*(HWND *)(param_1 + 0x90),(HWND)0x0,local_10,2);
      SendMessageA(*(HWND *)(param_1 + 0x90),0x402,0xfdf0,1);
      local_18 = *(undefined4 *)(iVar1 + 0x13c);
      local_14 = 0;
      local_20 = 6;
      local_1c = iVar1;
      FUN_0044e590(&local_20,param_2,local_10);
      SendMessageA(*(HWND *)(param_1 + 0x90),0x402,0xfdf0,0);
      FUN_0054d0c0(param_1);
      *(uint *)(iVar1 + 0x134) = *(uint *)(iVar1 + 0x134) | 0x10;
      DAT_0064767c = DAT_0064767c | 0x100;
    }
  }
  return;
}


