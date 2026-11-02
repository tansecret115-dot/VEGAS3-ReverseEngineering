/* Module: sfnetmedia.dll
   Function: FUN_0041fa00
   Address: 0041fa00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041fa00(HWND param_1,LPCSTR param_2)

{
  DWORD DVar1;
  BYTE *pBVar2;
  uchar *puVar3;
  uchar local_64 [100];
  
  if (*param_2 != '\0') {
    DVar1 = GetFileAttributesA(param_2);
    if (DVar1 != 0xffffffff) {
      if (DVar1 == 0) {
        pBVar2 = FUN_00419120(DAT_00441d60,0x113b);
        FUN_00417320(param_1,pBVar2);
        return;
      }
      local_64[0] = '\0';
      if ((DVar1 & 1) != 0) {
        puVar3 = FUN_00419120(DAT_00441d60,0x113c);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 2) != 0) {
        puVar3 = FUN_00419120(DAT_00441d60,0x113d);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 0x20) != 0) {
        puVar3 = FUN_00419120(DAT_00441d60,0x113e);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 4) != 0) {
        puVar3 = FUN_00419120(DAT_00441d60,0x1147);
        _mbscat(local_64,puVar3);
      }
      if ((DVar1 & 0x10) != 0) {
        puVar3 = FUN_00419120(DAT_00441d60,0x1148);
        _mbscat(local_64,puVar3);
      }
      if (local_64[0] != '\0') {
        pBVar2 = FUN_00419120(DAT_00441d60,0x113f);
        FUN_00417320(param_1,pBVar2);
      }
    }
  }
  return;
}


