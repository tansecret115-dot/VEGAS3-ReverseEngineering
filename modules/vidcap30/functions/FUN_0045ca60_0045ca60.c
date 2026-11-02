/* Module: vidcap30.exe
   Function: FUN_0045ca60
   Address: 0045ca60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0045ca60(int param_1,HWND param_2,int param_3)

{
  int *piVar1;
  LRESULT LVar2;
  int iVar3;
  WPARAM *pWVar4;
  int iVar5;
  undefined4 local_58;
  WPARAM local_50 [5];
  int *local_3c;
  int local_38;
  undefined4 local_34;
  undefined1 local_28 [12];
  int local_1c;
  undefined4 local_18;
  
  local_58 = 1;
  SendMessageA(param_2,0x1009,0,0);
  pWVar4 = local_50;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pWVar4 = 0;
    pWVar4 = pWVar4 + 1;
  }
  local_50[0] = 3;
  local_34 = 0x13;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar5 = 0;
  iVar3 = **(int **)(param_1 + 0x1c);
  if (0 < iVar3) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + iVar5 * 4);
      local_3c = piVar1 + 1;
      local_38 = lstrlenA((LPCSTR)local_3c);
      LVar2 = SendMessageA(param_2,0x1007,0,(LPARAM)local_50);
      if (LVar2 == -1) {
        local_58 = 0;
      }
      else {
        FUN_0045cb80(param_2,local_50[1],local_3c);
        local_18 = 0xf000;
        local_1c = ((*piVar1 != 0) + 1) * 0x1000;
        SendMessageA(param_2,0x102b,local_50[1],(LPARAM)local_28);
        local_50[1] = local_50[1] + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x24);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return local_58;
}


