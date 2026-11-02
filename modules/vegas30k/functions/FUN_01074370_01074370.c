/* Module: vegas30k.dll
   Function: FUN_01074370
   Address: 01074370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01074370(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x50);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x51),5,"CD001");
  *(undefined1 *)(param_1 + 0x56) = 1;
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x58),0x20,(char *)(param_1 + 0xbc2));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x78),0x20,(char *)(param_1 + 0xbe3));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x10e),0x80,(char *)(param_1 + 0xc04));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x18e),0x80,(char *)(param_1 + 0xc85));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x20e),0x80,(char *)(param_1 + 0xd06));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x28e),0x80,(char *)(param_1 + 0xd87));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x30e),0x25,(char *)(param_1 + 0xe08));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x333),0x25,(char *)(param_1 + 0xe2e));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x358),0x25,(char *)(param_1 + 0xe54));
  *(undefined4 *)(param_1 + 200) = 0x1000001;
  *(undefined4 *)(param_1 + 0xcc) = 0x1000001;
  *(undefined4 *)(param_1 + 0xd0) = 0x80800;
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xe7a),(char *)(param_1 + 0x37d));
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xe8a),(char *)(param_1 + 0x38e));
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xe9a),(char *)(param_1 + 0x39f));
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xeaa),(char *)(param_1 + 0x3b0));
  *(undefined1 *)(param_1 + 0x3c1) = 1;
  return;
}


