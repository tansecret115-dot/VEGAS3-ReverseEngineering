/* Module: vegas30k.dll
   Function: SfMpegGetVideoInfo
   Address: 01097360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfMpegGetVideoInfo(struct HWND__ *,double *,struct VIDEO_INFO *) */

long SfMpegGetVideoInfo(HWND__ *param_1,double *param_2,VIDEO_INFO *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  tagMPEG_BIT_STREAM *ptVar7;
  int *piVar8;
  float10 extraout_ST0;
  undefined8 uVar9;
  uint local_c8;
  ulong local_c4;
  uint local_c0;
  undefined4 uStack_bc;
  double local_b8;
  tagMPEG_BIT_STREAM local_b0 [4];
  int local_ac;
  int local_a8;
  int local_9c;
  ulong local_90;
  uchar local_8c [4];
  int local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  ulong local_68 [19];
  tagMSG local_1c;
  
  ptVar7 = local_b0;
                    /* 0x97360  432  ?SfMpegGetVideoInfo@@YGJPAUHWND__@@PANPAUVIDEO_INFO@@@Z */
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)ptVar7 = 0;
    ptVar7 = ptVar7 + 4;
  }
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0xb5112287;
  local_68[3] = 0x4037f9dc;
  local_68[4] = 0;
  local_68[5] = 0x40380000;
  local_68[6] = 0;
  local_68[7] = 0x40390000;
  local_68[8] = 0xe2556b28;
  local_68[9] = 0x403df853;
  local_68[10] = 0;
  local_68[0xb] = 0x403e0000;
  local_68[0xc] = 0;
  local_68[0xd] = 0x40490000;
  local_68[0xe] = 0xe2556b28;
  local_68[0xf] = 0x404df853;
  local_68[0x10] = 0;
  local_68[0x11] = 0x404e0000;
  puVar2 = (undefined1 *)SfMpegStreamOpen(local_b0,(char *)(param_3 + 0x44));
  if ((int)puVar2 < 0) goto LAB_010978cd;
  puVar2 = (undefined1 *)SfMpegStreamSeekNextStartCode(local_b0);
  if ((int)puVar2 < 0) goto LAB_010978cd;
  if (local_ac != 0x1b3) {
    _SfGetString2_8(DAT_0120e5c8,0x1079);
    SfMsgBox(0,0);
    puVar2 = &DAT_80070057;
    goto LAB_010978cd;
  }
  lVar3 = SfMpegStreamReadCached(local_b0,(uchar *)&local_c8,4,&local_c4);
  if ((lVar3 < 0) || (local_c4 != 4)) {
    uVar6 = 0;
  }
  else {
    cdr_ByteSwap32((uchar *)&local_c8,1);
    uVar6 = local_c8;
  }
  *(uint *)(param_3 + 0x10) = uVar6 & 0xf;
  *(ushort *)(param_3 + 0x1c) = (ushort)(uVar6 >> 0x14);
  *(ushort *)(param_3 + 0x1e) = (ushort)(uVar6 >> 8) & 0xfff;
  lVar3 = SfMpegStreamReadCached(local_b0,(uchar *)&local_c8,4,&local_c4);
  if ((lVar3 < 0) || (local_c4 != 4)) {
    uVar6 = 0;
  }
  else {
    cdr_ByteSwap32((uchar *)&local_c8,1);
    uVar6 = local_c8;
  }
  *(uint *)(param_3 + 0x18) = uVar6 >> 0xe;
  *(uint *)(param_3 + 0x20) = uVar6 >> 3 & 0x3ff;
  puVar2 = (undefined1 *)SfMpegStreamSeekNextStartCode(local_b0);
  if ((int)puVar2 < 0) {
LAB_010978cb:
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (local_ac == 0x1b5) {
      lVar3 = SfMpegStreamReadCached(local_b0,(uchar *)&local_c8,4,&local_c4);
      if ((lVar3 < 0) || (local_c4 != 4)) {
        uVar6 = 0;
      }
      else {
        cdr_ByteSwap32((uchar *)&local_c8,1);
        uVar6 = local_c8;
      }
      if ((uVar6 & 0xf0000000) == 0x10000000) {
        *(ushort *)(param_3 + 0x1c) =
             *(ushort *)(param_3 + 0x1c) | (ushort)((uVar6 >> 0xf & 3) << 0xc);
        *(ushort *)(param_3 + 0x1e) =
             *(ushort *)(param_3 + 0x1e) | (ushort)((uVar6 >> 0xd & 3) << 0xc);
        *(undefined4 *)param_3 = 1;
        *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | (uVar6 & 0x1ffe) << 0x11;
        SfMpegStreamReadCached(local_b0,local_8c,2,local_68 + 0x12);
        param_3[0x14] = (VIDEO_INFO)(local_8c[0] >> 5 & 3);
        param_3[0x15] = (VIDEO_INFO)(local_8c[0] & 0x1f);
        *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | (uint)(local_8c._1_3_ & 0xff) << 10;
      }
      puVar2 = (undefined1 *)SfMpegStreamSeekNextStartCode(local_b0);
      if ((int)puVar2 < 0) goto LAB_010978cb;
    }
    uVar6 = *(uint *)(param_3 + 0x10);
    if ((uVar6 == 0) || (8 < uVar6)) {
      if (*(int *)param_3 == 0) {
        _SfGetString2_8(DAT_0120e5c8,0x107a);
        iVar5 = SfMsgBox(0,4);
        if (iVar5 == 7) goto LAB_010978cd;
        *(undefined4 *)(param_3 + 8) = 0xe2556b28;
        *(undefined4 *)(param_3 + 0xc) = 0x403df853;
      }
      else {
        local_b8 = (double)(ulonglong)
                           ((((byte)param_3[0x14] + 1) * uVar6) / ((byte)param_3[0x15] + 1));
        *(double *)(param_3 + 8) = (double)(longlong)local_b8;
      }
    }
    else {
      uVar1 = local_68[uVar6 * 2 + 1];
      *(ulong *)(param_3 + 8) = local_68[uVar6 * 2];
      *(ulong *)(param_3 + 0xc) = uVar1;
    }
    local_b8 = _DAT_011dad58 / *(double *)(param_3 + 8);
    iVar5 = 6;
    uVar6 = 0;
    piVar8 = local_88;
    while( true ) {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    do {
      uVar4 = local_9c + -4 + local_a8;
      if (local_ac == 0x100) {
        if (*(int *)(param_3 + 4) != 0) {
          local_88[0] = uVar4 - uVar6;
          iVar5 = _SfList_InsertList_16(*(undefined4 *)(param_3 + 0x28),0xffffffff,local_88,1);
          uVar6 = uVar4;
          uVar9 = local_78;
          if (iVar5 < 0) goto LAB_010977e5;
        }
        uVar4 = uVar6;
        lVar3 = SfMpegStreamReadCached(local_b0,(uchar *)&local_c4,4,&local_90);
        if ((lVar3 < 0) || (local_90 != 4)) {
          local_c4 = 0;
        }
        else {
          cdr_ByteSwap32((uchar *)&local_c4,1);
        }
        uVar1 = local_c4;
        iVar5 = *(int *)(param_3 + 4);
        uStack_6c = 0;
        local_88[1] = local_c4 >> 0x13 & 7;
        local_70 = iVar5;
        uVar9 = ftol();
        uStack_bc = 0;
        local_c0 = ((uVar1 >> 0x16) - local_c8) + 1 + iVar5;
        local_80 = uVar9;
        uVar9 = ftol();
        if (extraout_ST0 < (float10)*param_2) {
          *param_2 = (double)extraout_ST0;
        }
        local_c8 = local_c8 + 1;
        *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      }
      else if (local_ac == 0x1b7) {
        uVar4 = uVar4 + 4;
        local_88[0] = uVar4 - uVar6;
        _SfList_InsertList_16(*(undefined4 *)(param_3 + 0x28),0xffffffff,local_88,1);
        uVar9 = local_78;
      }
      else {
        uVar4 = uVar6;
        uVar9 = local_78;
        if (local_ac == 0x1b8) {
          local_c8 = 0;
        }
      }
LAB_010977e5:
      local_78 = uVar9;
      iVar5 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      while (iVar5 != 0) {
        if (local_1c.message == 0x12) {
          PostQuitMessage(local_1c.wParam);
          break;
        }
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
        iVar5 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      }
      lVar3 = SfMpegStreamSeekNextStartCode(local_b0);
      uVar6 = uVar4;
    } while (-1 < lVar3);
    local_c0 = *(uint *)(param_3 + 4);
    uStack_bc = 0;
    puVar2 = (undefined1 *)0x0;
    ceil((((double)uVar4 / (double)local_c0) / local_b8) * _DAT_011e2848);
    iVar5 = ftol();
    if (*(uint *)(param_3 + 0x18) < (uint)(iVar5 * 0x19)) {
      *(int *)(param_3 + 0x18) = iVar5 * 0x19;
    }
  }
LAB_010978cd:
  SfMpegStreamClose(local_b0);
  return (long)puVar2;
}


