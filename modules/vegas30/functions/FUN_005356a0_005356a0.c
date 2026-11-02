/* Module: vegas30.exe
   Function: FUN_005356a0
   Address: 005356a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005356a0(int *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int *unaff_ESI;
  undefined4 *puVar4;
  CHAR in_stack_000001f4;
  undefined4 *in_stack_00000314;
  int *in_stack_00000320;
  WCHAR WVar5;
  undefined1 *puVar6;
  
  FUN_0060ac30();
  iVar2 = FUN_005fb200();
  if (iVar2 < 0) {
    return iVar2;
  }
  puVar4 = (undefined4 *)&stack0x00000210;
  for (iVar2 = 0x28c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_005b87b0();
  FUN_005355b0();
  FUN_00429580();
  iVar2 = FUN_0052dfc0();
  if (iVar2 < 0) {
    return iVar2;
  }
  if (iVar2 == 0x4e001) {
    return 0x4e001;
  }
  iVar2 = FUN_00530c90();
  if (iVar2 == 0) {
    if (in_stack_00000320 != (int *)0x0) {
      puVar6 = (undefined1 *)register0x00000010;
      iVar2 = (**(code **)*in_stack_00000320)();
      WVar5 = (WCHAR)puVar6;
      if (iVar2 == 0) {
        MultiByteToWideChar(0,1,&stack0x00000204,-1,(LPWSTR)&stack0xfffffffc,0x104);
        InterlockedIncrement(&DAT_0065e144);
        iVar2 = (**(code **)(*unaff_ESI + 0xc))();
        InterlockedDecrement(&DAT_0065e144);
        if (-1 < iVar2) {
          if ((&stack0x00000000 == (undefined1 *)0x14) || (WVar5 != L'\0')) {
            WideCharToMultiByte(0,0,(LPCWSTR)&stack0xffffffec,-1,&stack0x000001f4,0x104,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0xfffffe0c) {
            in_stack_000001f4 = '\0';
          }
        }
        (**(code **)(*in_stack_00000320 + 8))();
      }
      else {
        iVar2 = (**(code **)*in_stack_00000314)();
        if (iVar2 != 0) goto LAB_005358ba;
        InterlockedIncrement(&DAT_0065e144);
        iVar2 = (**(code **)(*param_1 + 0xc))();
        InterlockedDecrement(&DAT_0065e144);
        (**(code **)(*unaff_ESI + 8))();
      }
      if (iVar2 != 0) goto LAB_0053589e;
    }
LAB_005358ba:
    if (DAT_00647624 != (HWND)0x0) {
      UpdateWindow(DAT_00647624);
    }
    iVar2 = FUN_004e4e90();
    if (iVar2 != 0) {
      FUN_004e4d30();
    }
    pcVar3 = (char *)FUN_005bad20();
    if (*pcVar3 != '\0') {
      puVar4 = *(undefined4 **)(pcVar3 + 8);
      bVar1 = *(byte *)(puVar4 + 6);
      while ((bVar1 & 2) != 2) {
        iVar2 = lstrcmpiA(&stack0x00000210,(LPCSTR)*puVar4);
        if (iVar2 == 0) break;
        if (iVar2 < 0) {
          puVar4 = (undefined4 *)puVar4[4];
        }
        else {
          puVar4 = (undefined4 *)puVar4[5];
        }
        bVar1 = *(byte *)(puVar4 + 6);
      }
      if ((*(byte *)(puVar4 + 6) & 2) != 2) {
        FUN_0052e040();
        return -0x7ffb1faf;
      }
    }
    puVar4 = (undefined4 *)&stack0x00000c40;
    for (iVar2 = 0x24c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar2 = FUN_00532af0();
    FUN_0052e040();
    if (-1 < iVar2) {
      iVar2 = FUN_00535250();
      return iVar2;
    }
    return iVar2;
  }
LAB_0053589e:
  FUN_0052e040();
  return iVar2;
}


