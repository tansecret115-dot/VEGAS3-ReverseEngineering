/* Module: mcmpgdec.dll
   Function: open_MPEGin_Video_stream
   Address: 1000c6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * open_MPEGin_Video_stream(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
                    /* 0xc6a0  1  open_MPEGin_Video_stream */
  puVar5 = &DAT_10036580;
  for (iVar3 = 0xc1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar1 = malloc(0xd90);
  puVar5 = puVar1;
  for (iVar3 = 0x364; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar1[0x44] = 1;
  puVar1[0x1d1] = 0;
  puVar1[0xd] = puVar1;
  puVar1[5] = FUN_1000bfdc;
  puVar1[3] = &LAB_1000ca4c;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[7] = &LAB_1000c8a8;
  puVar1[8] = &LAB_1000c888;
  puVar1[0xf] = puVar1 + 0x1e2;
  uVar6 = FUN_10004a58();
  _DAT_100368e0 = (undefined4)uVar6;
  if ((uVar6 & 0x200) == 0) {
    if ((uVar6 & 0x20) == 0) {
      _DAT_100368f0 = 0;
    }
    else {
      _DAT_100368f0 = 1;
    }
  }
  else {
    _DAT_100368f0 = 2;
  }
  DAT_10036900 = &DAT_10036a90;
  _DAT_10036890 = DAT_1000c696;
  _DAT_10036894 = DAT_1000c69a;
  iVar3 = -0x180;
  do {
    if (iVar3 < 0) {
      DAT_10036900[iVar3] = 0;
    }
    else {
      uVar2 = (undefined1)iVar3;
      if (0xff < iVar3) {
        uVar2 = 0xff;
      }
      DAT_10036900[iVar3] = uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x280);
  FUN_1000af24();
  FUN_1000b0c8();
  FUN_1000b470();
  FUN_1000dd2c();
  puVar1[0x70] = 0;
  iVar4 = 0;
  puVar1[0x4f] = 0;
  iVar3 = 2;
  puVar1[0x53] = 0;
  puVar1[0x57] = 0;
  do {
    *(undefined4 *)((int)puVar1 + iVar4 + 0x130) = 0;
    *(undefined4 *)((int)puVar1 + iVar4 + 0x140) = 0;
    *(undefined4 *)((int)puVar1 + iVar4 + 0x150) = 0;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  puVar1[0xf] = puVar1 + 0x1e2;
  puVar1[0xe] = 4;
  puVar1[0x10] = 0x604;
  puVar1[0x15] = puVar1;
  puVar1[0x16] = 0;
  FUN_1000bfdc((int)puVar1,0,0x10000,(uint *)0x0,'\0');
  return puVar1;
}


