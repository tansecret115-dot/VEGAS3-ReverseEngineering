/* Module: vegas30.exe
   Function: FUN_005b9af0
   Address: 005b9af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b9af0(int param_1)

{
  uchar *_Dest;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0xc30) = DAT_00647e54;
  iVar1 = **(int **)(param_1 + 0xc34);
  if (0 < iVar1) {
    do {
      iVar3 = FUN_005b9fc0(param_1,iVar4,1);
      FUN_005b98e0(iVar3 + 0x30);
      FUN_005ba030(param_1,iVar3,1,iVar4 == 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_005d30f0(param_1 + 0x6c0);
  uVar2 = DAT_006484fc;
  *(undefined4 *)(param_1 + 0xc58) = 0;
  *(undefined4 *)(param_1 + 0xc28) = uVar2;
  *(undefined4 *)(param_1 + 0x458) = DAT_006477e0;
  uVar2 = DAT_006477f4;
  *(undefined4 *)(param_1 + 0x468) = DAT_006477f0;
  *(undefined4 *)(param_1 + 0x46c) = uVar2;
  *(undefined4 *)(param_1 + 0x478) = DAT_006477f8;
  *(undefined4 *)(param_1 + 0x45c) = DAT_006477e4;
  uVar2 = DAT_006477ec;
  *(undefined4 *)(param_1 + 0x460) = DAT_006477e8;
  *(undefined4 *)(param_1 + 0x464) = uVar2;
  *(undefined4 *)(param_1 + 0x47c) = DAT_006477fc;
  _Dest = (uchar *)(param_1 + 0x480);
  *(undefined4 *)(param_1 + 0x470) = DAT_00647800;
  *(undefined4 *)(param_1 + 0x474) = DAT_00647804;
  _mbscpy(_Dest,&DAT_006486bc);
  _mbscpy(&DAT_006473f0,_Dest);
  _mbscpy(&DAT_006474f4,_Dest);
  _mbscpy((uchar *)(param_1 + 0x238),&DAT_00649e38);
  *(undefined4 *)(param_1 + 0xc48) = DAT_00649448;
  uVar2 = DAT_006477ec;
  *(undefined4 *)(param_1 + 0xc50) = DAT_006477e8;
  *(undefined4 *)(param_1 + 0xc54) = uVar2;
  param_1 = param_1 + 0x1bc;
  _SfSummary_SetItem_12(param_1,0x474e4549,&DAT_00647ec8);
  _SfSummary_SetItem_12(param_1,0x4d414e49,&DAT_00647f48);
  _SfSummary_SetItem_12(param_1,0x54524149,&DAT_00647fc8);
  _SfSummary_SetItem_12(param_1,0x504f4349,&DAT_00648048);
  _SfSummary_SetItem_12(param_1,0x544d4349,&DAT_006480c8);
  return 0;
}


