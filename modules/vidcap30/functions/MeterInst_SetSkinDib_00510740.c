/* Module: vidcap30.exe
   Function: MeterInst_SetSkinDib
   Address: 00510740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall MeterInst_SetSkinDib(struct tSFMETER *,struct tagBITMAPINFO *,struct tagPOINT *)
    */

void MeterInst_SetSkinDib(tSFMETER *param_1,tagBITMAPINFO *param_2,tagPOINT *param_3)

{
                    /* 0x110740  60
                       ?MeterInst_SetSkinDib@@YGXPAUtSFMETER@@PAUtagBITMAPINFO@@PAUtagPOINT@@@Z */
  if (param_1 != (tSFMETER *)0x0) {
    if (((param_2 == (tagBITMAPINFO *)0x0) || (param_2 == *(tagBITMAPINFO **)(param_1 + 0x68))) &&
       (param_3 == (tagPOINT *)0x0)) {
      if (param_2 == (tagBITMAPINFO *)0x0) {
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffbf;
      }
    }
    else {
      if ((param_2 != (tagBITMAPINFO *)0x0) && (*(tagBITMAPINFO **)(param_1 + 0x68) != param_2)) {
        DeleteObject(*(HGDIOBJ *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(tagBITMAPINFO **)(param_1 + 0x68) = param_2;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x40;
      }
      if (param_3 != (tagPOINT *)0x0) {
        *(LONG *)(param_1 + 0x6c) = param_3->x;
        *(LONG *)(param_1 + 0x70) = param_3->y;
        return;
      }
    }
  }
  return;
}


