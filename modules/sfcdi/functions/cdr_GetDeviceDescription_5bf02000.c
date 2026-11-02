/* Module: sfcdi.dll
   Function: cdr_GetDeviceDescription
   Address: 5bf02000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_GetDeviceDescription(struct HSFCD__ *,struct tPARAMETERS_DEVDES *,unsigned
   int) */

long cdr_GetDeviceDescription(HSFCD__ *param_1,tPARAMETERS_DEVDES *param_2,uint param_3)

{
  uint uVar1;
  
                    /* 0x2000  174
                       ?cdr_GetDeviceDescription@@YGJPAUHSFCD__@@PAUtPARAMETERS_DEVDES@@I@Z */
  if (param_1 == (HSFCD__ *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_2 == (tPARAMETERS_DEVDES *)0x0) {
    return -0x7ff8ffa9;
  }
  if (0x14c < param_3) {
    param_3 = 0x14c;
  }
  for (uVar1 = param_3 >> 2; param_1 = param_1 + 4, uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    param_2 = (tPARAMETERS_DEVDES *)(param_2 + 4);
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = (tPARAMETERS_DEVDES)*param_1;
    param_1 = param_1 + 1;
    param_2 = (tPARAMETERS_DEVDES *)(param_2 + 1);
  }
  return 0;
}


