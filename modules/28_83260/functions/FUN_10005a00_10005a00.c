/* Module: 28_83260.dll
   Function: FUN_10005a00
   Address: 10005a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10005a00(void *this,float *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_94 [36];
  
  puVar4 = (undefined4 *)((int)this + 0xa28);
  puVar5 = local_94;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_94;
  puVar5 = (undefined4 *)((int)this + 0xa3c);
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_2 == 1) {
    _DAT_1000caa8 = *(float *)((int)this + 0xb48);
    _DAT_1000caac = *(float *)((int)this + 0xb4c);
    _DAT_1000cab8 = *(float *)((int)this + 0xb50);
    _DAT_1000cabc = *(float *)((int)this + 0xb54);
    _DAT_1000cab0 = *(float *)((int)this + 0xb58);
    _DAT_1000cab4 = *(float *)((int)this + 0xb5c);
    DAT_1000cac4 = *(float *)((int)this + 0xb60);
    _DAT_1000cadc = *(float *)((int)this + 0xb64);
    _DAT_1000cac0 = *(float *)((int)this + 0xb68);
    _DAT_1000cc28 = *(float *)((int)this + 0xb6c);
    _DAT_1000cc30 = *(float *)((int)this + 0xb70);
    _DAT_1000cc2c = *(float *)((int)this + 0xb74);
    _DAT_1000cc7c = *(float *)((int)this + 0xb78);
    _DAT_1000cc38 = *(float *)((int)this + 0xb7c);
    _DAT_1000cc8c = *(float *)((int)this + 0xb80);
    _DAT_1000cc84 = *(float *)((int)this + 0xb84);
    _DAT_1000cbe8 = *(float *)((int)this + 0xb88);
    _DAT_1000cbe0 = *(float *)((int)this + 0xb8c);
    _DAT_1000cbfc = *(float *)((int)this + 0xb90);
    _DAT_1000cc34 = *(float *)((int)this + 0xb94);
    _DAT_1000cc88 = *(float *)((int)this + 0xb98);
    _DAT_1000cc80 = *(float *)((int)this + 0xb9c);
    _DAT_1000cbe4 = *(float *)((int)this + 0xba0);
    _DAT_1000cbdc = *(float *)((int)this + 0xba4);
    _DAT_1000cbf8 = *(float *)((int)this + 0xba8);
    _DAT_1000cbf0 = *(float *)((int)this + 0xbac);
    _DAT_1000cc10 = *(float *)((int)this + 0xbb0);
    _DAT_1000cc08 = *(float *)((int)this + 0xbb4);
    _DAT_1000cc24 = *(float *)((int)this + 3000);
    _DAT_1000cbd8 = *(float *)((int)this + 0xbbc);
    _DAT_1000cbf4 = *(float *)((int)this + 0xbc0);
    _DAT_1000cbec = *(float *)((int)this + 0xbc4);
    _DAT_1000cc0c = *(float *)((int)this + 0xbc8);
    _DAT_1000cc04 = *(float *)((int)this + 0xbcc);
    _DAT_1000cc20 = *(float *)((int)this + 0xbd0);
    _DAT_1000cc18 = *(float *)((int)this + 0xbd4);
  }
  iVar3 = 5;
  pfVar2 = (float *)((int)this + 0xab0);
  do {
    iVar3 = iVar3 + -1;
    fVar1 = -(_DAT_1000cc24 * pfVar2[-1] +
             pfVar2[-0x13] * _DAT_1000cc30 +
             pfVar2[-0x12] * _DAT_1000cc2c +
             pfVar2[-0x11] * _DAT_1000cc7c +
             pfVar2[-0x10] * _DAT_1000cc38 +
             pfVar2[-0x16] * _DAT_1000cadc +
             pfVar2[-0x17] * DAT_1000cac4 +
             pfVar2[-0x14] * _DAT_1000cc28 +
             pfVar2[-0x15] * _DAT_1000cac0 +
             pfVar2[-0x19] * _DAT_1000cab0 +
             pfVar2[-0x18] * _DAT_1000cab4 +
             pfVar2[-0x1b] * _DAT_1000cab8 +
             pfVar2[-0x1a] * _DAT_1000cabc +
             pfVar2[-0x1c] * _DAT_1000caac +
             pfVar2[-0x1d] * _DAT_1000caa8 +
             _DAT_1000cbd8 * *pfVar2 +
             pfVar2[-6] * _DAT_1000cbdc +
             pfVar2[-7] * _DAT_1000cbe4 +
             pfVar2[-4] * _DAT_1000cbf0 +
             pfVar2[-5] * _DAT_1000cbf8 +
             pfVar2[-3] * _DAT_1000cc10 +
             pfVar2[-2] * _DAT_1000cc08 +
             pfVar2[-0xc] * _DAT_1000cbe0 +
             pfVar2[1] * _DAT_1000cbf4 +
             pfVar2[-0xd] * _DAT_1000cbe8 +
             pfVar2[2] * _DAT_1000cbec +
             pfVar2[-0xe] * _DAT_1000cc84 +
             pfVar2[3] * _DAT_1000cc0c +
             pfVar2[-0xf] * _DAT_1000cc8c +
             pfVar2[5] * _DAT_1000cc20 +
             pfVar2[-9] * _DAT_1000cc88 +
             pfVar2[4] * _DAT_1000cc04 +
             pfVar2[-8] * _DAT_1000cc80 +
             pfVar2[-0xb] * _DAT_1000cbfc + pfVar2[6] * _DAT_1000cc18 + pfVar2[-10] * _DAT_1000cc34)
    ;
    *param_1 = fVar1;
    pfVar2[-0x1e] = fVar1;
    pfVar2 = pfVar2 + -1;
    param_1 = param_1 + 1;
  } while (iVar3 != 0);
  return;
}


