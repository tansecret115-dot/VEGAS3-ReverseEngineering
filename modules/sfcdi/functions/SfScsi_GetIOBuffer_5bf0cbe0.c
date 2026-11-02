/* Module: sfcdi.dll
   Function: SfScsi_GetIOBuffer
   Address: 5bf0cbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned char * __stdcall SfScsi_GetIOBuffer(struct HSFSCSIPORT__ *) */

uchar * SfScsi_GetIOBuffer(HSFSCSIPORT__ *param_1)

{
                    /* 0xcbe0  108  ?SfScsi_GetIOBuffer@@YGPAEPAUHSFSCSIPORT__@@@Z */
  return *(uchar **)(param_1 + 0x14);
}


