/* Module: sfcdi.dll
   Function: SfTAO_CheckDiscStatus
   Address: 5bf18370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfTAO_CheckDiscStatus(void *,char *,unsigned long *,int *,int *) */

long SfTAO_CheckDiscStatus(void *param_1,char *param_2,ulong *param_3,int *param_4,int *param_5)

{
  HCURSOR pHVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  ulong local_208;
  _mediainfo local_204 [4];
  int local_200;
  uint local_1e8;
  uchar local_1d8 [128];
  tCDR_ERRORDATA local_158 [70];
  int local_112;
  
                    /* 0x18370  131  ?SfTAO_CheckDiscStatus@@YGJPAXPADPAKPAH3@Z */
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  if (*(int *)param_1 != 0) {
    pHVar1 = (HCURSOR)FUN_5bf37b40(0x7f02);
    pHVar1 = SetCursor(pHVar1);
    cdr_GetMediaInfo(*(HSFCD__ **)param_1,local_204);
    cdr_GetErrorState(*(HSFCD__ **)param_1,local_158);
    if (pHVar1 != (HCURSOR)0x0) {
      SetCursor(pHVar1);
    }
  }
  iVar4 = 1;
  if (*(int *)param_1 == 0) {
    puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4e);
    _mbscpy(local_1d8,puVar2);
    uVar3 = 0;
    iVar4 = 0;
    goto LAB_5bf184d7;
  }
  if (((byte)local_204[0] & 1) == 0) {
    if (local_112 == 0x7b) {
      uVar3 = 0x139;
      goto LAB_5bf184c1;
    }
    puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xf4);
  }
  else if (((byte)local_204[0] & 2) == 0) {
    if ((((byte)local_204[0] & 8) == 0) || ((*(byte *)((int)param_1 + 4) & 1) != 0)) {
      if ((local_200 == 3) || ((*(byte *)((int)param_1 + 4) & 4) != 0)) {
        uVar3 = (uint)(((byte)local_204[0] & 0x20) == 0);
        local_208 = local_1e8;
        FUN_5bf16c90(local_1d8,local_1e8,0);
        goto LAB_5bf184d7;
      }
      puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xe8);
    }
    else {
      puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,0xe9);
    }
  }
  else {
    uVar3 = 0xf3;
LAB_5bf184c1:
    puVar2 = (uchar *)FUN_5bf283e0(DAT_5bf65fc4,uVar3);
  }
  iVar4 = 0;
  uVar3 = 0;
  _mbscpy(local_1d8,puVar2);
LAB_5bf184d7:
  *param_3 = local_208;
  *param_4 = uVar3;
  *param_5 = iVar4;
  _mbscpy((uchar *)param_2,local_1d8);
  return 0;
}


