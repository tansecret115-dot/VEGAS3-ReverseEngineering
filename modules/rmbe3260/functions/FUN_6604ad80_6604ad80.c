/* Module: rmbe3260.dll
   Function: FUN_6604ad80
   Address: 6604ad80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6604ad80(char *param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  FARPROC pFVar3;
  undefined *this_00;
  undefined4 uVar4;
  ushort uVar5;
  
  if ((*(int *)(param_1 + 0x208) != 0) && (*(int *)(*(int *)(param_1 + 0x208) + 0xc) != 0)) {
    return 0;
  }
  param_1[0x20c] = '\0';
  param_1[0x20d] = '\0';
  param_1[0x20e] = '\0';
  param_1[0x20f] = '\0';
  if (*(int *)(param_1 + 0x21d) == 0) {
    puVar1 = operator_new(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      this = (void *)0x0;
    }
    else {
      this = (void *)FUN_660516d0(puVar1);
    }
    *(void **)(param_1 + 0x208) = this;
    if (this != (void *)0x0) {
      iVar2 = FUN_66051780(this,param_1,2);
      if (iVar2 == 0) {
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAOpenCodec2_6606e8f8);
        *(FARPROC *)(param_1 + 0x22b) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RACloseCodec_6606e908);
        *(FARPROC *)(param_1 + 0x22f) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RASetPwd_6606e8e8);
        *(FARPROC *)(param_1 + 0x233) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAGetNumberOfFlavors2_6606e8a8);
        *(FARPROC *)(param_1 + 0x237) = pFVar3;
        if (pFVar3 == (FARPROC)0x0) {
          pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAGetNumberOfFlavors_6606e890);
          *(FARPROC *)(param_1 + 0x237) = pFVar3;
        }
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAGetFlavorProperty_6606e8c0);
        *(FARPROC *)(param_1 + 0x23b) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RASetFlavor_6606e8d8);
        *(FARPROC *)(param_1 + 0x23f) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAInitEncoder_6606e860);
        *(FARPROC *)(param_1 + 0x243) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAEncode_6606e870);
        *(FARPROC *)(param_1 + 0x247) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAFreeEncoder_6606e880);
        *(FARPROC *)(param_1 + 0x24b) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAInitDecoder_6606e828);
        *(FARPROC *)(param_1 + 0x24f) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RADecode_6606e838);
        *(FARPROC *)(param_1 + 0x253) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAFlush_6606e848);
        *(FARPROC *)(param_1 + 599) = pFVar3;
        pFVar3 = FUN_66051940(*(void **)(param_1 + 0x208),s_RAFreeDecoder_6606e850);
        *(FARPROC *)(param_1 + 0x25b) = pFVar3;
        goto LAB_6604af2d;
      }
    }
    param_1[0x20c] = '\x01';
    param_1[0x20d] = '\x02';
    param_1[0x20e] = '\x04';
    param_1[0x20f] = -0x80;
  }
LAB_6604af2d:
  if (*(int *)(param_1 + 0x20c) == 0) {
    if (*(int *)(param_1 + 0x22b) != 0) {
      uVar5 = 2;
      this_00 = FUN_6602dab0();
      iVar2 = FUN_66052f60(this_00,uVar5);
      uVar4 = (**(code **)(param_1 + 0x22b))(param_1 + 0x227,iVar2);
      *(undefined4 *)(param_1 + 0x20c) = uVar4;
      return uVar4;
    }
    param_1[0x20c] = '\x05';
    param_1[0x20d] = '@';
    param_1[0x20e] = '\0';
    param_1[0x20f] = -0x80;
  }
  return *(undefined4 *)(param_1 + 0x20c);
}


