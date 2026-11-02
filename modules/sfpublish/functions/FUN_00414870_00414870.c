/* Module: sfpublish.dll
   Function: FUN_00414870
   Address: 00414870
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00414870(void *this,char *param_1)

{
  char *pcVar1;
  LPCSTR lpsz;
  LPCSTR lpsz_00;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int local_c;
  undefined4 local_4;
  
  piVar3 = (int *)((int)this + 0x34);
  local_c = FUN_0041f050(piVar3,4,-1,-1,0x40000002);
  if (-1 < local_c) {
    local_4 = 0;
    pcVar1 = (char *)FUN_00420fe0(param_1,&local_4);
    if (pcVar1 == (char *)0x0) {
      local_c = -0x7ffb1f0b;
    }
    else {
      do {
        cVar2 = *pcVar1;
        lpsz = pcVar1;
        if (cVar2 == '\0') {
          if (-1 < local_c) {
            return local_c;
          }
          break;
        }
        do {
          if (cVar2 == '\r') break;
          lpsz = CharNextA(lpsz);
          cVar2 = *lpsz;
        } while (cVar2 != '\0');
        if (*lpsz == '\r') {
          lpsz_00 = CharNextA(lpsz);
          cVar2 = *lpsz_00;
        }
        else {
          cVar2 = *pcVar1;
          lpsz_00 = pcVar1;
          while ((cVar2 != '\0' && (cVar2 != '\n'))) {
            lpsz_00 = CharNextA(lpsz_00);
            cVar2 = *lpsz_00;
          }
          cVar2 = *lpsz_00;
          lpsz = lpsz_00;
        }
        if (cVar2 == '\n') {
          lpsz_00 = CharNextA(lpsz_00);
        }
        *lpsz = '\0';
        if (1 < (int)(lpsz + (1 - (int)pcVar1))) {
          param_1 = (char *)0x0;
          local_c = FUN_0041ec70(*piVar3,(size_t)(lpsz + (1 - (int)pcVar1)),(int *)&param_1);
          if (-1 < local_c) {
            uVar4 = 0xffffffff;
            do {
              pcVar6 = pcVar1;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar6 = pcVar1 + 1;
              cVar2 = *pcVar1;
              pcVar1 = pcVar6;
            } while (cVar2 != '\0');
            uVar4 = ~uVar4;
            pcVar1 = pcVar6 + -uVar4;
            pcVar6 = param_1;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar6 = *(undefined4 *)pcVar1;
              pcVar1 = pcVar1 + 4;
              pcVar6 = pcVar6 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar6 = *pcVar1;
              pcVar1 = pcVar1 + 1;
              pcVar6 = pcVar6 + 1;
            }
            local_c = FUN_0041da20((int *)*piVar3,-1,(int *)0x0,-1);
          }
        }
        pcVar1 = lpsz_00;
      } while (-1 < local_c);
    }
    FUN_0041ef80((int *)*piVar3);
    *piVar3 = 0;
  }
  return local_c;
}


