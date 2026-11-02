/* Module: vegas30k.dll
   Function: FUN_0101eb00
   Address: 0101eb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0101eb00(undefined4 param_1,LPCSTR param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  uchar *puVar3;
  uchar local_64 [100];
  
  if (*param_2 != '\0') {
    DVar1 = GetFileAttributesA(param_2);
    if (DVar1 != 0xffffffff) {
      if (DVar1 == 0) {
        uVar2 = _SfGetString2_8(DAT_0120e5c8,0x113b);
        SfMEditPrintF(param_1,uVar2,DVar1);
        return;
      }
      local_64[0] = '\0';
      if ((DVar1 & 1) != 0) {
        puVar3 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x113c);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 2) != 0) {
        puVar3 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x113d);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 0x20) != 0) {
        puVar3 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x113e);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 4) != 0) {
        puVar3 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x1147);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 0x10) != 0) {
        puVar3 = (uchar *)_SfGetString2_8(DAT_0120e5c8,0x1148);
        _mbscat(local_64,puVar3);
      }
      if (local_64[0] != '\0') {
        puVar3 = local_64;
        uVar2 = _SfGetString2_8(DAT_0120e5c8,0x113f);
        SfMEditPrintF(param_1,uVar2,puVar3);
      }
    }
  }
  return;
}


