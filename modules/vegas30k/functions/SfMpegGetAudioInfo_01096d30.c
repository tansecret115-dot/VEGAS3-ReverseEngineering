/* Module: vegas30k.dll
   Function: SfMpegGetAudioInfo
   Address: 01096d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfMpegGetAudioInfo(struct HWND__ *,double *,struct tagAUDIO_INFO *) */

long SfMpegGetAudioInfo(HWND__ *param_1,double *param_2,tagAUDIO_INFO *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  uint local_1dc;
  ulong local_1d8 [3];
  undefined8 local_1cc;
  ulong local_1c4 [9];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188 [90];
  tagMPEG_BIT_STREAM local_20 [8];
  int local_18;
  int local_c;
  
                    /* 0x96d30  431  ?SfMpegGetAudioInfo@@YGJPAUHWND__@@PANPAUtagAUDIO_INFO@@@Z */
  local_1c4[1] = 8;
  local_1c4[2] = 8;
  local_1c4[3] = 0x180;
  local_1c4[4] = 0x480;
  local_1c4[5] = 0x480;
  local_1c4[6] = 0x180;
  local_1c4[7] = 0x480;
  local_1c4[0] = 0x20;
  local_1c4[8] = 0x240;
  local_1a0._0_4_ = 0xcccccccd;
  local_1a0._4_4_ = 0x40460ccc;
  local_198 = 0;
  local_194 = 0x40480000;
  local_190 = 0;
  local_18c = 0x40400000;
  local_188[0] = 0;
  local_188[1] = 0x20;
  local_188[2] = 0x40;
  local_188[3] = 0x60;
  local_188[4] = 0x80;
  local_188[5] = 0xa0;
  local_188[6] = 0xc0;
  local_188[7] = 0xe0;
  local_188[8] = 0x100;
  local_188[9] = 0x120;
  local_188[10] = 0x140;
  local_188[0xb] = 0x160;
  local_188[0xc] = 0x180;
  local_188[0xd] = 0x1a0;
  local_188[0xe] = 0x1c0;
  local_188[0xf] = 0;
  local_188[0x10] = 0x20;
  local_188[0x11] = 0x30;
  local_188[0x12] = 0x38;
  local_188[0x13] = 0x40;
  local_188[0x14] = 0x50;
  local_188[0x15] = 0x60;
  local_188[0x16] = 0x70;
  local_188[0x17] = 0x80;
  local_188[0x18] = 0xa0;
  local_188[0x19] = 0xc0;
  local_188[0x1a] = 0xe0;
  local_188[0x1b] = 0x100;
  local_188[0x1c] = 0x140;
  local_188[0x1d] = 0x180;
  local_188[0x1e] = 0;
  local_188[0x1f] = 0x20;
  local_188[0x20] = 0x28;
  local_188[0x21] = 0x30;
  local_188[0x22] = 0x38;
  local_188[0x23] = 0x40;
  local_188[0x24] = 0x50;
  local_188[0x25] = 0x60;
  local_188[0x26] = 0x70;
  local_188[0x27] = 0x80;
  local_188[0x28] = 0xa0;
  local_188[0x29] = 0xc0;
  local_188[0x2a] = 0xe0;
  local_188[0x2b] = 0x100;
  local_188[0x2c] = 0x140;
  local_188[0x2d] = 0;
  local_188[0x2e] = 0x20;
  local_188[0x2f] = 0x40;
  local_188[0x30] = 0x60;
  local_188[0x31] = 0x80;
  local_188[0x32] = 0xa0;
  local_188[0x33] = 0xc0;
  local_188[0x34] = 0xe0;
  local_188[0x47] = 0xe0;
  local_188[0x57] = 0xe0;
  local_188[0x3d] = 0x20;
  local_188[0x4c] = 0x20;
  local_188[0x37] = 0x140;
  local_188[0x49] = 0x140;
  local_188[0x59] = 0x140;
  local_188[0x35] = 0x100;
  local_188[0x48] = 0x100;
  local_188[0x58] = 0x100;
  local_1d8[2] = 0;
  local_1cc._0_4_ = 0;
  local_188[0x36] = 0x120;
  local_188[0x38] = 0x160;
  local_188[0x39] = 0x180;
  local_188[0x3a] = 0x1a0;
  local_188[0x3b] = 0x1c0;
  local_188[0x3c] = 0;
  local_188[0x3e] = 0x30;
  local_188[0x3f] = 0x38;
  local_188[0x40] = 0x40;
  local_188[0x41] = 0x50;
  local_188[0x42] = 0x60;
  local_188[0x43] = 0x70;
  local_188[0x44] = 0x80;
  local_188[0x45] = 0xa0;
  local_188[0x46] = 0xc0;
  local_188[0x4a] = 0x180;
  local_188[0x4b] = 0;
  local_188[0x4d] = 0x28;
  local_188[0x4e] = 0x30;
  local_188[0x4f] = 0x38;
  local_188[0x50] = 0x40;
  local_188[0x51] = 0x50;
  local_188[0x52] = 0x60;
  local_188[0x53] = 0x70;
  local_188[0x54] = 0x80;
  local_188[0x55] = 0xa0;
  local_188[0x56] = 0xc0;
  local_1cc._4_4_ = 0;
  puVar1 = (undefined1 *)SfMpegStreamOpen(local_20,(char *)(param_3 + 0x44));
  if (-1 < (int)puVar1) {
    lVar2 = SfMpegStreamReadCached(local_20,(uchar *)&local_1dc,4,local_1d8);
    if ((lVar2 < 0) || (local_1d8[0] != 4)) {
      uVar6 = 0;
    }
    else {
      cdr_ByteSwap32((uchar *)&local_1dc,1);
      uVar6 = local_1dc;
    }
    if ((uVar6 & 0xfff00000) == 0xfff00000) {
      bVar7 = (uVar6 & 0x80000) != 0x80000;
      if (bVar7) {
        *(undefined4 *)param_3 = 1;
      }
      else {
        *(undefined4 *)param_3 = 0;
      }
      iVar3 = 3 - (uVar6 >> 0x11 & 3);
      iVar4 = iVar3 + (uint)bVar7 * 3;
      local_1d8[0] = local_1c4[iVar3];
      *(ulong *)(param_3 + 0x20) = local_1c4[iVar4 + 3];
      *(undefined4 *)(param_3 + 0x10) = local_188[(uVar6 >> 0xc & 0xf) + iVar4 * 0xf];
      *(undefined8 *)(param_3 + 0x18) = (&local_1a0)[uVar6 >> 10 & 3];
      local_1d8[1] = 0;
      iVar4 = ftol();
      *(int *)(param_3 + 0xc) = iVar4;
      local_1d8[2] = (uVar6 >> 9 & 1) + iVar4;
      local_1cc = ftol();
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      puVar1 = (undefined1 *)
               _SfList_InsertList_16(*(undefined4 *)(param_3 + 0x28),0xffffffff,local_1d8 + 2,1);
      if (-1 < (int)puVar1) {
        do {
          puVar1 = (undefined1 *)SfMpegStreamSkipCached(local_20,local_1d8[2] - 4);
          if ((int)puVar1 < 0) break;
          lVar2 = SfMpegStreamReadCached(local_20,(uchar *)&local_1dc,4,local_1d8);
          if ((lVar2 < 0) || (local_1d8[0] != 4)) {
            local_1dc = 0;
          }
          else {
            cdr_ByteSwap32((uchar *)&local_1dc,1);
          }
          if ((local_1dc & 0xfff00000) != 0xfff00000) break;
          iVar4 = *(int *)(param_3 + 4);
          local_1c4[1] = 0;
          local_1d8[2] = (local_1dc >> 9 & 1) + *(int *)(param_3 + 0xc);
          local_1c4[0] = iVar4 * *(int *)(param_3 + 0x20);
          uVar8 = ftol();
          *(int *)(param_3 + 4) = iVar4 + 1;
          local_1cc = uVar8;
          puVar1 = (undefined1 *)
                   _SfList_InsertList_16(*(undefined4 *)(param_3 + 0x28),0xffffffff,local_1d8 + 2,1)
          ;
        } while (-1 < (int)puVar1);
        *(int *)(param_3 + 8) = local_c + -4 + local_18;
      }
    }
    else {
      uVar5 = _SfGetString2_8(DAT_0120e5c8,0x1078);
      SfMsgBox(0,0,uVar5);
      puVar1 = &DAT_80070057;
    }
  }
  SfMpegStreamClose(local_20);
  return (long)puVar1;
}


