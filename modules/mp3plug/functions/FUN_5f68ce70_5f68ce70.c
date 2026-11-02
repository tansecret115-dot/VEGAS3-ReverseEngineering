/* Module: mp3plug.dll
   Function: FUN_5f68ce70
   Address: 5f68ce70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f68ce70(int param_1,undefined1 *param_2,undefined **param_3,undefined1 *param_4,
                undefined1 *param_5,undefined **param_6,undefined1 *param_7,undefined1 *param_8,
                undefined **param_9,undefined1 *param_10,undefined1 *param_11,undefined **param_12,
                undefined1 *param_13,undefined1 *param_14,undefined **param_15,undefined1 *param_16,
                undefined1 *param_17,undefined **param_18,undefined1 *param_19)

{
  LPWSTR lpWideCharStr;
  int iVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *in_stack_0000180c;
  
  FUN_5f72a200();
  iVar1 = -0x7fffbffb;
  if (in_stack_0000180c == (int *)0x0) {
    return iVar1;
  }
  param_1 = 0;
  if (0 < DAT_5f73cc94) {
    param_2 = &stack0x00001600;
    param_4 = &stack0x00000ba4;
    param_5 = &stack0x00000bd8;
    param_7 = &stack0x00000ba8;
    param_8 = &stack0x00000fe8;
    param_10 = &stack0x00000bac;
    param_11 = &stack0x000013f8;
    param_13 = &stack0x00000bb0;
    param_14 = &stack0x00000de0;
    param_16 = &stack0x00000bb4;
    param_17 = &stack0x000011f0;
    param_19 = &stack0x00000bb8;
    ppuVar4 = &PTR_s_MP3_Plug_In_5f73cc54;
    do {
      pcVar6 = lstrlenA_exref;
      puVar5 = (undefined4 *)&stack0x00000154;
      for (iVar1 = 0x2a1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      lstrlenA(ppuVar4[-1]);
      MultiByteToWideChar(0,1,ppuVar4[-1],-1,(LPWSTR)&stack0x00000154,0x104);
      lstrlenA(*ppuVar4);
      MultiByteToWideChar(0,1,*ppuVar4,-1,(LPWSTR)&stack0x0000035c,0x104);
      param_3 = ppuVar4 + 3;
      param_6 = ppuVar4 + 4;
      param_9 = ppuVar4 + 5;
      param_12 = ppuVar4 + 6;
      param_15 = ppuVar4 + 7;
      param_18 = ppuVar4 + 8;
      ppuVar3 = &param_2;
      iVar1 = 6;
      do {
        if (*(uint *)ppuVar3[1] != 0) {
          FUN_5f69dd80(DAT_5f74d2f4,*(uint *)ppuVar3[1],&stack0x00000050,0x104);
          iVar2 = (*pcVar6)();
          if (iVar2 != 0) {
            lpWideCharStr = (LPWSTR)*ppuVar3;
            MultiByteToWideChar(0,1,&stack0x00000050,-1,lpWideCharStr,0x104);
            puVar5 = (undefined4 *)ppuVar3[2];
            lpWideCharStr[0x103] = L'\0';
            *puVar5 = lpWideCharStr;
            pcVar6 = lstrlenA_exref;
          }
        }
        ppuVar3 = ppuVar3 + 3;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar1 = (**(code **)(*in_stack_0000180c + 0x14))();
      if (iVar1 < 0) {
        return iVar1;
      }
      param_1 = param_1 + 1;
      ppuVar4 = ppuVar4 + 0x11;
    } while (param_1 < DAT_5f73cc94);
  }
  return iVar1;
}


