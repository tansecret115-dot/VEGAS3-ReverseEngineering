/* Module: rmto3260.dll
   Function: FUN_662fe860
   Address: 662fe860
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_662fe860(char *param_1)

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
      this = (void *)FUN_662f2c60(puVar1);
    }
    *(void **)(param_1 + 0x208) = this;
    if (this != (void *)0x0) {
      iVar2 = FUN_662f2ce0(this,param_1,2);
      if (iVar2 == 0) {
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAOpenCodec2_66311858);
        *(FARPROC *)(param_1 + 0x22b) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RACloseCodec_66311868);
        *(FARPROC *)(param_1 + 0x22f) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RASetPwd_66311848);
        *(FARPROC *)(param_1 + 0x233) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAGetNumberOfFlavors2_66311808);
        *(FARPROC *)(param_1 + 0x237) = pFVar3;
        if (pFVar3 == (FARPROC)0x0) {
          pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAGetNumberOfFlavors_663117f0);
          *(FARPROC *)(param_1 + 0x237) = pFVar3;
        }
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAGetFlavorProperty_66311820);
        *(FARPROC *)(param_1 + 0x23b) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RASetFlavor_66311838);
        *(FARPROC *)(param_1 + 0x23f) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAInitEncoder_663117c0);
        *(FARPROC *)(param_1 + 0x243) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAEncode_663117d0);
        *(FARPROC *)(param_1 + 0x247) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAFreeEncoder_663117e0);
        *(FARPROC *)(param_1 + 0x24b) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAInitDecoder_66311788);
        *(FARPROC *)(param_1 + 0x24f) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RADecode_66311798);
        *(FARPROC *)(param_1 + 0x253) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAFlush_663117a8);
        *(FARPROC *)(param_1 + 599) = pFVar3;
        pFVar3 = FUN_662f2ea0(*(void **)(param_1 + 0x208),s_RAFreeDecoder_663117b0);
        *(FARPROC *)(param_1 + 0x25b) = pFVar3;
        goto LAB_662fea0d;
      }
    }
    param_1[0x20c] = '\x01';
    param_1[0x20d] = '\x02';
    param_1[0x20e] = '\x04';
    param_1[0x20f] = -0x80;
  }
LAB_662fea0d:
  if (*(int *)(param_1 + 0x20c) == 0) {
    if (*(int *)(param_1 + 0x22b) != 0) {
      uVar5 = 2;
      this_00 = FUN_662d08a0();
      iVar2 = FUN_662f3ca0(this_00,uVar5);
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


