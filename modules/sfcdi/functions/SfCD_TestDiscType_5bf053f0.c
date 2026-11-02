/* Module: sfcdi.dll
   Function: SfCD_TestDiscType
   Address: 5bf053f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCD_TestDiscType(struct _mediainfo *,unsigned int) */

int SfCD_TestDiscType(_mediainfo *param_1,uint param_2)

{
  uint uVar1;
  
                    /* 0x53f0  60  ?SfCD_TestDiscType@@YGHPAU_mediainfo@@I@Z */
  uVar1 = *(uint *)param_1;
  if ((uVar1 & 1) != 0) {
    switch(param_2) {
    case 1:
      return 1;
    case 2:
      if ((uVar1 & 4) == 0) {
        return 1;
      }
      break;
    case 3:
      if ((uVar1 & 2) == 0) {
        return 1;
      }
      break;
    case 4:
      if (((uVar1 & 0x10) == 0) && ((uVar1 & 4) != 0)) {
        return 1;
      }
      break;
    case 5:
      if ((uVar1 & 8) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


