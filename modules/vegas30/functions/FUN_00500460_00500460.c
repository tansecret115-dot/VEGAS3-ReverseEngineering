/* Module: vegas30.exe
   Function: FUN_00500460
   Address: 00500460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00500460(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_005d30f0(param_1);
  uVar1 = DAT_006477e0;
  puVar3 = (undefined4 *)(param_1 + 0x570);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x570) = uVar1;
  uVar1 = DAT_006477f4;
  *(undefined4 *)(param_1 + 0x580) = DAT_006477f0;
  *(undefined4 *)(param_1 + 0x584) = uVar1;
  *(undefined4 *)(param_1 + 0x590) = DAT_006477f8;
  *(undefined4 *)(param_1 + 0x588) = DAT_00647800;
  *(undefined4 *)(param_1 + 0x58c) = DAT_00647804;
  *(undefined4 *)(param_1 + 0x574) = DAT_006477e4;
  uVar1 = DAT_006477ec;
  *(undefined4 *)(param_1 + 0x578) = DAT_006477e8;
  *(undefined4 *)(param_1 + 0x57c) = uVar1;
  *(undefined4 *)(param_1 + 0x594) = DAT_006477fc;
  _mbscpy((uchar *)(param_1 + 0x598),&DAT_006486bc);
  _mbscpy((uchar *)(param_1 + 0x6a0),&DAT_00649e38);
  iVar2 = param_1 + 0x564;
  _SfSummary_SetItem_12(iVar2,0x474e4549,&DAT_00647ec8);
  _SfSummary_SetItem_12(iVar2,0x4d414e49,&DAT_00647f48);
  _SfSummary_SetItem_12(iVar2,0x54524149,&DAT_00647fc8);
  _SfSummary_SetItem_12(iVar2,0x504f4349,&DAT_00648048);
  _SfSummary_SetItem_12(iVar2,0x544d4349,&DAT_006480c8);
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = DAT_00648614;
  *(undefined4 *)(param_1 + 0x7b8) = DAT_00648618;
  *(undefined4 *)(param_1 + 0x7bc) = DAT_00648624;
  uVar1 = DAT_0064862c;
  *(undefined4 *)(param_1 + 0x7c0) = DAT_00648628;
  *(undefined4 *)(param_1 + 0x7c4) = uVar1;
  *(undefined4 *)(param_1 + 0x7c8) = DAT_00648664;
  *(undefined4 *)(param_1 + 0x7cc) = DAT_0064866c;
  uVar1 = DAT_00648674;
  *(undefined4 *)(param_1 + 2000) = DAT_00648670;
  *(undefined4 *)(param_1 + 0x7d4) = uVar1;
  *(undefined4 *)(param_1 + 0x7d8) = DAT_00648678;
  uVar1 = DAT_006477ec;
  *(undefined4 *)(param_1 + 0x7e0) = DAT_006477e8;
  *(undefined4 *)(param_1 + 0x7e4) = uVar1;
  uVar1 = DAT_00648634;
  *(undefined4 *)(param_1 + 0x7e8) = DAT_00648630;
  *(undefined4 *)(param_1 + 0x7ec) = uVar1;
  *(undefined4 *)(param_1 + 0x7f8) = DAT_0064850c;
  *(undefined4 *)(param_1 + 0x7f4) = DAT_00648510;
  *(undefined4 *)(param_1 + 0x7f0) = DAT_00648514;
  *(undefined4 *)(param_1 + 0x7fc) = DAT_00648518;
  *(undefined4 *)(param_1 + 0x800) = DAT_0064861c;
  return 0;
}


