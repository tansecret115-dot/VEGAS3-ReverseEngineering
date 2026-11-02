/* Module: wmfplug2.dll
   Function: FUN_00412390
   Address: 00412390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00412390(void *this,HWND param_1)

{
  int iVar1;
  int *piVar2;
  HWND pHVar3;
  LPCWSTR pWVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  uchar local_400 [1023];
  undefined1 local_1;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  if (*(int *)(iVar1 + 0x78) != 0) {
    piVar2 = FUN_00412200(*(int **)(iVar1 + 0x74),*(int *)(iVar1 + 0x78),1);
    if (piVar2 != (int *)0x0) {
      pWVar4 = (LPCWSTR)(piVar2 + 3);
      if ((pWVar4 == (LPCWSTR)0x0) || (*pWVar4 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar4,-1,(LPSTR)local_400,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x400) {
        local_400[0] = '\0';
      }
      local_1 = 0;
      FUN_00427530(param_1,0x78cd,local_400);
      LVar7 = 0;
      WVar6 = 0x104;
      UVar5 = 0xc5;
      pHVar3 = GetDlgItem(param_1,0x78cd);
      SendMessageA(pHVar3,UVar5,WVar6,LVar7);
      pWVar4 = (LPCWSTR)(piVar2 + 0x85);
      if ((pWVar4 == (LPCWSTR)0x0) || (*pWVar4 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar4,-1,(LPSTR)local_400,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x400) {
        local_400[0] = '\0';
      }
      local_1 = 0;
      FUN_00427530(param_1,0x78cc,local_400);
      LVar7 = 0;
      WVar6 = 0x104;
      UVar5 = 0xc5;
      pHVar3 = GetDlgItem(param_1,0x78cc);
      SendMessageA(pHVar3,UVar5,WVar6,LVar7);
      pWVar4 = (LPCWSTR)(piVar2 + 0x107);
      if ((pWVar4 == (LPCWSTR)0x0) || (*pWVar4 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar4,-1,(LPSTR)local_400,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x400) {
        local_400[0] = '\0';
      }
      local_1 = 0;
      FUN_00427530(param_1,0x78cf,local_400);
      LVar7 = 0;
      WVar6 = 0x104;
      UVar5 = 0xc5;
      pHVar3 = GetDlgItem(param_1,0x78cf);
      SendMessageA(pHVar3,UVar5,WVar6,LVar7);
      pWVar4 = (LPCWSTR)(piVar2 + 0x189);
      if ((pWVar4 == (LPCWSTR)0x0) || (*pWVar4 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar4,-1,(LPSTR)local_400,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x400) {
        local_400[0] = '\0';
      }
      local_1 = 0;
      FUN_00427530(param_1,0x78ce,local_400);
      LVar7 = 0;
      WVar6 = 0x104;
      UVar5 = 0xc5;
      pHVar3 = GetDlgItem(param_1,0x78ce);
      SendMessageA(pHVar3,UVar5,WVar6,LVar7);
      pWVar4 = (LPCWSTR)(piVar2 + 0x20b);
      if ((pWVar4 == (LPCWSTR)0x0) || (*pWVar4 != L'\0')) {
        WideCharToMultiByte(0,0,pWVar4,-1,(LPSTR)local_400,0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x400) {
        local_400[0] = '\0';
      }
      local_1 = 0;
      FUN_00427530(param_1,0x78d0,local_400);
      LVar7 = 0;
      WVar6 = 0x104;
      UVar5 = 0xc5;
      pHVar3 = GetDlgItem(param_1,0x78d0);
      SendMessageA(pHVar3,UVar5,WVar6,LVar7);
      return 0;
    }
  }
  FUN_00427530(param_1,0x78cd,"");
  FUN_00427530(param_1,0x78cc,"");
  FUN_00427530(param_1,0x78cf,"");
  FUN_00427530(param_1,0x78ce,"");
  FUN_00427530(param_1,0x78d0,"");
  LVar7 = 0;
  WVar6 = 0x104;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x78cd);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 0x104;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x78cc);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 0x104;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x78cf);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 0x104;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x78d0);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 0x104;
  UVar5 = 0xc5;
  pHVar3 = GetDlgItem(param_1,0x78d0);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  return 0;
}


