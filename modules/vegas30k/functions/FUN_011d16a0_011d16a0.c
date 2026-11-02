/* Module: vegas30k.dll
   Function: FUN_011d16a0
   Address: 011d16a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011d16a0(int param_1)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  uint uVar3;
  int iVar4;
  CHAR *pCVar5;
  undefined4 *puVar6;
  tagWAVEOUTCAPSA local_34;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = FUN_011d1730();
    return uVar1;
  }
  MVar2 = waveOutGetDevCapsA(*(UINT_PTR *)(param_1 + 0x40),&local_34,0x34);
  if (MVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x154);
    pCVar5 = local_34.szPname;
    puVar6 = (undefined4 *)(param_1 + 0x50);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pCVar5;
      pCVar5 = pCVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    uVar3 = (~local_34.dwSupport >> 5 & 1) << 8 | uVar3 & 0xfffffeff;
    *(uint *)(param_1 + 0x154) = ((int)(uVar3 << 0x17) >> 0x18 ^ uVar3) & 0x80 ^ uVar3;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  return 0;
}


