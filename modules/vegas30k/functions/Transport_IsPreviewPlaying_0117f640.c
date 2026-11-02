/* Module: vegas30k.dll
   Function: Transport_IsPreviewPlaying
   Address: 0117f640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Transport_IsPreviewPlaying(void) */

int Transport_IsPreviewPlaying(void)

{
  int iVar1;
  int *piStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  undefined1 *puStack_8;
  undefined1 local_4 [4];
  
                    /* 0x17f640  553  ?Transport_IsPreviewPlaying@@YGHXZ */
  puStack_8 = local_4;
  if (DAT_012b0b2c == (int *)0x0) {
    return 0;
  }
  piStack_c = DAT_012b0b2c;
  uStack_10 = 0x117f65a;
  iVar1 = (**(code **)(*DAT_012b0b2c + 0xac))();
  if (iVar1 != 0) {
    return 0;
  }
  if (((uint)piStack_c & 0x800) != 0) {
    uStack_10 = 0;
    piStack_14 = DAT_012b0b2c;
    (**(code **)(*DAT_012b0b2c + 0xb0))();
    (**(code **)(*DAT_012b0b2c + 0xac))(DAT_012b0b2c,&piStack_14);
  }
  return (uint)piStack_c >> 10 & 1;
}


