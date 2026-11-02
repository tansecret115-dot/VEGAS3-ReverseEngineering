/* Module: vegas30k.dll
   Function: ISO9660_GetNameParts
   Address: 01073ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall ISO9660_GetNameParts(char *,unsigned char,unsigned char *,unsigned char *,unsigned
   char *) */

long ISO9660_GetNameParts(char *param_1,uchar param_2,uchar *param_3,uchar *param_4,uchar *param_5)

{
  uchar *puVar1;
  byte bVar2;
  
                    /* 0x73ab0  113  ?ISO9660_GetNameParts@@YGJPADEPAE11@Z */
  puVar1 = param_3;
  bVar2 = 0;
  *param_3 = '\0';
  *param_4 = '\0';
  *param_5 = '\0';
  param_3 = (uchar *)0x0;
  if (param_2 != '\0') {
    do {
      if ((param_3[(int)param_1] == '.') || (param_3[(int)param_1] == ';')) break;
      bVar2 = bVar2 + 1;
      param_3 = (uchar *)(uint)bVar2;
    } while (bVar2 < param_2);
  }
  *puVar1 = bVar2;
  if (bVar2 < param_2) {
    if (param_3[(int)param_1] == '.') {
      do {
        if (param_3[(int)param_1] == ';') break;
        bVar2 = bVar2 + 1;
        param_3 = (uchar *)(uint)bVar2;
      } while (bVar2 < param_2);
      *param_4 = bVar2 - *puVar1;
    }
    if ((bVar2 < param_2) && (param_3[(int)param_1] == ';')) {
      *param_5 = param_2 - *param_4;
    }
  }
  return 0;
}


