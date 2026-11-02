/* Module: vegas30k.dll
   Function: ISO9660_BuildShortDateTime
   Address: 01073b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall ISO9660_BuildShortDateTime(struct _SYSTEMTIME *,struct tagISO9660_DATE_TIME *) */

void ISO9660_BuildShortDateTime(_SYSTEMTIME *param_1,tagISO9660_DATE_TIME *param_2)

{
  _TIME_ZONE_INFORMATION local_ac;
  
                    /* 0x73b60  109
                       ?ISO9660_BuildShortDateTime@@YGXPAU_SYSTEMTIME@@PAUtagISO9660_DATE_TIME@@@Z
                        */
  *param_2 = (tagISO9660_DATE_TIME)((char)param_1->wYear + -0x6c);
  param_2[1] = *(tagISO9660_DATE_TIME *)&param_1->wMonth;
  param_2[2] = *(tagISO9660_DATE_TIME *)&param_1->wDay;
  param_2[3] = *(tagISO9660_DATE_TIME *)&param_1->wHour;
  param_2[4] = *(tagISO9660_DATE_TIME *)&param_1->wMinute;
  param_2[5] = *(tagISO9660_DATE_TIME *)&param_1->wSecond;
  GetTimeZoneInformation(&local_ac);
  param_2[6] = (tagISO9660_DATE_TIME)
               (((char)(local_ac.Bias / 0xf) + (char)(local_ac.Bias >> 0x1f)) -
               (char)((longlong)local_ac.Bias * 0x88888889 >> 0x3f));
  return;
}


