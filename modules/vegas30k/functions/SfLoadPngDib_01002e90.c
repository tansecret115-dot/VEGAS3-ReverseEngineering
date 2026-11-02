/* Module: vegas30k.dll
   Function: SfLoadPngDib
   Address: 01002e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfLoadPngDib(struct HSFLANG__ *,char const *,unsigned long,struct
   tagBITMAPINFOHEADER * *) */

long SfLoadPngDib(HSFLANG__ *param_1,char *param_2,ulong param_3,tagBITMAPINFOHEADER **param_4)

{
  size_t sVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  FILE **ppFVar7;
  tagBITMAPINFOHEADER *local_40;
  undefined4 local_3c;
  ulong local_38;
  LPVOID local_34;
  FILE *local_30 [12];
  
  ppFVar7 = local_30;
                    /* 0x2e90  410  ?SfLoadPngDib@@YGJPAUHSFLANG__@@PBDKPAPAUtagBITMAPINFOHEADER@@@Z
                        */
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppFVar7 = (FILE *)0x0;
    ppFVar7 = ppFVar7 + 1;
  }
  local_40 = (tagBITMAPINFOHEADER *)0x0;
  if ((param_3 & 1) != 0) {
    if (param_2 == (char *)0x0) {
      return -0x7ff8ffa9;
    }
    iVar5 = -0x7ffb1ff9;
    local_30[0] = fopen(param_2,"rb");
    if (local_30[0] != (FILE *)0x0) {
      iVar5 = FUN_01002a70(local_30);
      if (-1 < iVar5) {
        FUN_01126ee0(local_30[1],local_30[0]);
        lVar6 = -0x7ffb1ff5;
        sVar1 = fread(&local_3c,1,8,local_30[0]);
        if (sVar1 == 8) {
          iVar5 = FUN_01126cf0(&local_3c,8);
          if (iVar5 != 0) {
            lVar6 = FUN_01002ad0(local_30,&local_40);
          }
        }
        FUN_01002390(local_30);
        fclose(local_30[0]);
        *param_4 = local_40;
        return lVar6;
      }
    }
    goto LAB_01003063;
  }
  iVar5 = -0x7ffb1ff2;
  param_3 = 0;
  hResData = (HGLOBAL)_SfLoadResourceCustom_16(param_1,param_2,0x20,&param_3);
  if (hResData == (HGLOBAL)0x0) {
    hResData = (HGLOBAL)_SfLoadResourceCustom_16(param_1,param_2,"BINARY",&param_3);
    if (hResData != (HGLOBAL)0x0) goto LAB_01002fbe;
  }
  else {
LAB_01002fbe:
    pvVar2 = LockResource(hResData);
    if (pvVar2 != (LPVOID)0x0) {
      if (param_3 != 0) {
        iVar5 = -0x7ffb1ff5;
        uVar3 = param_3;
        if (8 < param_3) {
          uVar3 = 8;
        }
        iVar4 = FUN_01126cf0(pvVar2,uVar3);
        if (iVar4 != 0) {
          iVar5 = FUN_01002a70(local_30);
          if (-1 < iVar5) {
            local_3c = 8;
            local_38 = param_3;
            local_34 = pvVar2;
            FUN_01126fc0(local_30[1],&local_3c,&LAB_01003080);
            lVar6 = FUN_01002ad0(local_30,&local_40);
            FUN_01002390(local_30);
            *param_4 = local_40;
            return lVar6;
          }
        }
      }
      goto LAB_01003063;
    }
  }
  GetLastError();
LAB_01003063:
  *param_4 = local_40;
  return iVar5;
}


