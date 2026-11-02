/* Module: sfcdi.dll
   Function: SfScsi_FindHost
   Address: 5bf0b520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_FindHost(char *,unsigned int) */

int SfScsi_FindHost(char *param_1,uint param_2)

{
  uint uVar1;
  BYTE *pBVar2;
  HSFSCSIADAPTER__ *pHVar3;
  int iVar4;
  uint uVar5;
  ulong local_128;
  uchar local_124 [80];
  uchar local_d4 [80];
  tSFSCSIINQUIRYDATA local_84 [132];
  
                    /* 0xb520  105  ?SfScsi_FindHost@@YGHPADI@Z */
  uVar1 = SfScsi_GetNumAdapters();
  if (uVar1 != 0) {
    pBVar2 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4d);
    FUN_5bf25750(local_d4,pBVar2);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        pHVar3 = SfScsi_OpenAdapter(uVar5,0x84,&local_128);
        if (pHVar3 != (HSFSCSIADAPTER__ *)0x0) {
          iVar4 = SfScsi_GetInquiryData(pHVar3,local_84);
          if (iVar4 != 0) {
            pBVar2 = (BYTE *)FUN_5bf283e0(DAT_5bf65fc4,0x9c4d);
            FUN_5bf25750(local_124,pBVar2);
            iVar4 = lstrcmpA((LPCSTR)local_d4,(LPCSTR)local_124);
            if (iVar4 == 0) {
              SfScsi_CloseAdapter(pHVar3);
              return uVar5;
            }
          }
          SfScsi_CloseAdapter(pHVar3);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
  }
  return -1;
}


