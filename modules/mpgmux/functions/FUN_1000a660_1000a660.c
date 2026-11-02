/* Module: mpgmux.dll
   Function: FUN_1000a660
   Address: 1000a660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_1000a660(undefined1 *param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar5 = param_3;
  uVar3 = param_2;
  puVar4 = param_1;
  if (*(int *)(param_1 + 0x10) != 0x800) {
    FUN_100050f0((int)param_1,(byte *)s_DVD_sector_size_must_be_2048_byt_10017a28);
    return 0x10;
  }
  puVar1 = param_1 + 400;
  *(undefined4 *)(param_1 + 0x1190) = 0x800;
  *puVar1 = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 1;
  param_1[0x193] = 0xba;
  param_1 = param_1 + 0x194;
  FUN_1000c280((int)puVar4,param_2,param_3,'\x01',(int *)&param_1);
  *param_1 = (char)(*(int *)(puVar4 + 0x14b4) >> 0xe);
  param_1[1] = (char)(*(int *)(puVar4 + 0x14b4) >> 6);
  param_1[2] = puVar4[0x14b4] << 2 | 3;
  param_1[3] = 0xf8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 1;
  param_1[7] = 0xbb;
  param_1[8] = 0;
  param_1[9] = 0x12;
  param_1[10] = (byte)(*(int *)(puVar4 + 0x14b4) >> 0xf) | 0x80;
  param_1[0xb] = (char)(*(int *)(puVar4 + 0x14b4) >> 7);
  param_1[0xc] = puVar4[0x14b4] << 1 | 1;
  param_1[0xd] = 4;
  param_1[0xe] = 0xe1;
  param_1[0xf] = 0x7f;
  param_1[0x10] = 0xb9;
  param_1[0x11] = 0xe0;
  param_1[0x12] = 0xe8;
  param_1[0x13] = 0xb8;
  param_1[0x14] = 0xc0;
  param_1[0x15] = 0x20;
  param_1[0x16] = 0xbd;
  param_1[0x17] = 0xe0;
  param_1[0x18] = 0x3a;
  param_1[0x19] = 0xbf;
  param_1[0x1a] = 0xe0;
  param_1[0x1b] = 2;
  *(undefined4 *)(puVar4 + 0x11a8) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 1;
  if (*(int *)(puVar4 + 0x40) == 0) {
    param_1[0x1f] = 0xbe;
    param_1[0x20] = 7;
    param_1[0x21] = 0xd4;
    param_1 = param_1 + 0x22;
    iVar7 = 0x7d4;
    do {
      *param_1 = 0xff;
      param_1 = param_1 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    param_1[0x1f] = 0xbf;
    param_1[0x20] = 3;
    param_1[0x21] = 0xd4;
    param_1[0x22] = 0;
    param_1[0x23] = (char)((uint)*(undefined4 *)(puVar4 + 0x11cc) >> 0x18);
    param_1[0x24] = (char)((uint)*(undefined4 *)(puVar4 + 0x11cc) >> 0x10);
    param_1[0x25] = (char)((uint)*(undefined4 *)(puVar4 + 0x11cc) >> 8);
    param_1[0x26] = puVar4[0x11cc];
    uVar2 = *(undefined4 *)(puVar4 + 0x2e84);
    *(undefined4 *)(puVar4 + 0x2e84) = *(undefined4 *)(puVar4 + 0x11cc);
    *(undefined4 *)(puVar4 + 0x2e88) = uVar2;
    iVar7 = 0x3cf;
    puVar6 = param_1 + 0x27;
    do {
      param_1 = puVar6;
      *param_1 = 0;
      iVar7 = iVar7 + -1;
      puVar6 = param_1 + 1;
    } while (iVar7 != 0);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 1;
    param_1[4] = 0xbf;
    param_1[5] = 3;
    param_1[6] = 0xfa;
    param_1[7] = 1;
    param_1 = param_1 + 8;
    uVar8 = __alldiv(uVar3,uVar5,300,0);
    *param_1 = (char)((ulonglong)uVar8 >> 0x18);
    param_1[1] = (char)((ulonglong)uVar8 >> 0x10);
    param_1[2] = (char)((ulonglong)uVar8 >> 8);
    param_1[3] = (char)uVar8;
    param_1[4] = (char)((uint)*(undefined4 *)(puVar4 + 0x11cc) >> 0x18);
    param_1[5] = (char)((uint)*(undefined4 *)(puVar4 + 0x11cc) >> 0x10);
    param_1[6] = (char)((uint)*(undefined4 *)(puVar4 + 0x11cc) >> 8);
    param_1[7] = puVar4[0x11cc];
    param_1 = param_1 + 8;
    iVar7 = 0x3f1;
    do {
      *param_1 = 0;
      param_1 = param_1 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (puVar4[0x11eb] != '\0') {
    if (*(int *)(puVar4 + 0x40) != 0) {
      *(undefined4 *)(puVar4 + 0x2e6c) = 1;
    }
    iVar7 = (**(code **)(*(int *)(puVar4 + 0x11f8) + 0xc))
                      (*(int *)(puVar4 + 0x11f8),puVar1,*(undefined4 *)(puVar4 + 0x1190));
    if (iVar7 != *(int *)(puVar4 + 0x1190)) {
      FUN_100050f0((int)puVar4,(byte *)s_Unable_to_write_to_program_file___10017918);
      return 0x10;
    }
    uVar3 = *(uint *)(puVar4 + 0x80);
    *(uint *)(puVar4 + 0x80) = uVar3 + *(uint *)(puVar4 + 0x10);
    *(undefined4 *)(puVar4 + 0x2e6c) = 0;
    *(uint *)(puVar4 + 0x84) =
         *(int *)(puVar4 + 0x84) + (uint)CARRY4(uVar3,*(uint *)(puVar4 + 0x10));
  }
  return 0;
}


