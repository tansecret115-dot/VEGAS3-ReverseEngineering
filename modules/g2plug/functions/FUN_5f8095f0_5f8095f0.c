/* Module: g2plug.dll
   Function: FUN_5f8095f0
   Address: 5f8095f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f8095f0(int *param_1,uint param_2,int *param_3,uint *param_4)

{
  uchar uVar1;
  int iVar2;
  uchar *lpsz;
  uchar *puVar3;
  uint uVar4;
  uchar local_100 [256];
  
  *param_3 = *param_1;
  puVar3 = (uchar *)((int)param_1 + 0x227);
  *param_4 = param_2;
  if (*puVar3 != '\0') {
    iVar2 = _ismbcspace((int)(char)*puVar3);
    lpsz = puVar3;
    while (iVar2 != 0) {
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      iVar2 = _ismbcspace((int)(char)*lpsz);
    }
    iVar2 = _ismbcdigit((int)(char)*lpsz);
    if (iVar2 != 0) {
      _mbscpy(local_100,puVar3);
      puVar3 = local_100;
      uVar1 = local_100[0];
      while ((uVar1 != '\0' && (uVar1 != ' '))) {
        puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
        uVar1 = *puVar3;
      }
      if (*puVar3 != '\0') {
        *puVar3 = '\0';
      }
      puVar3 = local_100;
      iVar2 = _ismbcspace((int)(char)local_100[0]);
      while (iVar2 != 0) {
        puVar3 = (uchar *)CharNextA((LPCSTR)puVar3);
        iVar2 = _ismbcspace((int)(char)*puVar3);
      }
      iVar2 = FUN_5f809460((char *)puVar3);
      uVar4 = iVar2 + *param_3;
      *param_4 = uVar4;
      if (param_2 <= uVar4) {
        uVar4 = param_2;
      }
      *param_4 = uVar4;
      return 0;
    }
  }
  return 1;
}


