/* Module: vidcap30.exe
   Function: FUN_00461d70
   Address: 00461d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00461d70(void)

{
  LPWSTR lpWideCharStr;
  undefined4 *puVar1;
  int iVar2;
  LPCSTR lpMultiByteStr;
  int iVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iStack00000004;
  int *in_stack_0000170c;
  
  FUN_00579db0();
  iVar2 = -0x7fffbffb;
  if (in_stack_0000170c == (int *)0x0) {
    return iVar2;
  }
  iStack00000004 = 0;
  if (0 < DAT_005b6568) {
    ppuVar4 = &PTR_s_Video_Capture_005b646c;
    do {
      pcVar6 = lstrlenA_exref;
      puVar5 = (undefined4 *)&stack0x00000054;
      for (iVar2 = 0x2a1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      lstrlenA(ppuVar4[-1]);
      MultiByteToWideChar(0,1,ppuVar4[-1],-1,(LPWSTR)&stack0x00000054,0x104);
      lstrlenA(*ppuVar4);
      MultiByteToWideChar(0,1,*ppuVar4,-1,(LPWSTR)&stack0x0000025c,0x104);
      lstrlenA(ppuVar4[5]);
      MultiByteToWideChar(0,1,ppuVar4[5],-1,(LPWSTR)&stack0x00000478,0x104);
      lstrlenA(ppuVar4[6]);
      MultiByteToWideChar(0,1,ppuVar4[6],-1,(LPWSTR)&stack0x00000694,0x104);
      iVar2 = 6;
      puVar5 = (undefined4 *)register0x00000010;
      do {
        if (*(int *)puVar5[4] != 0) {
          lpMultiByteStr = (LPCSTR)_SfGetString_8();
          iVar3 = (*pcVar6)();
          if (iVar3 != 0) {
            lpWideCharStr = (LPWSTR)puVar5[3];
            MultiByteToWideChar(0,1,lpMultiByteStr,-1,lpWideCharStr,0x104);
            puVar1 = (undefined4 *)puVar5[5];
            lpWideCharStr[0x103] = L'\0';
            *puVar1 = lpWideCharStr;
            pcVar6 = lstrlenA_exref;
          }
        }
        iVar2 = iVar2 + -1;
        puVar5 = puVar5 + 3;
      } while (iVar2 != 0);
      iVar2 = (**(code **)(*in_stack_0000170c + 0x14))();
      if (iVar2 < 0) {
        return iVar2;
      }
      iStack00000004 = iStack00000004 + 1;
      ppuVar4 = ppuVar4 + 0x20;
    } while (iStack00000004 < DAT_005b6568);
  }
  return iVar2;
}


