/* Module: sfcdi.dll
   Function: FUN_5bf47f70
   Address: 5bf47f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf47f70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x72);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x72) = 1;
  FUN_5bf422d0((CHAR *)(param_1 + 0x73),5,"CD001");
  *(undefined1 *)(param_1 + 0x78) = 1;
  FUN_5bf422d0((CHAR *)(param_1 + 0x7a),0x20,(LPCSTR)(param_1 + 0x872));
  FUN_5bf422d0((CHAR *)(param_1 + 0x9a),0x20,(LPCSTR)(param_1 + 0x893));
  FUN_5bf422d0((CHAR *)(param_1 + 0x130),0x80,(LPCSTR)(param_1 + 0x8b4));
  FUN_5bf422d0((CHAR *)(param_1 + 0x1b0),0x80,(LPCSTR)(param_1 + 0x935));
  FUN_5bf422d0((CHAR *)(param_1 + 0x230),0x80,(LPCSTR)(param_1 + 0x9b6));
  FUN_5bf422d0((CHAR *)(param_1 + 0x2b0),0x80,(LPCSTR)(param_1 + 0xa37));
  iVar1 = FUN_5bf3e580(param_2,"COPYRIGH.TXT");
  if (iVar1 == 0) {
    FUN_5bf422d0((CHAR *)(param_1 + 0x330),0x25,(LPCSTR)(param_1 + 0xab8));
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x34c);
    puVar3 = (undefined4 *)(param_1 + 0x330);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0x20202020;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = 0x20;
    memmove((void *)(param_1 + 0x330),(void *)(iVar1 + 0x31),(uint)*(byte *)(iVar1 + 0x30));
  }
  iVar1 = FUN_5bf3e580(param_2,"ABSTRACT.TXT");
  if (iVar1 == 0) {
    FUN_5bf422d0((CHAR *)(param_1 + 0x355),0x25,(LPCSTR)(param_1 + 0xade));
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x34c);
    puVar3 = (undefined4 *)(param_1 + 0x355);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0x20202020;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = 0x20;
    memmove((void *)(param_1 + 0x355),(void *)(iVar1 + 0x31),(uint)*(byte *)(iVar1 + 0x30));
  }
  iVar1 = FUN_5bf3e580(param_2,"BIBLIO.TXT");
  if (iVar1 == 0) {
    FUN_5bf422d0((CHAR *)(param_1 + 0x37a),0x25,(LPCSTR)(param_1 + 0xb04));
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x34c);
    puVar3 = (undefined4 *)(param_1 + 0x37a);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0x20202020;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = 0x20;
    memmove((void *)(param_1 + 0x37a),(void *)(iVar1 + 0x31),(uint)*(byte *)(iVar1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0xea) = 0x1000001;
  *(undefined4 *)(param_1 + 0xee) = 0x1000001;
  *(undefined4 *)(param_1 + 0xf2) = 0x80800;
  FUN_5bf41bd0((ushort *)(param_1 + 0xb2a),(LPSTR)(param_1 + 0x39f));
  FUN_5bf41bd0((ushort *)(param_1 + 0xb3a),(LPSTR)(param_1 + 0x3b0));
  FUN_5bf41bd0((ushort *)(param_1 + 0xb4a),(LPSTR)(param_1 + 0x3c1));
  *(undefined1 *)(param_1 + 0x3d1) = 0;
  FUN_5bf41bd0((ushort *)(param_1 + 0xb5a),(LPSTR)(param_1 + 0x3d2));
  *(undefined1 *)(param_1 + 0x3e2) = 0;
  *(undefined1 *)(param_1 + 0x3e3) = 1;
  memmove((void *)(param_1 + 0x472),"CD-XA001",9);
  *(undefined2 *)(param_1 + 0x47a) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}


