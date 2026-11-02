/* Module: erv33260.dll
   Function: FUN_67078320
   Address: 67078320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67078320(int param_1)

{
  UINT UVar1;
  int iVar2;
  char local_2c [4];
  char local_28 [4];
  char local_24 [2];
  char local_22;
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  char local_10 [2];
  char local_e;
  undefined4 local_c;
  undefined2 local_8;
  
  local_2c = (char  [4])s_EncoderCPU_6709a47c._0_4_;
  local_28 = (char  [4])s_EncoderCPU_6709a47c._4_4_;
  local_24 = (char  [2])s_EncoderCPU_6709a47c._8_2_;
  local_22 = s_EncoderCPU_6709a47c[10];
  local_14 = (char  [4])s_UseINI_6709a474._0_4_;
  local_10 = (char  [2])s_UseINI_6709a474._4_2_;
  local_e = s_UseINI_6709a474[6];
  local_c = DAT_6709a46c;
  local_8 = DAT_6709a470;
  local_20 = (char  [4])s_SliceMode_6709a460._0_4_;
  iVar2 = *(int *)(param_1 + 4);
  local_1c = (char  [4])s_SliceMode_6709a460._4_4_;
  local_18._0_2_ = s_SliceMode_6709a460._8_2_;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(char *)(iVar2 + 0x18) == '\0') {
        *(undefined4 *)(param_1 + 0x78) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x78) = 3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 5;
  }
  UVar1 = GetPrivateProfileIntA
                    (s_Encode_6709a458,local_14,*(INT *)(param_1 + 0x2a4),s_tromtest_ini_6709a730);
  if (UVar1 == 1) {
    *(undefined4 *)(param_1 + 0x2a4) = 1;
    UVar1 = GetPrivateProfileIntA(s_Encode_6709a458,local_2c,0xffff,s_tromtest_ini_6709a730);
    if (UVar1 != 0xffff) {
      iVar2 = FUN_6707d280(UVar1);
      if (iVar2 == 2) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x78) = iVar2;
    }
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6709a458,(LPCSTR)&local_c,*(INT *)(param_1 + 0x104),
                       s_tromtest_ini_6709a730);
    if (UVar1 == *(UINT *)(param_1 + 0x104)) {
      *(undefined4 *)(param_1 + 0x2a8) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x2a8) = 1;
      *(UINT *)(param_1 + 0x104) = UVar1 & 0xff;
    }
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6709a458,local_20,*(INT *)(param_1 + 0xec),s_tromtest_ini_6709a730);
    *(uint *)(param_1 + 0xec) = (uint)(UVar1 == 1);
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6709a458,s_CPUScalability_6709a447 + 1,999,s_tromtest_ini_6709a730);
    *(uint *)(param_1 + 0x2ac) = (uint)(UVar1 != 999);
    if ((UVar1 != 999) != 0) {
      *(UINT *)(param_1 + 0x2b0) = UVar1;
    }
  }
  return;
}


