/* Module: sfnetmedia.dll
   Function: FUN_0040df90
   Address: 0040df90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040df90(uchar *param_1,uchar *param_2,undefined4 param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_a3c [4];
  undefined1 *local_a2c;
  undefined4 local_a28;
  undefined1 *local_a10;
  undefined4 local_a0c;
  uchar auStack_910 [256];
  uchar auStack_810 [16];
  undefined1 local_800 [1024];
  undefined1 local_400 [1020];
  uchar *puStack_4;
  
  puVar3 = local_a3c;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_a2c = local_400;
  local_a10 = local_800;
  *param_1 = '\0';
  *param_2 = '\0';
  local_a3c[0] = 0x3c;
  local_a28 = 0x400;
  local_a0c = 0x400;
  puVar1 = _mbsstr(param_4,(uchar *)"filename=");
  if (puVar1 != (uchar *)0x0) {
    lstrlenA("filename=");
  }
  puVar3 = local_a3c;
  uVar4 = 0x90000000;
  iVar2 = lstrlenA((LPCSTR)param_4);
  iVar2 = InternetCrackUrlA(param_4,iVar2,uVar4,puVar3);
  if (iVar2 == 0) {
    _mbscpy(auStack_810,param_4);
  }
  _splitpath((char *)auStack_810,(char *)0x0,(char *)0x0,(char *)auStack_910,(char *)&local_a10);
  _mbscpy(param_1,auStack_910);
  _mbscat(param_1,(uchar *)&local_a10);
  _mbscpy(param_2,puStack_4);
  FUN_00413260(param_2,0x104);
  _mbscat(param_2,param_1);
  return;
}


