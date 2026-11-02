/* Module: vidcap30.exe
   Function: _SfTextToTicks@16
   Address: 004865a0
   Source: Ghidra pseudocode (Stage 10 batch) */


longlong _SfTextToTicks_16(LPCSTR param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  char local_124 [32];
  undefined1 local_104 [260];
  
                    /* 0x865a0  649  _SfTextToTicks@16 */
  iVar1 = _ismbcspace((int)*param_1);
  while (iVar1 != 0) {
    param_1 = CharNextA(param_1);
    iVar1 = _ismbcspace((int)*param_1);
  }
  bVar4 = *param_1 == '-';
  if (bVar4) {
    param_1 = CharNextA(param_1);
  }
  FUN_004855b0(param_1,local_104);
  iVar1 = 0;
  FUN_00485830();
  if (local_124[0] == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = _SfTextToLongToken_8(local_124,0);
  }
  FUN_00485830();
  if (local_124[0] != '\0') {
    iVar1 = _SfTextToLongToken_8(local_124,0);
  }
  FUN_00485830();
  if (local_124[0] == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = _SfTextToLongToken_8(local_124,0);
  }
  if (bVar4) {
    iVar2 = -iVar2;
  }
  if (param_3 == 1) {
    if ((0 < iVar2) && (!bVar4)) {
      iVar2 = iVar2 + -1;
    }
    if (0 < iVar1) {
      iVar1 = iVar1 + -1;
    }
  }
  lVar5 = __allmul((longlong)(int)(uint)*(ushort *)(param_2 + 0x22) * (longlong)iVar2 +
                   (longlong)iVar1,*(undefined4 *)(param_2 + 0x24),0);
  lVar6 = __allmul(iVar3,iVar3 >> 0x1f,param_4,0);
  return lVar5 + lVar6;
}


