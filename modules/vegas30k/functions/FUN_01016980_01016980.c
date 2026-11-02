/* Module: vegas30k.dll
   Function: FUN_01016980
   Address: 01016980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01016980(int param_1,int param_2)

{
  uchar uVar1;
  uchar *lpsz;
  int iVar2;
  uchar *_Source;
  int *piVar3;
  int *piVar4;
  int local_110;
  int local_10c;
  int local_108;
  uchar local_104 [260];
  
  piVar3 = *(int **)(param_1 + 4);
  piVar4 = (int *)0x0;
  local_10c = 0;
  local_108 = 0;
  _mbscpy(local_104,(uchar *)(param_2 + 0x224));
  _Source = local_104;
  if (local_104[0] != '\0') {
    do {
      uVar1 = *_Source;
      lpsz = _Source;
      while ((uVar1 != '\0' && (uVar1 != '\\'))) {
        lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
        uVar1 = *lpsz;
      }
      uVar1 = *lpsz;
      *lpsz = '\0';
      local_110 = 0;
      while( true ) {
        if (piVar3 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *piVar3;
        }
        if (iVar2 <= local_110) break;
        if (piVar3 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *piVar3;
        }
        if ((local_110 < 0) || (iVar2 + -1 < local_110)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(piVar3[2] + local_110 * 4);
        }
        iVar2 = lstrcmpA((LPCSTR)(piVar4 + 1),(LPCSTR)_Source);
        if (iVar2 == 0) break;
        local_110 = local_110 + 1;
      }
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
      if (local_110 == iVar2) {
        iVar2 = _SfList_AllocAndInsertItem_20(piVar3,0,0x114,0xffffffff,&local_110);
        if (iVar2 < 0) {
          return iVar2;
        }
        if (piVar3 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *piVar3;
        }
        if ((local_110 < 0) || (iVar2 + -1 < local_110)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(piVar3[2] + local_110 * 4);
        }
        local_10c = _SfList_CreateExZ_32(piVar4 + 0x42,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
        if (local_10c < 0) {
          return local_10c;
        }
        _mbscpy((uchar *)(piVar4 + 1),_Source);
        *piVar4 = local_108;
        piVar4[0x44] = 1;
      }
      else {
        piVar4[0x44] = piVar4[0x44] + 1;
      }
      *lpsz = uVar1;
      _Source = (uchar *)CharNextA((LPCSTR)lpsz);
      piVar3 = (int *)piVar4[0x42];
      local_108 = (int)piVar4;
    } while (*_Source != '\0');
    if (local_10c < 0) {
      return local_10c;
    }
  }
  *(int **)(param_2 + 0x348) = piVar4;
  return local_10c;
}


