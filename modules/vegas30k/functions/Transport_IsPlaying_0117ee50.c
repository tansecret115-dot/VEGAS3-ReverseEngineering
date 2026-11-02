/* Module: vegas30k.dll
   Function: Transport_IsPlaying
   Address: 0117ee50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Transport_IsPlaying(void) */

int Transport_IsPlaying(void)

{
  int iVar1;
  DWORD DVar2;
  bool bVar3;
  int *piStack_28;
  tagMSG tStack_24;
  
                    /* 0x17ee50  552  ?Transport_IsPlaying@@YGHXZ */
  tStack_24.hwnd = (HWND)&tStack_24.message;
  if (DAT_012b0b2c == (int *)0x0) {
    return 0;
  }
  piStack_28 = DAT_012b0b2c;
  iVar1 = (**(code **)(*DAT_012b0b2c + 0xac))();
  if (iVar1 == 0) {
    DVar2 = GetCurrentThreadId();
    bVar3 = DVar2 == DAT_012b0b28;
    if (((uint)piStack_28 & 4) != 0) {
      while (iVar1 = (**(code **)(*DAT_012b0b2c + 0xb0))(DAT_012b0b2c,100), iVar1 == 1) {
        if (bVar3) {
          PeekMessageA(&tStack_24,(HWND)0x0,0,0,0);
        }
      }
      if (iVar1 == 0) {
        (**(code **)(*DAT_012b0b2c + 0xac))(DAT_012b0b2c,&piStack_28);
      }
    }
    return (uint)piStack_28 >> 1 & 1;
  }
  return 0;
}


