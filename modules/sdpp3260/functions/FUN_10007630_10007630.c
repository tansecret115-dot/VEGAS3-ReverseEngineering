/* Module: sdpp3260.dll
   Function: FUN_10007630
   Address: 10007630
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10007630(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = 0;
  iVar9 = 0;
  if (param_2 < 1) {
    return 0;
  }
  do {
    iVar8 = iVar7 + 1;
    bVar1 = *(byte *)(iVar7 + param_1);
    iVar10 = iVar9;
    if ((bVar1 == 0x3d) || ((&DAT_10009630)[bVar1] != '\x7f')) {
      if (iVar8 == param_2) {
        return -1;
      }
      do {
        bVar2 = *(byte *)(iVar8 + param_1);
        iVar8 = iVar8 + 1;
        if ((param_2 <= iVar8) || (bVar2 == 0x3d)) break;
      } while ((&DAT_10009630)[bVar2] == '\x7f');
      if (iVar8 == param_2) {
        return -1;
      }
      do {
        bVar3 = *(byte *)(iVar8 + param_1);
        iVar8 = iVar8 + 1;
        if ((param_2 <= iVar8) || (bVar3 == 0x3d)) break;
      } while ((&DAT_10009630)[bVar3] == '\x7f');
      if (iVar8 == param_2) {
        return -1;
      }
      do {
        bVar4 = *(byte *)(iVar8 + param_1);
        iVar8 = iVar8 + 1;
        if ((param_2 <= iVar8) || (bVar4 == 0x3d)) break;
      } while ((&DAT_10009630)[bVar4] == '\x7f');
      if (((iVar8 == param_2) && (bVar4 != 0x3d)) && ((&DAT_10009630)[bVar4] == '\x7f')) {
        return -1;
      }
      if ((bVar1 != 0x3d) && (bVar2 != 0x3d)) {
        cVar5 = (&DAT_10009630)[bVar2];
        *(byte *)(iVar9 + param_3) = cVar5 >> 4 & 3U | (&DAT_10009630)[bVar1] << 2;
        iVar10 = iVar9 + 1;
        if (bVar3 != 0x3d) {
          cVar6 = (&DAT_10009630)[bVar3];
          *(byte *)(iVar10 + param_3) = cVar6 >> 2 & 0xfU | cVar5 << 4;
          iVar10 = iVar9 + 2;
          if (bVar4 != 0x3d) {
            *(char *)(iVar10 + param_3) = cVar6 << 6 | (&DAT_10009630)[bVar4];
            iVar10 = iVar9 + 3;
          }
        }
      }
    }
    iVar7 = iVar8;
    iVar9 = iVar10;
    if (param_2 <= iVar8) {
      return iVar10;
    }
  } while( true );
}


