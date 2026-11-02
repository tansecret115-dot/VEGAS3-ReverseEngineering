/* Module: mcplug.dll
   Function: FUN_004164d0
   Address: 004164d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004164d0(int param_1,undefined1 *param_2,undefined **param_3,undefined1 *param_4,
                undefined1 *param_5,undefined **param_6,undefined1 *param_7,undefined1 *param_8,
                undefined **param_9,undefined1 *param_10,undefined1 *param_11,undefined **param_12,
                undefined1 *param_13,undefined1 *param_14,undefined **param_15,undefined1 *param_16,
                undefined1 *param_17,undefined **param_18,undefined1 *param_19)

{
  LPCSTR lpString;
  LPWSTR lpWideCharStr;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 **ppuVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *in_stack_0000180c;
  int in_stack_00001810;
  
  FUN_004735c0();
  if (in_stack_0000180c == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = FUN_00416790(in_stack_00001810);
  param_1 = 0;
  if (0 < DAT_00486770) {
    piVar3 = &DAT_004866ec;
    while (*piVar3 != iVar1) {
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 0x12;
      if (DAT_00486770 <= param_1) {
        return -0x7fffbffb;
      }
    }
    if (param_1 < DAT_00486770) {
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
      ppuVar5 = &PTR_s_MainConcept_MPEG_1_Plug_In_004866e4 + param_1 * 0x12;
      while( true ) {
        pcVar7 = lstrlenA_exref;
        lpString = ppuVar5[-1];
        puVar6 = (undefined4 *)&stack0x00000154;
        for (iVar1 = 0x2a1; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        lstrlenA(lpString);
        MultiByteToWideChar(0,1,ppuVar5[-1],-1,(LPWSTR)&stack0x00000154,0x104);
        lstrlenA(*ppuVar5);
        MultiByteToWideChar(0,1,*ppuVar5,-1,(LPWSTR)&stack0x0000035c,0x104);
        param_3 = ppuVar5 + 4;
        param_6 = ppuVar5 + 5;
        param_9 = ppuVar5 + 6;
        param_12 = ppuVar5 + 7;
        param_15 = ppuVar5 + 8;
        param_18 = ppuVar5 + 9;
        ppuVar4 = &param_2;
        iVar1 = 6;
        do {
          if (*(uint *)ppuVar4[1] != 0) {
            FUN_00418fa0(DAT_00487a6c,*(uint *)ppuVar4[1],&stack0x00000050,0x104);
            iVar2 = (*pcVar7)();
            if (iVar2 != 0) {
              lpWideCharStr = (LPWSTR)*ppuVar4;
              MultiByteToWideChar(0,1,&stack0x00000050,-1,lpWideCharStr,0x104);
              puVar6 = (undefined4 *)ppuVar4[2];
              lpWideCharStr[0x103] = L'\0';
              *puVar6 = lpWideCharStr;
              pcVar7 = lstrlenA_exref;
            }
          }
          ppuVar4 = ppuVar4 + 3;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = (**(code **)(*in_stack_0000180c + 0x14))();
        if (iVar1 < 0) break;
        param_1 = param_1 + 1;
        ppuVar5 = ppuVar5 + 0x12;
        if (DAT_00486770 <= param_1) {
          return iVar1;
        }
      }
      return iVar1;
    }
  }
  return -0x7fffbffb;
}


