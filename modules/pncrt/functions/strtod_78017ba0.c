/* Module: pncrt.dll
   Function: strtod
   Address: 78017ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl strtod(char *_Str,char **_EndPtr)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 local_20;
  uint local_18 [6];
  
                    /* 0x17ba0  720  strtod */
  pbVar7 = (byte *)_Str;
  while( true ) {
    if (__mb_cur_max < 2) {
      uVar3 = (byte)_pctype[(uint)*pbVar7 * 2] & 8;
    }
    else {
      uVar3 = _isctype((uint)*pbVar7,8);
    }
    if (uVar3 == 0) break;
    pbVar7 = pbVar7 + 1;
  }
  iVar6 = -1;
  pbVar8 = pbVar7;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 != 0);
  puVar4 = (uint *)FUN_780300d0(local_18,pbVar7);
  if (_EndPtr != (char **)0x0) {
    *_EndPtr = (char *)(pbVar7 + puVar4[1]);
  }
  dVar1 = _DAT_78037860;
  uVar3 = *puVar4;
  if ((uVar3 & 0x240) == 0) {
    if ((uVar3 & 0x81) != 0) {
      if (*pbVar7 == 0x2d) {
        dVar1 = (double)CONCAT44(DAT_780410f8,_HUGE);
        piVar5 = _errno();
        *piVar5 = 0x22;
        return -dVar1;
      }
      local_20 = (double)CONCAT44(DAT_780410f8,_HUGE);
      piVar5 = _errno();
      *piVar5 = 0x22;
      return local_20;
    }
    if ((uVar3 & 0x100) != 0) {
      piVar5 = _errno();
      *piVar5 = 0x22;
      return 0.0;
    }
    dVar1 = *(double *)(puVar4 + 4);
  }
  else if (_EndPtr != (char **)0x0) {
    *_EndPtr = _Str;
    return dVar1;
  }
  return dVar1;
}


