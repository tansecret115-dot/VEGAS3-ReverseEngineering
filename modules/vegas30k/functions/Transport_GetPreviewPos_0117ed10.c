/* Module: vegas30k.dll
   Function: Transport_GetPreviewPos
   Address: 0117ed10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __int64 __stdcall Transport_GetPreviewPos(void) */

__int64 Transport_GetPreviewPos(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x17ed10  544  ?Transport_GetPreviewPos@@YG_JXZ */
  puVar2 = &local_8;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  piVar1 = DAT_012b0b2c;
  (**(code **)(*DAT_012b0b2c + 0xa8))(DAT_012b0b2c,&local_8,0x10);
  return CONCAT44(puVar2,piVar1);
}


