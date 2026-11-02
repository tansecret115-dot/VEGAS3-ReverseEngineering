/* Module: mpgvout.002
   Function: FUN_10017634
   Address: 10017634
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10017634(int *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t _Size;
  int iVar10;
  int *_Dst;
  int iVar11;
  size_t _Size_00;
  ushort in_FPUControlWord;
  double dVar12;
  undefined8 uVar13;
  int iStack_34;
  int aiStack_30 [2];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_14;
  ushort uStack_10;
  
  (*(code *)param_1[5])("Initializing video encoder");
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x150] = 0;
  if (param_1[0xb] == 0) {
    dVar12 = floor(_DAT_10017624 / *(double *)(param_1 + 0x1a));
    uStack_10 = in_FPUControlWord | 0xc00;
    iStack_14 = (int)ROUND(dVar12);
    param_1[0x1c] = iStack_14;
  }
  else if (*(double *)(param_1 + 0x1a) == _DAT_1001762c) {
    param_1[0x1c] = 900000;
  }
  else {
    param_1[0x1c] = 0xdbf24;
  }
  iVar7 = 0x3f;
  param_1[0x6a] = 0;
  puVar1 = (undefined2 *)((int)param_1 + 0x2aa);
  do {
    *puVar1 = 0x10;
    puVar1 = puVar1 + -1;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  param_1[0x69] = 0;
  iVar9 = 0;
  iVar7 = 0x3f;
  do {
    *(undefined2 *)((int)param_1 + iVar9 + 0x1ac) = *(undefined2 *)((int)&DAT_10033640 + iVar9);
    iVar9 = iVar9 + 2;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  iVar7 = 0x3f;
  param_1[0x6a] = 0;
  puVar1 = (undefined2 *)((int)param_1 + 0x2aa);
  do {
    *puVar1 = 0x10;
    puVar1 = puVar1 + -1;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  param_1[9] = param_2;
  param_1[0x160] = 0;
  param_1[0x162] = param_1[0xdd];
  param_1[0x161] = param_1[0xdc];
  param_1[0x163] = param_1[0xde];
  iVar7 = param_1[0xda] + 0xf;
  iVar9 = param_1[0xda] + 0x1e;
  if (-1 < iVar7) {
    iVar9 = iVar7;
  }
  param_1[0x158] = iVar9 >> 4;
  if ((param_1[0xe] == 1) && (param_1[0x26] == 0)) {
    iVar7 = param_1[0xdb] + 0x1f;
    iVar9 = param_1[0xdb] + 0x3e;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    param_1[0x159] = (iVar9 >> 5) * 2;
  }
  else {
    iVar7 = param_1[0xdb] + 0xf;
    iVar9 = param_1[0xdb] + 0x1e;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    param_1[0x159] = iVar9 >> 4;
  }
  iVar7 = param_1[0x16];
  iVar9 = param_1[0x159];
  if (iVar7 != 0) {
    iVar9 = param_1[0x159] >> 1;
  }
  param_1[0x15c] = iVar9;
  iVar6 = param_1[0x158];
  param_1[0x15f] = iVar9 * iVar6;
  param_1[0x15e] = (iVar6 + -1) * 0x10;
  iVar3 = iVar6 << 4;
  iVar11 = param_1[0x159] << 4;
  param_1[0x154] = iVar3;
  iVar10 = param_1[0x27];
  param_1[0x155] = iVar11;
  iVar8 = iVar3 >> 1;
  if (iVar10 == 3) {
    iVar8 = iVar3;
  }
  param_1[0x156] = iVar8;
  iVar2 = iVar11 >> 1;
  if (iVar10 != 1) {
    iVar2 = iVar11;
  }
  param_1[0x157] = iVar2;
  iVar2 = iVar11 >> 1;
  if (iVar7 == 0) {
    iVar2 = iVar11;
  }
  param_1[0x15b] = iVar2;
  iVar11 = iVar6 << 5;
  if (iVar7 == 0) {
    iVar11 = iVar3;
  }
  param_1[0x15a] = iVar11;
  iVar3 = iVar8 * 2;
  if (iVar7 == 0) {
    iVar3 = iVar8;
  }
  param_1[0x15d] = iVar3;
  param_1[0x183] = 0;
  param_1[0x185] = 0;
  iVar7 = *(int *)(iVar10 * 4 + 0x10017500);
  param_1[0x186] = 0;
  param_1[0x153] = iVar7;
  param_1[0x184] = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  iVar7 = (*(code *)param_1[7])(iVar9 * iVar6 * 0x3c);
  param_1[0x1a9] = iVar7;
  if (iVar7 == 0) {
    uVar13 = 0x10017544;
LAB_10017a5b:
    pcVar5 = (code *)param_1[3];
  }
  else {
    pvVar4 = (void *)(*(code *)param_1[7])((param_1[0x15f] * 8 - param_1[0x15f]) * 2);
    param_1[0x1aa] = (int)pvVar4;
    if (pvVar4 != (void *)0x0) {
      memset(pvVar4,0,(param_1[0x15f] * 8 - param_1[0x15f]) * 2);
      iStack_34 = 0;
      if (0 < param_1[0xe] + 5) {
        _Dst = param_1 + 0x1ab;
        do {
          pcVar5 = (code *)param_1[7];
          iVar7 = param_1[0x154];
          iVar9 = param_1[0x155];
          iVar6 = param_1[0x27];
          memset(_Dst,0,0x28);
          iVar3 = iVar9 >> 1;
          if (iVar6 != 1) {
            iVar3 = iVar9;
          }
          iVar10 = iVar7 >> 1;
          if (iVar6 == 3) {
            iVar10 = iVar7;
          }
          _Size = iVar7 * iVar9;
          iVar9 = iVar3 * 2 * iVar10 + _Size + 0xffe + iVar7;
          iVar6 = (*pcVar5)(iVar9);
          _Dst[1] = iVar6;
          if (iVar6 == 0) {
            _Dst[2] = 0;
            _Dst[6] = 0;
            _Dst[7] = 0;
            _Dst[8] = 0;
          }
          else {
            _Dst[2] = iVar9;
            uStack_20 = iVar6 + 0xfffU & 0xfffff000;
            _Size_00 = iVar10 * iVar3;
            _Dst[6] = uStack_20;
            pvVar4 = (void *)(uStack_20 + DAT_10035528);
            _Dst[6] = (int)pvVar4;
            uStack_24 = _Size + 0x1f + (int)pvVar4 & 0xffffffe0;
            _Dst[7] = uStack_24;
            uStack_28 = _Size_00 + 0x1f + uStack_24 & 0xffffffe0;
            _Dst[8] = uStack_28;
            memset(pvVar4,0x10,_Size);
            memset((void *)_Dst[7],0x80,_Size_00);
            memset((void *)_Dst[8],0x80,_Size_00);
            DAT_10035528 = DAT_10035528 + 0x60;
            if (iVar7 <= DAT_10035528) {
              DAT_10035528 = 0;
            }
          }
          if (_Dst[6] == 0) {
            uVar13 = 0x100175c4;
            goto LAB_10017a5b;
          }
          _Dst = _Dst + 10;
          iStack_34 = iStack_34 + 1;
        } while (iStack_34 < param_1[0xe] + 5);
      }
      iVar7 = 0;
      iStack_34 = 2;
      do {
        *(undefined4 *)((int)param_1 + iVar7 + 0x660) =
             *(undefined4 *)((int)param_1 + iVar7 + (param_1[0xe] + 1) * 0x28 + 0x6c4);
        *(undefined4 *)((int)param_1 + iVar7 + 0x644) =
             *(undefined4 *)((int)param_1 + iVar7 + (param_1[0xe] + 2) * 0x28 + 0x6c4);
        *(undefined4 *)((int)param_1 + iVar7 + 0x68c) =
             *(undefined4 *)((int)param_1 + iVar7 + (param_1[0xe] + 3) * 0x28 + 0x6c4);
        *(undefined4 *)((int)param_1 + iVar7 + 0x698) =
             *(undefined4 *)((int)param_1 + iVar7 + (param_1[0xe] + 4) * 0x28 + 0x6c4);
        iVar7 = iVar7 + 4;
        iStack_34 = iStack_34 + -1;
      } while (-1 < iStack_34);
      param_1[0x181] = 0;
      param_1[0x182] = 0;
      time((time_t *)aiStack_30);
      param_1[0x188] = aiStack_30[0];
      FUN_10019a54();
      FUN_10019f80();
      FUN_10001f04();
      FUN_1000353c(param_1);
      FUN_10001f5c();
      FUN_10026e14((int)param_1);
      FUN_10022120(param_1);
      FUN_100012d0(param_1);
      FUN_1001b95c();
      FUN_10022bf0((int)param_1);
      param_1[0x175] = 0;
      (*(code *)param_1[5])(" Video encoder initialized");
      return 0;
    }
    uVar13 = 0x10017584;
    pcVar5 = (code *)param_1[3];
  }
  (*pcVar5)(uVar13);
  return 2;
}


