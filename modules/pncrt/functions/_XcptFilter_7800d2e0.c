/* Module: pncrt.dll
   Function: _XcptFilter
   Address: 7800d2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int *piVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;
  
                    /* 0xd2e0  85  _XcptFilter */
  pDVar4 = FUN_78009cc0();
  piVar5 = FUN_7800d4f0(_ExceptionNum,(int *)pDVar4[0x14]);
  if ((piVar5 == (int *)0x0) || (pcVar1 = (code *)piVar5[2], pcVar1 == (code *)0x0)) {
    LVar6 = UnhandledExceptionFilter(_ExceptionPtr);
    return LVar6;
  }
  if (pcVar1 == (code *)0x5) {
    piVar5[2] = 0;
    return 1;
  }
  if (pcVar1 == (code *)0x1) {
    return -1;
  }
  DVar2 = pDVar4[0x15];
  pDVar4[0x15] = (DWORD)_ExceptionPtr;
  if (piVar5[1] != 8) {
    piVar5[2] = 0;
    (*pcVar1)(piVar5[1]);
    pDVar4[0x15] = DVar2;
    return -1;
  }
  if (DAT_7803f7e8 < DAT_7803f7ec + DAT_7803f7e8) {
    iVar8 = DAT_7803f7e8 * 0xc;
    iVar7 = DAT_7803f7e8;
    do {
      iVar7 = iVar7 + 1;
      *(undefined4 *)(pDVar4[0x14] + 8 + iVar8) = 0;
      iVar8 = iVar8 + 0xc;
    } while (iVar7 < DAT_7803f7ec + DAT_7803f7e8);
  }
  iVar7 = *piVar5;
  DVar3 = pDVar4[0x16];
  if (iVar7 == -0x3fffff72) {
    pDVar4[0x16] = 0x83;
    (*pcVar1)(8,pDVar4[0x16]);
    pDVar4[0x16] = DVar3;
    pDVar4[0x15] = DVar2;
    return -1;
  }
  if (iVar7 == -0x3fffff70) {
    pDVar4[0x16] = 0x81;
    (*pcVar1)(8,pDVar4[0x16]);
    pDVar4[0x16] = DVar3;
    pDVar4[0x15] = DVar2;
    return -1;
  }
  if (iVar7 != -0x3fffff6f) {
    if (iVar7 == -0x3fffff6d) {
      pDVar4[0x16] = 0x85;
      (*pcVar1)(8,pDVar4[0x16]);
      pDVar4[0x16] = DVar3;
      pDVar4[0x15] = DVar2;
      return -1;
    }
    if (iVar7 != -0x3fffff73) {
      if (iVar7 != -0x3fffff71) {
        if (iVar7 == -0x3fffff6e) {
          pDVar4[0x16] = 0x8a;
        }
        (*pcVar1)(8,pDVar4[0x16]);
        pDVar4[0x16] = DVar3;
        pDVar4[0x15] = DVar2;
        return -1;
      }
      pDVar4[0x16] = 0x86;
      (*pcVar1)(8,pDVar4[0x16]);
      pDVar4[0x16] = DVar3;
      pDVar4[0x15] = DVar2;
      return -1;
    }
    pDVar4[0x16] = 0x82;
    (*pcVar1)(8,pDVar4[0x16]);
    pDVar4[0x16] = DVar3;
    pDVar4[0x15] = DVar2;
    return -1;
  }
  pDVar4[0x16] = 0x84;
  (*pcVar1)(8,pDVar4[0x16]);
  pDVar4[0x16] = DVar3;
  pDVar4[0x15] = DVar2;
  return -1;
}


