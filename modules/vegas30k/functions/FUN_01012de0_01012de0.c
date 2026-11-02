/* Module: vegas30k.dll
   Function: FUN_01012de0
   Address: 01012de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01012de0(int param_1,tagDIR_ENTRY *param_2)

{
  tagDIR_ENTRY *ptVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0x72);
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x72) = 1;
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x73),5,"CD001");
  *(undefined1 *)(param_1 + 0x78) = 1;
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x7a),0x20,(char *)(param_1 + 0x872));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x9a),0x20,(char *)(param_1 + 0x893));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x130),0x80,(char *)(param_1 + 0x8b4));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x1b0),0x80,(char *)(param_1 + 0x935));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x230),0x80,(char *)(param_1 + 0x9b6));
  ISO9660_achCpyPadSpace((char *)(param_1 + 0x2b0),0x80,(char *)(param_1 + 0xa37));
  ptVar1 = DtGetLocalDirEntry(param_2,"COPYRIGH.TXT");
  if (ptVar1 == (tagDIR_ENTRY *)0x0) {
    ISO9660_achCpyPadSpace((char *)(param_1 + 0x330),0x25,(char *)(param_1 + 0xab8));
  }
  else {
    iVar2 = *(int *)(ptVar1 + 0x34c);
    puVar4 = (undefined4 *)(param_1 + 0x330);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0x20202020;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = 0x20;
    memmove((void *)(param_1 + 0x330),(void *)(iVar2 + 0x31),(uint)*(byte *)(iVar2 + 0x30));
  }
  ptVar1 = DtGetLocalDirEntry(param_2,"ABSTRACT.TXT");
  if (ptVar1 == (tagDIR_ENTRY *)0x0) {
    ISO9660_achCpyPadSpace((char *)(param_1 + 0x355),0x25,(char *)(param_1 + 0xade));
  }
  else {
    iVar2 = *(int *)(ptVar1 + 0x34c);
    puVar4 = (undefined4 *)(param_1 + 0x355);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0x20202020;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = 0x20;
    memmove((void *)(param_1 + 0x355),(void *)(iVar2 + 0x31),(uint)*(byte *)(iVar2 + 0x30));
  }
  ptVar1 = DtGetLocalDirEntry(param_2,"BIBLIO.TXT");
  if (ptVar1 == (tagDIR_ENTRY *)0x0) {
    ISO9660_achCpyPadSpace((char *)(param_1 + 0x37a),0x25,(char *)(param_1 + 0xb04));
  }
  else {
    iVar2 = *(int *)(ptVar1 + 0x34c);
    puVar4 = (undefined4 *)(param_1 + 0x37a);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0x20202020;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = 0x20;
    memmove((void *)(param_1 + 0x37a),(void *)(iVar2 + 0x31),(uint)*(byte *)(iVar2 + 0x30));
  }
  *(undefined4 *)(param_1 + 0xea) = 0x1000001;
  *(undefined4 *)(param_1 + 0xee) = 0x1000001;
  *(undefined4 *)(param_1 + 0xf2) = 0x80800;
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xb2a),(char *)(param_1 + 0x39f));
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xb3a),(char *)(param_1 + 0x3b0));
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xb4a),(char *)(param_1 + 0x3c1));
  *(undefined1 *)(param_1 + 0x3d1) = 0;
  ISO9660_BuildLongDateTime((_SYSTEMTIME *)(param_1 + 0xb5a),(char *)(param_1 + 0x3d2));
  *(undefined1 *)(param_1 + 0x3e2) = 0;
  *(undefined1 *)(param_1 + 0x3e3) = 1;
  memmove((void *)(param_1 + 0x472),"CD-XA001",9);
  *(undefined2 *)(param_1 + 0x47a) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}


