/* Module: vegas30k.dll
   Function: Transport_IsRecording
   Address: 0117ef30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Transport_IsRecording(void) */

int Transport_IsRecording(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
                    /* 0x17ef30  556  ?Transport_IsRecording@@YGHXZ */
  if (DAT_012b0b2c == (int *)0x0) {
    return 0;
  }
  piVar2 = DAT_012b0b2c;
  iVar1 = (**(code **)(*DAT_012b0b2c + 0xac))(DAT_012b0b2c,local_4);
  if (iVar1 != 0) {
    return 0;
  }
  return (uint)piVar2 >> 5 & 1;
}


