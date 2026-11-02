/* Module: vegas30k.dll
   Function: SfMpegUpdateErrorCounts
   Address: 010965d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMpegUpdateErrorCounts(enum tagMULTIPLEX_ERROR_TYPE,struct
   tagMULTIPLEX_ERROR_COUNTS *) */

void SfMpegUpdateErrorCounts(tagMULTIPLEX_ERROR_TYPE param_1,tagMULTIPLEX_ERROR_COUNTS *param_2)

{
  undefined4 uVar1;
  
                    /* 0x965d0  440
                       ?SfMpegUpdateErrorCounts@@YGXW4tagMULTIPLEX_ERROR_TYPE@@PAUtagMULTIPLEX_ERROR_COUNTS@@@Z
                        */
  switch(param_1) {
  case 0:
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    return;
  case 1:
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    return;
  case 2:
    *(int *)param_2 = *(int *)param_2 + 1;
    return;
  case 3:
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    return;
  default:
    uVar1 = _SfGetString2_8(DAT_0120e5c8,0x1076);
    SfMsgBox(0,0,uVar1);
    return;
  }
}


