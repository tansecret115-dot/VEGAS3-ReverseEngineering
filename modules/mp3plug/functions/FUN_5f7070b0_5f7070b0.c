/* Module: mp3plug.dll
   Function: FUN_5f7070b0
   Address: 5f7070b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f7070b0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  uint local_24;
  int local_20;
  
  iVar5 = 1;
  local_20 = 0;
  local_24 = 0x20;
  do {
    local_24 = (int)(local_24 + (0x7fffffff < local_24)) >> 1;
    if (0 < iVar5) {
      iVar4 = 1;
      iVar2 = local_20;
      do {
        fVar6 = (float10)fcos((float10)iVar4 * (float10)_DAT_5f760668 * (float10)local_24 *
                              (float10)_DAT_5f760670);
        iVar4 = iVar4 + 2;
        iVar3 = iVar2 + 4;
        *(float *)(&DAT_5f75a9f4 + iVar2) = (float)(fVar6 + fVar6);
        iVar2 = iVar3;
      } while (iVar3 < local_20 + iVar5 * 4);
    }
    iVar5 = iVar5 * 2;
    local_20 = local_20 + 0x40;
  } while (local_20 < 0x140);
  iVar5 = 0;
  do {
    iVar2 = iVar5 + 0x20;
    uVar1 = (&DAT_5f74ad64)[iVar5];
    (&DAT_5f74ad64)[iVar5] = (&DAT_5f74ad9c)[iVar5];
    *(undefined4 *)(iVar2 * 4 + 0x5f74ad1c) = uVar1;
    uVar1 = (&DAT_5f74ad68)[iVar5];
    (&DAT_5f74ad68)[iVar5] = (&DAT_5f74ad98)[iVar5];
    *(undefined4 *)(s_Normally__the_mean_threshold_of_a_5f74ac20 + iVar2 * 4 + 0xf8) = uVar1;
    uVar1 = (&DAT_5f74ad6c)[iVar5];
    (&DAT_5f74ad6c)[iVar5] = (&DAT_5f74ad94)[iVar5];
    *(undefined4 *)(s_Normally__the_mean_threshold_of_a_5f74ac20 + iVar2 * 4 + 0xf4) = uVar1;
    uVar1 = (&DAT_5f74ad70)[iVar5];
    (&DAT_5f74ad70)[iVar5] = (&DAT_5f74ad90)[iVar5];
    *(undefined4 *)(s_Normally__the_mean_threshold_of_a_5f74ac20 + iVar2 * 4 + 0xf0) = uVar1;
    uVar1 = (&DAT_5f74ad74)[iVar5];
    (&DAT_5f74ad74)[iVar5] = (&DAT_5f74ad8c)[iVar5];
    *(undefined4 *)(s_Normally__the_mean_threshold_of_a_5f74ac20 + iVar2 * 4 + 0xec) = uVar1;
    uVar1 = (&DAT_5f74ad78)[iVar5];
    (&DAT_5f74ad78)[iVar5] = (&DAT_5f74ad88)[iVar5];
    *(undefined4 *)(s_Normally__the_mean_threshold_of_a_5f74ac20 + iVar2 * 4 + 0xe8) = uVar1;
    uVar1 = (&DAT_5f74ad7c)[iVar5];
    (&DAT_5f74ad7c)[iVar5] = (&DAT_5f74ad84)[iVar5];
    *(undefined4 *)(s_Normally__the_mean_threshold_of_a_5f74ac20 + iVar2 * 4 + 0xe4) = uVar1;
    iVar5 = iVar2;
  } while (iVar2 < 0x200);
  iVar5 = 0;
LAB_5f70722c:
  iVar2 = 0;
  do {
    (&DAT_5f74ad20)[iVar5 + iVar2] = _DAT_5f760678 * (float)(&DAT_5f74ad20)[iVar5 + iVar2];
    do {
      iVar4 = iVar2 + 1;
      if (0x1f < iVar4) {
LAB_5f707290:
        iVar5 = iVar5 + 0x20;
        if (0x1ff < iVar5) {
          return;
        }
        goto LAB_5f70722c;
      }
      if (iVar4 != 0x10) {
        (&DAT_5f74ad20)[iVar5 + iVar4] = _DAT_5f76067c * (float)(&DAT_5f74ad20)[iVar5 + iVar4];
      }
      iVar2 = iVar2 + 2;
      if (0x1f < iVar2) goto LAB_5f707290;
    } while (iVar2 == 0x10);
  } while( true );
}


