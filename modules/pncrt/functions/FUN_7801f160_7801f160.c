/* Module: pncrt.dll
   Function: FUN_7801f160
   Address: 7801f160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7801f160(uint param_1,char *param_2,DWORD param_3)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int *piVar5;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char local_9;
  DWORD local_8;
  int *local_4;
  
  iVar8 = 0;
  if (param_3 != 0) {
    piVar5 = &__pioinfo + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 0x24;
    bVar2 = *(byte *)(iVar7 + 4 + (&__pioinfo)[(int)param_1 >> 5]);
    if ((bVar2 & 2) == 0) {
      pcVar10 = param_2;
      if (((bVar2 & 0x48) != 0) &&
         (cVar1 = *(char *)(iVar7 + (&__pioinfo)[(int)param_1 >> 5] + 5), cVar1 != '\n')) {
        *param_2 = cVar1;
        param_3 = param_3 - 1;
        pcVar10 = param_2 + 1;
        iVar8 = 1;
        *(undefined1 *)(iVar7 + 5 + *piVar5) = 10;
      }
      local_4 = piVar5;
      BVar3 = ReadFile(*(HANDLE *)(iVar7 + *piVar5),pcVar10,param_3,&local_8,(LPOVERLAPPED)0x0);
      if (BVar3 != 0) {
        iVar8 = iVar8 + local_8;
        bVar2 = *(byte *)(iVar7 + 4 + *piVar5);
        if ((bVar2 & 0x80) != 0) {
          if ((local_8 == 0) || (*param_2 != '\n')) {
            bVar2 = bVar2 & 0xfb;
          }
          else {
            bVar2 = bVar2 | 4;
          }
          *(byte *)(iVar7 + 4 + *piVar5) = bVar2;
          pcVar9 = param_2 + iVar8;
          pcVar10 = param_2;
          pcVar11 = param_2;
          if (param_2 < pcVar9) {
            while (cVar1 = *pcVar11, cVar1 != '\x1a') {
              if (cVar1 == '\r') {
                if (pcVar11 < pcVar9 + -1) {
                  if (pcVar11[1] == '\n') {
                    pcVar11 = pcVar11 + 2;
                    *pcVar10 = '\n';
                    goto LAB_7801f338;
                  }
                  *pcVar10 = '\r';
                  pcVar10 = pcVar10 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                else {
                  DVar4 = 0;
                  pcVar11 = pcVar11 + 1;
                  BVar3 = ReadFile(*(HANDLE *)(iVar7 + *local_4),&local_9,1,&local_8,
                                   (LPOVERLAPPED)0x0);
                  if (BVar3 == 0) {
                    DVar4 = GetLastError();
                  }
                  if ((DVar4 == 0) && (local_8 != 0)) {
                    if ((*(byte *)(iVar7 + 4 + *local_4) & 0x48) == 0) {
                      if ((pcVar10 == param_2) && (local_9 == '\n')) {
                        *pcVar10 = '\n';
                        goto LAB_7801f338;
                      }
                      FUN_780116c0(param_1,-1,1);
                      if (local_9 != '\n') goto LAB_7801f335;
                    }
                    else {
                      if (local_9 == '\n') {
                        *pcVar10 = '\n';
                        goto LAB_7801f338;
                      }
                      *pcVar10 = '\r';
                      pcVar10 = pcVar10 + 1;
                      *(char *)(iVar7 + 5 + *local_4) = local_9;
                    }
                  }
                  else {
LAB_7801f335:
                    *pcVar10 = '\r';
LAB_7801f338:
                    pcVar10 = pcVar10 + 1;
                  }
                }
              }
              else {
                *pcVar10 = cVar1;
                pcVar10 = pcVar10 + 1;
                pcVar11 = pcVar11 + 1;
              }
              if (pcVar9 <= pcVar11) {
                return (int)pcVar10 - (int)param_2;
              }
            }
            bVar2 = *(byte *)(iVar7 + 4 + *local_4);
            if ((bVar2 & 0x40) == 0) {
              *(byte *)(iVar7 + 4 + *local_4) = bVar2 | 2;
            }
          }
          iVar8 = (int)pcVar10 - (int)param_2;
        }
        return iVar8;
      }
      DVar4 = GetLastError();
      if (DVar4 == 5) {
        piVar5 = _errno();
        *piVar5 = 9;
        puVar6 = __doserrno();
        *puVar6 = 5;
        return -1;
      }
      if (DVar4 != 0x6d) {
        FUN_7800a870(DVar4);
        return -1;
      }
    }
  }
  return 0;
}


