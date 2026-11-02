/* Module: vegas30k.dll
   Function: Mixer_SetBusRoute
   Address: 0117e050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetBusRoute(unsigned long,unsigned long) */

long Mixer_SetBusRoute(ulong param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  uint unaff_EDI;
  undefined4 local_204;
  undefined1 local_200 [504];
  uint uStack_8;
  
                    /* 0x17e050  223  ?Mixer_SetBusRoute@@YGJKK@Z */
  local_204 = 0;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x60))(DAT_012b09c8,local_200,&local_204);
  if (((-1 < lVar1) && (uStack_8 < unaff_EDI)) &&
     ((param_2 | 0x80000000) != *(uint *)(local_200 + uStack_8 * 4 + -0xc))) {
    iVar2 = Transport_IsAnyOpen();
    if (iVar2 != 0) {
      Transport_Suspend();
    }
    *(ulong *)(local_200 + uStack_8 * 4 + -0xc) = param_2 | 0x80000000;
    Mixer_Unprepare();
    lVar1 = (**(code **)(*DAT_012b09c8 + 100))(DAT_012b09c8,&stack0xfffffdf4,unaff_EDI);
    Mixer_Prepare();
    if (iVar2 != 0) {
      Transport_Resume(0);
    }
  }
  return lVar1;
}


