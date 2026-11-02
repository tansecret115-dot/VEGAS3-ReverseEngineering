/* Module: vegas30.exe
   Function: FUN_005ac4f0
   Address: 005ac4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005ac4f0(int param_1,byte *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int *param_7,int param_8,undefined4 *param_9,int param_10,
            undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  A_Buffer *pAVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_EDI;
  int *piVar7;
  undefined4 local_b04;
  undefined4 local_b00;
  undefined4 local_afc;
  int local_af8;
  undefined4 local_af4;
  undefined4 local_af0;
  undefined4 local_aec;
  undefined4 local_ae8;
  int local_ae4 [2];
  undefined4 *local_adc;
  undefined4 local_ad8;
  int *local_ad4;
  int local_a54;
  undefined4 *local_9d4;
  int local_954;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  int local_428 [266];
  
  if (param_7[4] == 3) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = param_7[8] << 2;
  }
  iVar1 = *param_7;
  piVar6 = param_7;
  piVar7 = local_428;
  for (uVar5 = (uint)(iVar1 + iVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  for (uVar5 = iVar1 + iVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  local_428[1] = *param_9;
  local_428[2] = param_9[1];
  if (param_10 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_7 + 0xe) * param_7[1] + 0x1f;
    param_10 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  param_8 = param_8 + (param_7[2] - local_428[2]) * param_10;
  if (((*param_2 & 2) != 0) && (2 < *(int *)(param_2 + 0x454))) {
    _SfDibFillRect_24(param_3,param_4,0,param_5,&DAT_00629e10,3);
    if (*(int *)(param_1 + 0x468) == 0) {
      hMem = GlobalAlloc(0x40,0x136d0);
      pAVar3 = GlobalLock(hMem);
      if (pAVar3 == (A_Buffer *)0x0) {
        pAVar3 = (A_Buffer *)0x0;
      }
      else {
        *(undefined4 *)(pAVar3 + 0x126bc) = 0;
        *(undefined4 *)(pAVar3 + 0x126c0) = 0;
        *(undefined4 *)(pAVar3 + 0x126c4) = 0;
      }
      *(A_Buffer **)(param_1 + 0x468) = pAVar3;
      A_Buffer::Init(pAVar3);
    }
    pAVar3 = *(A_Buffer **)(param_1 + 0x468);
    if (pAVar3 != (A_Buffer *)0x0) {
      local_af4 = 0;
      piVar6 = local_ae4;
      for (iVar2 = 0x1af; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      local_aec = *(undefined4 *)(param_3 + 4);
      local_ae8 = *(undefined4 *)(param_3 + 8);
      local_afc = local_428[1];
      local_adc = &local_af4;
      local_af8 = local_428[2];
      local_ad8 = param_5;
      local_ae4[1] = param_4;
      local_ad4 = local_428;
      local_9d4 = &local_b04;
      local_954 = param_10;
      local_8cc = param_12;
      local_af0 = 0;
      local_b04 = 0;
      local_b00 = 0;
      local_ae4[0] = param_3;
      local_8d4 = 1;
      local_8d0 = 2;
      local_8bc = 0;
      local_8c8 = 0x10;
      local_8c4 = 0;
      local_8c0 = 0x3f800000;
      local_a54 = param_8;
      iVar2 = A_Buffer::BeginFrame(pAVar3,(tA_BUFFER_PARAM *)local_ae4);
      if (iVar2 == 1) {
        A_Buffer::DrawPoly(pAVar3,(SF3DPOLY *)(param_2 + 0x60),*(double *)(param_2 + 0x45c),
                           (double)CONCAT44(unaff_EDI,*(undefined4 *)(param_2 + 0x464)));
        A_Buffer::EndFrame(pAVar3);
      }
    }
    return 1;
  }
  uVar4 = FUN_005abbd0(param_3,param_4,param_5,param_2 + 0x50,0,&DAT_00629e10,0);
  if ((0 < *(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x40)) &&
     (0 < *(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x44))) {
    _SfDibCopy_36(param_3,param_4,param_2 + 0x50,param_5,local_428,param_8,param_2 + 0x40,param_10,
                  param_12);
    return uVar4;
  }
  _SfDibFillRect_24(param_3,param_4,0,param_5,&DAT_00629e10,3);
  return 1;
}


