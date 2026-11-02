/* Module: sfcdi.dll
   Function: cddb_Submit
   Address: 5bf12d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cddb_Submit(struct inetsession_tag *,struct _cddbaccessinfo *,struct _sfcdtext
   *,struct _toc *) */

long cddb_Submit(inetsession_tag *param_1,_cddbaccessinfo *param_2,_sfcdtext *param_3,_toc *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  int local_224;
  int local_220;
  int local_21c;
  CHAR local_218 [9];
  undefined1 local_20f;
  uint local_20c [3];
  uchar local_200 [512];
  
                    /* 0x12d00  154
                       ?cddb_Submit@@YGJPAUinetsession_tag@@PAU_cddbaccessinfo@@PAU_sfcdtext@@PAU_toc@@@Z
                        */
  FUN_5bf311a0((int)param_1,&local_220,param_2 + 0x104,param_2 + 0x30c);
  if (local_220 == 0) {
    return -0x7ffb1f14;
  }
  FUN_5bf311e0(local_220,&local_224,(int *)(param_2 + 0x208),&DAT_5bf557e0);
  if (local_224 != 0) {
    FUN_5bf12a00((int)param_2,param_4,param_3);
    lstrlenA(&DAT_5bf66644);
    FUN_5bf12830(local_200,param_2,param_3);
    iVar1 = lstrlenA(&DAT_5bf66644);
    lVar2 = FUN_5bf31220(local_224,local_200,&DAT_5bf66644,iVar1);
    if (-1 < lVar2) {
      puVar4 = &DAT_5bf6e344;
      for (iVar1 = 8000; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      lVar2 = FUN_5bf312e0(local_224,0x5bf6e344,&local_21c,(int *)0x7d00);
      if (-1 < lVar2) {
        if (local_21c == 0) {
          lVar2 = -0x7ffb1f12;
        }
        else {
          local_20c[0] = DAT_5bf6e344 & 0xffffff;
          lstrcpynA(local_218,(LPCSTR)local_20c,10);
          local_20f = 0;
          uVar3 = FUN_5bf2cbc0(local_218,0);
          lVar2 = FUN_5bf113f0(uVar3);
        }
      }
      if (local_224 != 0) {
        FUN_5bf31270(local_224);
      }
      if (local_220 != 0) {
        FUN_5bf31260(local_220);
      }
    }
    return lVar2;
  }
  FUN_5bf31260(local_220);
  return -0x7ffb1f13;
}


