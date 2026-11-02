/* Module: rmme3260.dll
   Function: FUN_66237e10
   Address: 66237e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __fastcall FUN_66237e10(int param_1)

{
  byte bVar1;
  int iVar2;
  tagRECT local_14;
  
  if ((*(byte *)(param_1 + 0xcc) & 1) != 0) {
    _DAT_6626fcc4 = 1;
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x14))(param_1 + 0x14);
    if (iVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 0xcc) | 2;
    }
    else {
      FUN_6623a190(param_1);
      iVar2 = GetRgnBox(*(HRGN *)(param_1 + 0xe9),&local_14);
      if (iVar2 == 1) {
        bVar1 = *(byte *)(param_1 + 0xcc) | 2;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0xcc) & 0xfd;
      }
    }
    *(byte *)(param_1 + 0xcc) = bVar1;
  }
  return *(byte *)(param_1 + 0xcc) >> 1 & 1;
}


