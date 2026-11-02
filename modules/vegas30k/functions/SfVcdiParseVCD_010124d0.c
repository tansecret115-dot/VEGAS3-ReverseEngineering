/* Module: vegas30k.dll
   Function: SfVcdiParseVCD
   Address: 010124d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfVcdiParseVCD(struct tagDIR_ENTRY *) */

long SfVcdiParseVCD(tagDIR_ENTRY *param_1)

{
  tagDIR_ENTRY *lpString1;
  int iVar1;
  long lVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  
                    /* 0x124d0  509  ?SfVcdiParseVCD@@YGJPAUtagDIR_ENTRY@@@Z */
  lpString1 = param_1 + 0x110;
  iVar1 = lstrcmpiA((LPCSTR)lpString1,"INFO.VCD");
  if (iVar1 == 0) {
    lVar2 = FUN_010118c0(param_1);
    return lVar2;
  }
  iVar1 = lstrcmpiA((LPCSTR)lpString1,"ENTRIES.VCD");
  if (iVar1 == 0) {
    lVar2 = FUN_010117e0(param_1);
    return lVar2;
  }
  iVar1 = lstrcmpiA((LPCSTR)lpString1,"LOT.VCD");
  if (iVar1 == 0) {
    lVar2 = FUN_01011710(param_1);
    return lVar2;
  }
  iVar1 = lstrcmpiA((LPCSTR)lpString1,"PSD.VCD");
  if (iVar1 == 0) {
    lVar2 = FUN_01011650(param_1);
    return lVar2;
  }
  iVar1 = lstrcmpiA((LPCSTR)(*(int *)(param_1 + 0x21c) + 0x110),"MPEGAV");
  if (iVar1 == 0) {
    lVar2 = FUN_01011570(param_1);
    return lVar2;
  }
  hMem = GlobalAlloc(0x42,4);
  puVar3 = GlobalLock(hMem);
  if (puVar3 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  *puVar3 = 0xd;
  *(undefined4 **)(param_1 + 0x350) = puVar3;
  return 0;
}


