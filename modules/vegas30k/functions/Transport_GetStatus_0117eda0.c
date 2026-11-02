/* Module: vegas30k.dll
   Function: Transport_GetStatus
   Address: 0117eda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall Transport_GetStatus(void) */

ulong Transport_GetStatus(void)

{
  int *piVar1;
  undefined4 local_4;
  
                    /* 0x17eda0  548  ?Transport_GetStatus@@YGKXZ */
  local_4 = 0;
  piVar1 = DAT_012b0b2c;
  (**(code **)(*DAT_012b0b2c + 0xac))(DAT_012b0b2c,&local_4);
  return (ulong)piVar1;
}


