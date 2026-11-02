/* Module: vegas30k.dll
   Function: SfVcdiCreateDirectoryTree
   Address: 01012210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVcdiCreateDirectoryTree(struct tagDIR_TREE * *,char *) */

long SfVcdiCreateDirectoryTree(tagDIR_TREE **param_1,char *param_2)

{
  LPSTR lpString1;
  int iVar1;
  long lVar2;
  int iVar3;
  tagDIR_ENTRY **unaff_EDI;
  LPSTR pCVar4;
  undefined4 *puVar5;
  tagDIR_TREE *ptVar6;
  undefined4 local_30;
  tagDIR_ENTRY *local_2c;
  tagFILE_SYSTEM_CAPS local_28 [40];
  
                    /* 0x12210  507  ?SfVcdiCreateDirectoryTree@@YGJPAPAUtagDIR_TREE@@PAD@Z */
  ptVar6 = (tagDIR_TREE *)0x0;
  lVar2 = DtCreateDirectoryTree((tagDIR_TREE **)&stack0xffffffcc);
  if (-1 < lVar2) {
    lVar2 = VCD_GetFileSystemCaps(local_28);
    if (-1 < lVar2) {
      lVar2 = SfCdiInitializeFileSystem(local_28,2,ptVar6,(HWND__ *)0x0);
      if (-1 < lVar2) {
        iVar1 = *(int *)(ptVar6 + 0x4c);
        lpString1 = (LPSTR)(iVar1 + 0x893);
        pCVar4 = lpString1;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          pCVar4[0] = '\0';
          pCVar4[1] = '\0';
          pCVar4[2] = '\0';
          pCVar4[3] = '\0';
          pCVar4 = pCVar4 + 4;
        }
        *pCVar4 = '\0';
        lstrcpynA(lpString1,param_2,0x21);
        *(undefined1 *)(iVar1 + 0x8b3) = 0;
        puVar5 = (undefined4 *)(iVar1 + 0x8b4);
        for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined1 *)puVar5 = 0;
        SfPrintF((undefined4 *)(iVar1 + 0x8b4),"%s Volume Set Name",lpString1);
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 0x2c) = 1;
        DtDeleteDirEntry(ptVar6,*(tagDIR_ENTRY **)ptVar6);
        lVar2 = DtAllocateDirectoryEntry
                          (ptVar6,*(tagDIR_ENTRY **)ptVar6,"CDI","CDI",(char *)0x0,0,0x1000000000,1,
                           0,unaff_EDI);
        if (-1 < lVar2) {
          lVar2 = DtAllocateDirectoryEntry
                            (ptVar6,*(tagDIR_ENTRY **)ptVar6,"EXT","EXT",(char *)0x0,0,0x1000000000,
                             1,0,(tagDIR_ENTRY **)ptVar6);
          if (-1 < lVar2) {
            lVar2 = DtAllocateDirectoryEntry
                              (ptVar6,*(tagDIR_ENTRY **)ptVar6,"MPEGAV","MPEGAV",(char *)0x0,0,
                               0x1000000000,1,0,(tagDIR_ENTRY **)ptVar6);
            if (-1 < lVar2) {
              lVar2 = DtAllocateDirectoryEntry
                                (ptVar6,*(tagDIR_ENTRY **)ptVar6,"SEGMENT","SEGMENT",(char *)0x0,0,
                                 0x1000000000,1,0,(tagDIR_ENTRY **)ptVar6);
              if (-1 < lVar2) {
                lVar2 = DtAllocateDirectoryEntry
                                  (ptVar6,*(tagDIR_ENTRY **)ptVar6,"VCD","VCD",(char *)0x0,0,
                                   0x1000000000,1,(int)&local_2c,(tagDIR_ENTRY **)ptVar6);
                if (-1 < lVar2) {
                  lVar2 = DtAllocateDirectoryEntry
                                    (ptVar6,local_2c,"INFO.VCD","INFO.VCD",(char *)0x0,0,0,1,
                                     (int)&local_30,(tagDIR_ENTRY **)ptVar6);
                  if (-1 < lVar2) {
                    lVar2 = FUN_010118c0(local_30);
                    if (-1 < lVar2) {
                      lVar2 = DtAllocateDirectoryEntry
                                        (ptVar6,local_2c,"ENTRIES.VCD","ENTRIES.VCD",(char *)0x0,0,0
                                         ,1,(int)&local_30,(tagDIR_ENTRY **)ptVar6);
                      if (-1 < lVar2) {
                        lVar2 = FUN_010117e0(local_30);
                        if (-1 < lVar2) {
                          lVar2 = DtAllocateDirectoryEntry
                                            (ptVar6,local_2c,"LOT.VCD","LOT.VCD",(char *)0x0,0,0,1,
                                             (int)&local_30,(tagDIR_ENTRY **)ptVar6);
                          if (-1 < lVar2) {
                            lVar2 = FUN_01011710(local_30);
                            if (-1 < lVar2) {
                              lVar2 = DtAllocateDirectoryEntry
                                                (ptVar6,local_2c,"PSD.VCD","PSD.VCD",(char *)0x0,0,0
                                                 ,1,(int)&local_30,(tagDIR_ENTRY **)ptVar6);
                              if (-1 < lVar2) {
                                lVar2 = FUN_01011650(local_30);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = ptVar6;
  return lVar2;
}


