/* Module: vegas30k.dll
   Function: Transport_IsStopped
   Address: 0117eef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Transport_IsStopped(void) */

int Transport_IsStopped(void)

{
  int iVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
                    /* 0x17eef0  557  ?Transport_IsStopped@@YGHXZ */
  if (DAT_012b0b2c == (int *)0x0) {
    return 1;
  }
  piVar2 = DAT_012b0b2c;
  iVar1 = (**(code **)(*DAT_012b0b2c + 0xac))(DAT_012b0b2c,local_4);
  if (iVar1 != 0) {
    return 0;
  }
  return ~(uint)piVar2 >> 1 & 1;
}


