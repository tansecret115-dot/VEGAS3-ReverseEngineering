/* Module: pncrt.dll
   Function: raise
   Address: 7800df00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl raise(int _SigNum)

{
  DWORD DVar1;
  bool bVar2;
  int iVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  DWORD local_4;
  
                    /* 0xdf00  687  raise */
  iVar3 = _SigNum;
  bVar2 = false;
  pDVar4 = (DWORD *)_SigNum;
  switch(_SigNum) {
  case 2:
    puVar9 = &DAT_7804245c;
    bVar2 = true;
    pcVar8 = DAT_7804245c;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    pDVar4 = FUN_78009cc0();
    uVar5 = FUN_7800e110(_SigNum,pDVar4[0x14]);
    puVar9 = (undefined4 *)(uVar5 + 8);
    pcVar8 = (code *)*puVar9;
    break;
  case 0xf:
    puVar9 = &DAT_78042468;
    bVar2 = true;
    pcVar8 = DAT_78042468;
    break;
  case 0x15:
    puVar9 = &DAT_78042460;
    bVar2 = true;
    pcVar8 = DAT_78042460;
    break;
  case 0x16:
    puVar9 = &DAT_78042464;
    bVar2 = true;
    pcVar8 = DAT_78042464;
  }
  if (bVar2) {
    _lock(1);
  }
  if (pcVar8 == (code *)0x1) {
    if (!bVar2) {
      return 0;
    }
    _unlock(1);
    return 0;
  }
  if (pcVar8 == (code *)0x0) {
    if (bVar2) {
      _unlock(1);
    }
                    /* WARNING: Subroutine does not return */
    _exit(3);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    DVar1 = pDVar4[0x15];
    bVar10 = _SigNum == 8;
    pDVar4[0x15] = 0;
    _SigNum = DVar1;
    if (bVar10) {
      local_4 = pDVar4[0x16];
      pDVar4[0x16] = 0x8c;
      goto LAB_7800e033;
    }
  }
  else {
LAB_7800e033:
    if (iVar3 == 8) {
      if (DAT_7803f7e8 < DAT_7803f7ec + DAT_7803f7e8) {
        iVar7 = DAT_7803f7e8 * 0xc;
        iVar6 = DAT_7803f7e8;
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(pDVar4[0x14] + 8 + iVar7) = 0;
          iVar7 = iVar7 + 0xc;
        } while (iVar6 < DAT_7803f7ec + DAT_7803f7e8);
      }
      goto LAB_7800e078;
    }
  }
  *puVar9 = 0;
LAB_7800e078:
  if (bVar2) {
    _unlock(1);
  }
  if (iVar3 == 8) {
    (*pcVar8)(8,pDVar4[0x16]);
  }
  else {
    (*pcVar8)(iVar3);
    if ((iVar3 != 0xb) && (iVar3 != 4)) {
      return 0;
    }
  }
  pDVar4[0x15] = _SigNum;
  if (iVar3 == 8) {
    pDVar4[0x16] = local_4;
  }
  return 0;
}


