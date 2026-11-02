/* Module: vegas30k.dll
   Function: Transport_StopPreview
   Address: 0117f7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_StopPreview(unsigned long,int) */

long Transport_StopPreview(ulong param_1,int param_2)

{
  int iVar1;
  int unaff_retaddr;
  
                    /* 0x17f7e0  577  ?Transport_StopPreview@@YGJKH@Z */
  iVar1 = (**(code **)(*DAT_012b0b2c + 0x98))(DAT_012b0b2c,param_1);
  if ((iVar1 == 0) && (unaff_retaddr != 0)) {
    Transport_StartRecMonitor();
  }
  return iVar1;
}


