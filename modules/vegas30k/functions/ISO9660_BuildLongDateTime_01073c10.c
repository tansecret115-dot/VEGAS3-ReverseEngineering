/* Module: vegas30k.dll
   Function: ISO9660_BuildLongDateTime
   Address: 01073c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall ISO9660_BuildLongDateTime(struct _SYSTEMTIME *,char *) */

void ISO9660_BuildLongDateTime(_SYSTEMTIME *param_1,char *param_2)

{
  _TIME_ZONE_INFORMATION local_ac;
  
                    /* 0x73c10  108  ?ISO9660_BuildLongDateTime@@YGXPAU_SYSTEMTIME@@PAD@Z */
  wsprintfA(param_2,"%04u%02u%02u%02u%02u%02u00",(uint)param_1->wYear,(uint)param_1->wMonth,
            (uint)param_1->wDay,(uint)param_1->wHour,(uint)param_1->wMinute,(uint)param_1->wSecond);
  GetTimeZoneInformation(&local_ac);
  param_2[0x10] =
       ((char)(local_ac.Bias / 0xf) + (char)(local_ac.Bias >> 0x1f)) -
       (char)((longlong)local_ac.Bias * 0x88888889 >> 0x3f);
  return;
}


