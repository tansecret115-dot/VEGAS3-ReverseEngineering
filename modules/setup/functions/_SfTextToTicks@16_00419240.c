/* Module: Setup.exe
   Function: _SfTextToTicks@16
   Address: 00419240
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong _SfTextToTicks_16(LPCSTR param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  char local_124 [32];
  CHAR local_104 [260];
  
                    /* 0x19240  354  _SfTextToTicks@16 */
  iVar1 = _ismbcspace((int)*param_1);
  while (iVar1 != 0) {
    param_1 = CharNextA(param_1);
    iVar1 = _ismbcspace((int)*param_1);
  }
  bVar5 = *param_1 == '-';
  if (bVar5) {
    param_1 = CharNextA(param_1);
  }
  FUN_00418250(param_1,local_104);
  iVar1 = 0;
  pcVar2 = FUN_004184d0(local_124,local_104,0x20);
  if (local_124[0] == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = _SfTextToLongToken_8(local_124,(undefined4 *)0x0);
  }
  pcVar2 = FUN_004184d0(local_124,pcVar2,0x20);
  if (local_124[0] != '\0') {
    iVar1 = _SfTextToLongToken_8(local_124,(undefined4 *)0x0);
  }
  FUN_004184d0(local_124,pcVar2,0x20);
  if (local_124[0] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = _SfTextToLongToken_8(local_124,(undefined4 *)0x0);
  }
  if (bVar5) {
    iVar3 = -iVar3;
  }
  if (param_3 == 1) {
    if ((0 < iVar3) && (!bVar5)) {
      iVar3 = iVar3 + -1;
    }
    if (0 < iVar1) {
      iVar1 = iVar1 + -1;
    }
  }
  lVar6 = (longlong)(int)(uint)*(ushort *)(param_2 + 0x22) * (longlong)iVar3 + (longlong)iVar1;
  lVar6 = __allmul((uint)lVar6,(int)((ulonglong)lVar6 >> 0x20),*(uint *)(param_2 + 0x24),0);
  lVar7 = __allmul(uVar4,(int)uVar4 >> 0x1f,param_4,0);
  return lVar7 + lVar6;
}


