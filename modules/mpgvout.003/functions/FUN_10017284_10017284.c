/* Module: mpgvout.003
   Function: FUN_10017284
   Address: 10017284
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10017284(int *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t _Size;
  int iVar11;
  int *_Dst;
  size_t _Size_00;
  ushort in_FPUControlWord;
  double dVar12;
  undefined8 uVar13;
  int iStack_48;
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
    dVar12 = floor(_DAT_10017274 / *(double *)(param_1 + 0x1a));
    uStack_10 = in_FPUControlWord | 0xc00;
    iStack_14 = (int)ROUND(dVar12);
    param_1[0x1c] = iStack_14;
  }
  else if ((byte)((byte)((ushort)((ushort)(NAN(*(double *)(param_1 + 0x1a)) || NAN(_DAT_1001727c))
                                 << 10) >> 8) |
                 (byte)((ushort)((ushort)(*(double *)(param_1 + 0x1a) == _DAT_1001727c) << 0xe) >> 8
                       )) == 0x40) {
    param_1[0x1c] = 900000;
  }
  else {
    param_1[0x1c] = 0xdbf24;
  }
  iVar6 = 0x3f;
  param_1[0x6a] = 0;
  puVar1 = (undefined2 *)((int)param_1 + 0x2aa);
  do {
    *puVar1 = 0x10;
    puVar1 = puVar1 + -1;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  param_1[0x69] = 0;
  iVar8 = 0;
  iVar6 = 0x3f;
  do {
    *(undefined2 *)((int)param_1 + iVar8 + 0x1ac) = *(undefined2 *)((int)&DAT_10033640 + iVar8);
    iVar8 = iVar8 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  iVar6 = 0x3f;
  param_1[0x6a] = 0;
  puVar1 = (undefined2 *)((int)param_1 + 0x2aa);
  do {
    *puVar1 = 0x10;
    puVar1 = puVar1 + -1;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  param_1[9] = param_2;
  param_1[0x160] = 0;
  param_1[0x162] = param_1[0xdd];
  param_1[0x161] = param_1[0xdc];
  param_1[0x163] = param_1[0xde];
  iVar6 = param_1[0xda] + 0xf;
  if (iVar6 < 0) {
    iVar6 = param_1[0xda] + 0x1e;
  }
  param_1[0x158] = iVar6 >> 4;
  if ((param_1[0xe] == 1) && (param_1[0x26] == 0)) {
    iVar6 = param_1[0xdb] + 0x1f;
    if (iVar6 < 0) {
      iVar6 = param_1[0xdb] + 0x3e;
    }
    param_1[0x159] = (iVar6 >> 5) * 2;
  }
  else {
    iVar6 = param_1[0xdb] + 0xf;
    if (iVar6 < 0) {
      iVar6 = param_1[0xdb] + 0x1e;
    }
    param_1[0x159] = iVar6 >> 4;
  }
  iVar6 = param_1[0x159];
  iVar8 = param_1[0x16];
  if (iVar8 != 0) {
    iVar6 = iVar6 >> 1;
  }
  param_1[0x15c] = iVar6;
  iVar5 = param_1[0x158];
  param_1[0x15f] = iVar6 * iVar5;
  iVar7 = iVar5 << 4;
  param_1[0x15e] = (iVar5 + -1) * 0x10;
  iVar9 = param_1[0x159] << 4;
  param_1[0x154] = iVar7;
  iVar11 = param_1[0x27];
  param_1[0x155] = iVar9;
  iVar10 = iVar7;
  if (iVar11 != 3) {
    iVar10 = iVar7 >> 1;
  }
  param_1[0x156] = iVar10;
  iVar2 = iVar9;
  if (iVar11 == 1) {
    iVar2 = iVar9 >> 1;
  }
  param_1[0x157] = iVar2;
  if (iVar8 != 0) {
    iVar9 = iVar9 >> 1;
  }
  param_1[0x15b] = iVar9;
  if (iVar8 != 0) {
    iVar7 = iVar5 << 5;
  }
  param_1[0x15a] = iVar7;
  if (iVar8 != 0) {
    iVar10 = iVar10 * 2;
  }
  param_1[0x15d] = iVar10;
  param_1[0x183] = 0;
  iVar8 = *(int *)(iVar11 * 4 + 0x1001714c);
  param_1[0x185] = 0;
  param_1[0x153] = iVar8;
  param_1[0x186] = 0;
  param_1[0x184] = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  iVar6 = (*(code *)param_1[7])(iVar6 * iVar5 * 0x3c);
  param_1[0x1a9] = iVar6;
  if (iVar6 == 0) {
    uVar13 = 0x10017194;
LAB_10017663:
    pcVar4 = (code *)param_1[3];
  }
  else {
    pvVar3 = (void *)(*(code *)param_1[7])((param_1[0x15f] * 8 - param_1[0x15f]) * 2);
    param_1[0x1aa] = (int)pvVar3;
    if (pvVar3 != (void *)0x0) {
      memset(pvVar3,0,(param_1[0x15f] * 8 - param_1[0x15f]) * 2);
      iStack_34 = 0;
      if (0 < param_1[0xe] + 5) {
        _Dst = param_1 + 0x1ab;
        do {
          pcVar4 = (code *)param_1[7];
          iVar6 = param_1[0x154];
          iVar8 = param_1[0x155];
          iVar5 = param_1[0x27];
          memset(_Dst,0,0x28);
          iVar11 = iVar6;
          if (iVar5 != 3) {
            iVar11 = iVar6 >> 1;
          }
          iStack_48 = iVar8;
          if (iVar5 == 1) {
            iStack_48 = iVar8 >> 1;
          }
          _Size_00 = iVar6 * iVar8;
          iVar8 = iStack_48 * 2 * iVar11 + _Size_00 + 0xffe + iVar6;
          iVar5 = (*pcVar4)(iVar8);
          _Dst[1] = iVar5;
          if (iVar5 == 0) {
            _Dst[2] = 0;
            _Dst[6] = 0;
            _Dst[7] = 0;
            _Dst[8] = 0;
          }
          else {
            _Dst[2] = iVar8;
            uStack_20 = iVar5 + 0xfffU & 0xfffff000;
            _Dst[6] = uStack_20;
            pvVar3 = (void *)(uStack_20 + DAT_10035528);
            _Dst[6] = (int)pvVar3;
            uStack_24 = _Size_00 + 0x1f + (int)pvVar3 & 0xffffffe0;
            _Dst[7] = uStack_24;
            _Size = iStack_48 * iVar11;
            uStack_28 = _Size + 0x1f + uStack_24 & 0xffffffe0;
            _Dst[8] = uStack_28;
            memset(pvVar3,0x10,_Size_00);
            memset((void *)_Dst[7],0x80,_Size);
            memset((void *)_Dst[8],0x80,_Size);
            DAT_10035528 = DAT_10035528 + 0x60;
            if (iVar6 <= DAT_10035528) {
              DAT_10035528 = 0;
            }
          }
          if (_Dst[6] == 0) {
            uVar13 = 0x10017214;
            goto LAB_10017663;
          }
          _Dst = _Dst + 10;
          iStack_34 = iStack_34 + 1;
        } while (iStack_34 < param_1[0xe] + 5);
      }
      iVar6 = 0;
      iStack_34 = 2;
      do {
        *(undefined4 *)((int)param_1 + iVar6 + 0x660) =
             *(undefined4 *)((int)param_1 + iVar6 + (param_1[0xe] + 1) * 0x28 + 0x6c4);
        *(undefined4 *)((int)param_1 + iVar6 + 0x644) =
             *(undefined4 *)((int)param_1 + iVar6 + (param_1[0xe] + 2) * 0x28 + 0x6c4);
        *(undefined4 *)((int)param_1 + iVar6 + 0x68c) =
             *(undefined4 *)((int)param_1 + iVar6 + (param_1[0xe] + 3) * 0x28 + 0x6c4);
        *(undefined4 *)((int)param_1 + iVar6 + 0x698) =
             *(undefined4 *)((int)param_1 + iVar6 + (param_1[0xe] + 4) * 0x28 + 0x6c4);
        iVar6 = iVar6 + 4;
        iStack_34 = iStack_34 + -1;
      } while (-1 < iStack_34);
      param_1[0x181] = 0;
      param_1[0x182] = 0;
      time((time_t *)aiStack_30);
      param_1[0x188] = aiStack_30[0];
      FUN_1001964c();
      FUN_10019b90();
      FUN_10001efc();
      FUN_10003534(param_1);
      FUN_10001f54();
      FUN_10026cf8((int)param_1);
      FUN_1002204c(param_1);
      FUN_100012d0(param_1);
      FUN_1001b4e4();
      FUN_10022b1c((int)param_1);
      param_1[0x175] = 0;
      (*(code *)param_1[5])(" Video encoder initialized");
      return 0;
    }
    uVar13 = 0x100171d4;
    pcVar4 = (code *)param_1[3];
  }
  (*pcVar4)(uVar13);
  return 2;
}


