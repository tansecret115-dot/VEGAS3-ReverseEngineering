/* Module: sfcdi.dll
   Function: FUN_5bf40190
   Address: 5bf40190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf40190(undefined4 *param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  LPSTR pCVar3;
  uchar *puVar4;
  int *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28 [10];
  
  local_34 = (int *)0x0;
  iVar1 = FUN_5bf3e0c0(&local_34);
  if (-1 < iVar1) {
    iVar1 = FUN_5bf49420(local_28);
    if (-1 < iVar1) {
      iVar1 = FUN_5bf3cf20(local_28,2,local_34,0);
      if (-1 < iVar1) {
        iVar1 = local_34[0x13];
        pCVar3 = (LPSTR)(iVar1 + 0x893);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar3[0] = '\0';
          pCVar3[1] = '\0';
          pCVar3[2] = '\0';
          pCVar3[3] = '\0';
          pCVar3 = pCVar3 + 4;
        }
        *pCVar3 = '\0';
        lstrcpynA((LPSTR)(iVar1 + 0x893),param_2,0x21);
        *(undefined1 *)(iVar1 + 0x8b3) = 0;
        puVar4 = (uchar *)(iVar1 + 0x8b4);
        for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar4[0] = '\0';
          puVar4[1] = '\0';
          puVar4[2] = '\0';
          puVar4[3] = '\0';
          puVar4 = puVar4 + 4;
        }
        *puVar4 = '\0';
        FUN_5bf25750((uchar *)(iVar1 + 0x8b4),(BYTE *)"%s Volume Set Name");
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 0x2c) = 1;
        FUN_5bf3e970((int)local_34,*local_34);
        iVar1 = FUN_5bf3dc10((int)local_34,*local_34,"CDI","CDI",(uchar *)0x0,0,0,0,0,0x10,1,
                             (undefined4 *)0x0);
        if (-1 < iVar1) {
          iVar1 = FUN_5bf3dc10((int)local_34,*local_34,"EXT","EXT",(uchar *)0x0,0,0,0,0,0x10,1,
                               (undefined4 *)0x0);
          if (-1 < iVar1) {
            iVar1 = FUN_5bf3dc10((int)local_34,*local_34,(uchar *)"MPEGAV",(uchar *)"MPEGAV",
                                 (uchar *)0x0,0,0,0,0,0x10,1,(undefined4 *)0x0);
            if (-1 < iVar1) {
              iVar1 = FUN_5bf3dc10((int)local_34,*local_34,(uchar *)"SEGMENT",(uchar *)"SEGMENT",
                                   (uchar *)0x0,0,0,0,0,0x10,1,(undefined4 *)0x0);
              if (-1 < iVar1) {
                iVar1 = FUN_5bf3dc10((int)local_34,*local_34,"VCD","VCD",(uchar *)0x0,0,0,0,0,0x10,1
                                     ,&local_2c);
                if (-1 < iVar1) {
                  iVar1 = FUN_5bf3dc10((int)local_34,local_2c,(uchar *)"INFO.VCD",
                                       (uchar *)"INFO.VCD",(uchar *)0x0,0,0,0,0,0,1,&local_30);
                  if (-1 < iVar1) {
                    iVar1 = FUN_5bf3f840(local_30);
                    if (-1 < iVar1) {
                      iVar1 = FUN_5bf3dc10((int)local_34,local_2c,(uchar *)"ENTRIES.VCD",
                                           (uchar *)"ENTRIES.VCD",(uchar *)0x0,0,0,0,0,0,1,&local_30
                                          );
                      if (-1 < iVar1) {
                        iVar1 = FUN_5bf3f760(local_30);
                        if (-1 < iVar1) {
                          iVar1 = FUN_5bf3dc10((int)local_34,local_2c,(uchar *)"LOT.VCD",
                                               (uchar *)"LOT.VCD",(uchar *)0x0,0,0,0,0,0,1,&local_30
                                              );
                          if (-1 < iVar1) {
                            iVar1 = FUN_5bf3f690(local_30);
                            if (-1 < iVar1) {
                              iVar1 = FUN_5bf3dc10((int)local_34,local_2c,(uchar *)"PSD.VCD",
                                                   (uchar *)"PSD.VCD",(uchar *)0x0,0,0,0,0,0,1,
                                                   &local_30);
                              if (-1 < iVar1) {
                                FUN_5bf3f5d0(local_30);
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
  *param_1 = local_34;
  return;
}


