/* Module: vegas30k.dll
   Function: ISO9660_GetDateTimeFromString
   Address: 01073bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall ISO9660_GetDateTimeFromString(char * const,struct _SYSTEMTIME *) */

long ISO9660_GetDateTimeFromString(char *param_1,_SYSTEMTIME *param_2)

{
                    /* 0x73bd0  111  ?ISO9660_GetDateTimeFromString@@YGJQADPAU_SYSTEMTIME@@@Z */
  sscanf(param_1,"%02u/%02u/%u %02u:%02u:%02u",&param_2->wDay,&param_2->wMonth,param_2,
         &param_2->wHour,&param_2->wMinute,&param_2->wSecond);
  return 0;
}


