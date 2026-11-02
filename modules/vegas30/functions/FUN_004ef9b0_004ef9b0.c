/* Module: vegas30.exe
   Function: FUN_004ef9b0
   Address: 004ef9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_004ef9b0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *_Memory;
  LPSTR pCVar4;
  LPCSTR pCVar5;
  undefined4 unaff_ESI;
  undefined **ppuVar6;
  LPCSTR lpsz;
  char *pcVar7;
  size_t unaff_EDI;
  CHAR *pCVar8;
  int *piVar9;
  int *piVar10;
  int iStack_34;
  int local_24;
  int local_20 [8];
  
  local_20[0] = 0;
  _SfList_CreateExZ_32(local_20,4,0xffffffff);
  if (local_20[0] != 0) {
    ppuVar6 = &PTR_DAT_0063ef78;
    do {
      FUN_004efb70();
      ppuVar6 = ppuVar6 + 1;
    } while (ppuVar6 < &DAT_0063ef94);
    FUN_004efb70();
    piVar2 = DAT_0064b510;
    local_24 = 0;
    iVar3 = (**(code **)*DAT_0064b510)();
    if ((-1 < iVar3) && (&local_24 != (int *)0x0)) {
      (**(code **)(local_24 + 0x18))(&local_24);
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,0,0,0x10,0);
      if (-1 < iVar3) {
        piVar10 = &local_24;
        piVar9 = (int *)0x0;
        local_24 = 0;
        iVar3 = (*pcRam00000028)(&local_24,0,&stack0xffffffd8,0,piVar10);
        if ((-1 < iVar3) && (_Memory = calloc(1,unaff_EDI), _Memory != (char *)0x0)) {
          iVar3 = (**(code **)(*piVar9 + 0x28))(piVar9,_Memory,&stack0xffffffc4,0,0);
          if ((-1 < iVar3) && (iStack_34 = 0, pcVar7 = _Memory, 0 < (int)piVar2)) {
            do {
              cVar1 = *pcVar7;
              while (cVar1 != '\0') {
                lpsz = pcVar7 + 1;
                pCVar8 = &stack0xffffffd4;
                cVar1 = pcVar7[1];
                while ((cVar1 != '\0' && (cVar1 != ';'))) {
                  pCVar4 = CharNextA(lpsz);
                  for (pCVar5 = lpsz; pCVar5 != pCVar4; pCVar5 = pCVar5 + 1) {
                    *pCVar8 = *pCVar5;
                    pCVar8 = pCVar8 + 1;
                  }
                  lpsz = CharNextA(lpsz);
                  cVar1 = *lpsz;
                }
                *pCVar8 = '\0';
                iVar3 = _mbscmp(&stack0xffffffd4,".*");
                if (iVar3 != 0) {
                  FUN_004efb70(piVar10,&stack0xffffffd4);
                }
                pcVar7 = lpsz + 1;
                cVar1 = lpsz[1];
              }
              iStack_34 = iStack_34 + 1;
            } while (iStack_34 < (int)piVar2);
          }
          free(_Memory);
        }
        (**(code **)(*piVar9 + 8))(piVar9);
      }
    }
    return unaff_ESI;
  }
  return 0;
}


