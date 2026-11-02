/* Module: mcplug.dll
   Function: FUN_00402480
   Address: 00402480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00402480(int param_1,LPWSTR param_2,int param_3,LPWSTR param_4,int param_5,wchar_t *param_6,
            int param_7)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  
  if (param_2 != (LPWSTR)0x0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      pcVar2 = FUN_00419470(DAT_00487a6c,0x1a6);
    }
    else if (iVar1 == 1) {
      pcVar2 = "Open MPEG-1";
    }
    else {
      if (iVar1 != 2) goto LAB_004024eb;
      pcVar2 = "Open MPEG-2";
    }
    MultiByteToWideChar(0,1,pcVar2,-1,param_2,param_3);
    param_2[param_3 + -1] = L'\0';
  }
LAB_004024eb:
  if (param_4 != (LPWSTR)0x0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      pcVar2 = FUN_00419470(DAT_00487a6c,0x1a5);
    }
    else if (iVar1 == 1) {
      pcVar2 = "*.mpg;*.mpeg;*.m1a;*.mp1;*.mp2";
    }
    else {
      if (iVar1 != 2) goto LAB_00402549;
      pcVar2 = "*.mpg;*.mpeg;*.m2a;*.mp1;*.mp2";
    }
    MultiByteToWideChar(0,1,pcVar2,-1,param_4,param_5);
    param_4[param_5 + -1] = L'\0';
  }
LAB_00402549:
  if (param_6 == (wchar_t *)0x0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    pcVar2 = FUN_00419470(DAT_00487a6c,0x19e);
  }
  else if (iVar1 == 1) {
    pcVar2 = "MainConcept MPEG-1";
  }
  else {
    if (iVar1 != 2) goto LAB_004025a0;
    pcVar2 = "MainConcept MPEG-2";
  }
  MultiByteToWideChar(0,1,pcVar2,-1,param_6,param_7);
  param_6[param_7 + -1] = L'\0';
LAB_004025a0:
  sVar3 = wcslen(param_6);
  wcsncat(param_6,L"",(param_7 - sVar3) - 1);
  return 0;
}


