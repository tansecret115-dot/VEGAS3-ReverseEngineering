/* Module: sfnetmedia.dll
   Function: FUN_0041fe80
   Address: 0041fe80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fe80(HWND param_1,int *param_2,LPCSTR param_3)

{
  int iVar1;
  BYTE *pBVar2;
  char cVar3;
  SHFILEINFOA local_368 [2];
  HWND pHStack_c;
  
  if (param_2 == (int *)0x0) {
    if (*param_3 != '\0') {
      SHGetFileInfoA(param_3,0,local_368,0x160,0x400);
      if (local_368[0].szTypeName[0] != '\0') {
        pBVar2 = FUN_00419120(DAT_00441d60,0x1145);
        FUN_00417320(param_1,pBVar2);
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x10))();
    cVar3 = (char)param_2;
    if (-1 < iVar1) {
      if ((&stack0x00000000 == (undefined1 *)0x218) || (local_368[0].szTypeName._64_2_ != 0)) {
        WideCharToMultiByte(0,0,(LPCWSTR)(local_368[0].szTypeName + 0x40),-1,&stack0xfffffc88,0x104,
                            (LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x378) {
        cVar3 = '\0';
      }
      local_368[0].szDisplayName[0xe7] = '\0';
      if (cVar3 != '\0') {
        pBVar2 = FUN_00419120(DAT_00441d60,0x1145);
        FUN_00417320(pHStack_c,pBVar2);
        return;
      }
    }
  }
  return;
}


