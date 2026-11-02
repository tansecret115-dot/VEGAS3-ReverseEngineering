/* Module: vegas30.exe
   Function: FUN_00502a10
   Address: 00502a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00502a10(int param_1,uchar *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  uchar local_d00 [256];
  uchar local_c00 [1024];
  uchar local_800 [1024];
  uchar local_400 [1024];
  
  if ((DAT_0064b584 == (uint *)0x0) &&
     (uVar2 = _SfList_CreateExZ_32(&DAT_0064b584,4,0x10,0x10,2,0,0,0), DAT_0064b584 == (uint *)0x0))
  {
    return uVar2;
  }
  uVar1 = *DAT_0064b584;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      puVar5 = *(uchar **)(DAT_0064b584[2] + uVar4 * 4);
      iVar3 = lstrcmpiA((LPCSTR)puVar5,(LPCSTR)param_2);
      if (iVar3 == 0) {
        _mbscpy(puVar5,param_2);
        _mbscpy(puVar5 + 0x100,(uchar *)(param_1 + 0x810));
        _mbscpy(puVar5 + 0x500,(uchar *)(param_1 + 0x410));
        _mbscpy(puVar5 + 0x900,(uchar *)(param_1 + 0x10));
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  puVar5 = local_d00;
  for (iVar3 = 0x340; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5 = puVar5 + 4;
  }
  _mbscpy(local_d00,param_2);
  _mbscpy(local_c00,(uchar *)(param_1 + 0x810));
  _mbscpy(local_800,(uchar *)(param_1 + 0x410));
  _mbscpy(local_400,(uchar *)(param_1 + 0x10));
  uVar2 = _SfList_AllocAndInsertItem_20(DAT_0064b584,local_d00,0xd00,0xffffffff,0);
  return uVar2;
}


