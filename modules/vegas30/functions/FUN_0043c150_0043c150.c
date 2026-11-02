/* Module: vegas30.exe
   Function: FUN_0043c150
   Address: 0043c150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043c150(void)

{
  LPWSTR lpWideCharStr;
  undefined4 *puVar1;
  int iVar2;
  LPCSTR lpMultiByteStr;
  int iVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  code *pcVar6;
  int iStack00000004;
  undefined1 *in_stack_00000010;
  undefined **in_stack_00000014;
  undefined1 *in_stack_00000018;
  undefined1 *in_stack_0000001c;
  undefined **in_stack_00000020;
  undefined1 *in_stack_00000024;
  undefined1 *in_stack_00000028;
  undefined **in_stack_0000002c;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000034;
  undefined **in_stack_00000038;
  undefined1 *in_stack_0000003c;
  undefined1 *in_stack_00000040;
  undefined **in_stack_00000044;
  undefined1 *in_stack_00000048;
  undefined1 *in_stack_0000004c;
  undefined **in_stack_00000050;
  undefined1 *in_stack_00000054;
  int *in_stack_00001710;
  
  FUN_0060ac30();
  iVar2 = -0x7fffbffb;
  if (in_stack_00001710 == (int *)0x0) {
    return iVar2;
  }
  iStack00000004 = 0;
  if (0 < DAT_0063dd5c) {
    in_stack_00000010 = &stack0x00000adc;
    in_stack_00000018 = &stack0x00000aa8;
    in_stack_0000001c = &stack0x00001504;
    in_stack_00000024 = &stack0x00000aac;
    in_stack_00000028 = &stack0x00000eec;
    in_stack_00000030 = &stack0x00000ab0;
    in_stack_00000034 = &stack0x000012fc;
    in_stack_0000003c = &stack0x00000ab4;
    in_stack_00000040 = &stack0x00000ce4;
    in_stack_00000048 = &stack0x00000ab8;
    in_stack_0000004c = &stack0x000010f4;
    in_stack_00000054 = &stack0x00000abc;
    ppuVar5 = &PTR_s_Vegas_Video_0063dcf4;
    do {
      pcVar6 = lstrlenA_exref;
      puVar4 = (undefined4 *)&stack0x00000058;
      for (iVar2 = 0x2a1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      lstrlenA(ppuVar5[-1]);
      MultiByteToWideChar(0,1,ppuVar5[-1],-1,(LPWSTR)&stack0x00000058,0x104);
      lstrlenA(*ppuVar5);
      MultiByteToWideChar(0,1,*ppuVar5,-1,(LPWSTR)&stack0x00000260,0x104);
      lstrlenA(ppuVar5[4]);
      MultiByteToWideChar(0,1,ppuVar5[4],-1,(LPWSTR)&stack0x0000047c,0x104);
      in_stack_00000014 = ppuVar5 + 0xb;
      in_stack_00000020 = ppuVar5 + 0xc;
      in_stack_0000002c = ppuVar5 + 0xd;
      in_stack_00000038 = ppuVar5 + 0xe;
      in_stack_00000044 = ppuVar5 + 0xf;
      in_stack_00000050 = ppuVar5 + 0x10;
      puVar4 = &stack0x00000010;
      iVar2 = 6;
      do {
        if (*(int *)puVar4[1] != 0) {
          lpMultiByteStr = (LPCSTR)_SfGetString_8();
          iVar3 = (*pcVar6)();
          if (iVar3 != 0) {
            lpWideCharStr = (LPWSTR)*puVar4;
            MultiByteToWideChar(0,1,lpMultiByteStr,-1,lpWideCharStr,0x104);
            puVar1 = (undefined4 *)puVar4[2];
            lpWideCharStr[0x103] = L'\0';
            *puVar1 = lpWideCharStr;
            pcVar6 = lstrlenA_exref;
          }
        }
        puVar4 = puVar4 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar2 = (**(code **)(*in_stack_00001710 + 0x14))();
      if (iVar2 < 0) {
        return iVar2;
      }
      iStack00000004 = iStack00000004 + 1;
      ppuVar5 = ppuVar5 + 0x1b;
    } while (iStack00000004 < DAT_0063dd5c);
  }
  return iVar2;
}


