/* Module: hhupd.exe
   Function: FUN_0100408c
   Address: 0100408c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_0100408c(LPCSTR param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  HANDLE pvVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar2 = &DAT_0100b840;
  do {
    if (*piVar2 == 1) break;
    piVar2 = piVar2 + 6;
    iVar5 = iVar5 + 1;
  } while ((int)piVar2 < 0x100bc00);
  if (iVar5 == 0x28) {
    FUN_01003c23(DAT_0100aa78,0x4bb,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  }
  else {
    iVar3 = lstrcmpA(param_1,s__MEMCAB_0100a230);
    uVar1 = DAT_0100ade0;
    if (iVar3 == 0) {
      if (((param_2 & 0x100) == 0) && ((param_2 & 0xb) == 0)) {
        iVar3 = iVar5 * 0x18;
        (&DAT_0100b840)[iVar5 * 6] = 0;
        *(undefined4 *)(&DAT_0100b844 + iVar3) = 1;
        *(undefined4 *)(&DAT_0100b848 + iVar3) = uVar1;
        *(undefined4 *)(&DAT_0100b850 + iVar3) = DAT_0100ade4;
        *(undefined4 *)(&DAT_0100b84c + iVar3) = 0;
        return iVar5;
      }
    }
    else {
      pvVar4 = FUN_01003f86(param_1,param_2);
      *(HANDLE *)(&DAT_0100b854 + iVar5 * 0x18) = pvVar4;
      if (pvVar4 != (HANDLE)0xffffffff) {
        (&DAT_0100b840)[iVar5 * 6] = 0;
        *(undefined4 *)(&DAT_0100b844 + iVar5 * 0x18) = 0;
        return iVar5;
      }
    }
  }
  return -1;
}


