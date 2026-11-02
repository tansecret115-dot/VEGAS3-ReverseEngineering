/* Module: erv23260.dll
   Function: FUN_63806080
   Address: 63806080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63806080(int param_1)

{
  UINT UVar1;
  int iVar2;
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  char local_70 [4];
  char local_6c;
  char local_68 [4];
  char local_64 [4];
  char local_60 [4];
  char local_5c [4];
  char local_58 [4];
  char local_54 [4];
  char local_50 [4];
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  char local_40 [4];
  char local_3c [4];
  char local_38 [4];
  char local_34 [2];
  char local_32;
  char local_30 [4];
  char local_2c [4];
  char local_28 [4];
  char local_24 [4];
  char local_20 [2];
  char local_1e;
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined1 local_6;
  
  local_c = DAT_63830008;
  local_8 = DAT_63830004;
  local_6 = DAT_63830006;
  local_3c = (char  [4])s_EncoderCPU_6382fff8._0_4_;
  local_38 = (char  [4])s_EncoderCPU_6382fff8._4_4_;
  local_34 = (char  [2])s_EncoderCPU_6382fff8._8_2_;
  local_32 = s_EncoderCPU_6382fff8[10];
  local_24 = (char  [4])s_UseINI_6382fff0._0_4_;
  local_20 = (char  [2])s_UseINI_6382fff0._4_2_;
  local_1e = s_UseINI_6382fff0[6];
  local_1c = DAT_6382ffe8;
  local_18 = DAT_6382ffec;
  local_7c = (char  [4])s_DeblockingFilter_6382ffd4._0_4_;
  local_78 = (char  [4])s_DeblockingFilter_6382ffd4._4_4_;
  local_74 = (char  [4])s_DeblockingFilter_6382ffd4._8_4_;
  local_70 = (char  [4])s_DeblockingFilter_6382ffd4._12_4_;
  local_6c = s_DeblockingFilter_6382ffd4[0x10];
  local_58 = (char  [4])s_AdvancedIntra_6382ffc4._0_4_;
  local_54 = (char  [4])s_AdvancedIntra_6382ffc4._4_4_;
  local_50 = (char  [4])s_AdvancedIntra_6382ffc4._8_4_;
  local_4c._0_2_ = s_AdvancedIntra_6382ffc4._12_2_;
  local_68 = (char  [4])s_ModifiedQuant_6382ffb4._0_4_;
  local_64 = (char  [4])s_ModifiedQuant_6382ffb4._4_4_;
  local_60 = (char  [4])s_ModifiedQuant_6382ffb4._8_4_;
  local_5c._0_2_ = s_ModifiedQuant_6382ffb4._12_2_;
  local_48 = (char  [4])s_AltInterVLC_6382ffa8._0_4_;
  local_44 = (char  [4])s_AltInterVLC_6382ffa8._4_4_;
  local_40 = (char  [4])s_AltInterVLC_6382ffa8._8_4_;
  local_30 = (char  [4])s_SliceMode_6382ff9c._0_4_;
  local_2c = (char  [4])s_SliceMode_6382ff9c._4_4_;
  local_28._0_2_ = s_SliceMode_6382ff9c._8_2_;
  iVar2 = *(int *)(param_1 + 4);
  local_14 = DAT_6382ff94;
  local_10 = DAT_6382ff98;
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(char *)(iVar2 + 0x18) != '\0') {
      *(undefined4 *)(param_1 + 0x78) = 3;
      goto LAB_638061f3;
    }
  }
  else if (*(char *)(iVar2 + 0x18) != '\0') {
    *(undefined4 *)(param_1 + 0x78) = 3;
    goto LAB_638061f3;
  }
  if (*(int *)(iVar2 + 0xc) < 5) {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
LAB_638061f3:
  UVar1 = GetPrivateProfileIntA
                    (s_Encode_6382ff8c,local_24,*(INT *)(param_1 + 0x82c),s_h263test_ini_638307c8);
  if (UVar1 == 1) {
    *(undefined4 *)(param_1 + 0x82c) = 1;
    UVar1 = GetPrivateProfileIntA(s_Encode_6382ff8c,local_3c,0xffff,s_h263test_ini_638307c8);
    if (UVar1 != 0xffff) {
      iVar2 = FUN_63817f10(UVar1);
      if (iVar2 == 2) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x78) = iVar2;
    }
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,(LPCSTR)&local_c,*(INT *)(param_1 + 0xec),
                       s_h263test_ini_638307c8);
    *(uint *)(param_1 + 0xec) = (uint)(UVar1 == 1);
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,(LPCSTR)&local_8,*(INT *)(param_1 + 0x80c),
                       s_h263test_ini_638307c8);
    *(uint *)(param_1 + 0x80c) = (uint)(UVar1 == 1);
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,(LPCSTR)&local_1c,*(INT *)(param_1 + 0x118),
                       s_h263test_ini_638307c8);
    if (UVar1 == *(UINT *)(param_1 + 0x118)) {
      *(undefined4 *)(param_1 + 0x830) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x830) = 1;
      *(UINT *)(param_1 + 0x118) = UVar1 & 0xff;
    }
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,local_7c,*(INT *)(param_1 + 0xf4),s_h263test_ini_638307c8);
    *(uint *)(param_1 + 0xf4) = (uint)(UVar1 == 1);
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,local_58,*(INT *)(param_1 + 0xf0),s_h263test_ini_638307c8);
    *(uint *)(param_1 + 0xf0) = (uint)(UVar1 == 1);
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,local_68,*(INT *)(param_1 + 0x100),s_h263test_ini_638307c8)
    ;
    *(uint *)(param_1 + 0x100) = (uint)(UVar1 == 1);
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,local_48,*(INT *)(param_1 + 0xfc),s_h263test_ini_638307c8);
    *(uint *)(param_1 + 0xfc) = (uint)(UVar1 == 1);
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,(LPCSTR)&local_14,*(INT *)(param_1 + 0x7dc),
                       s_h263test_ini_638307c8);
    if (UVar1 < 100) {
      *(UINT *)(param_1 + 0x7dc) = UVar1;
    }
    UVar1 = GetPrivateProfileIntA
                      (s_Encode_6382ff8c,local_30,*(INT *)(param_1 + 0xf8),s_h263test_ini_638307c8);
    *(uint *)(param_1 + 0xf8) = (uint)(UVar1 == 1);
  }
  return;
}


