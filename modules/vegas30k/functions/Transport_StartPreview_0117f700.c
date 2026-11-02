/* Module: vegas30k.dll
   Function: Transport_StartPreview
   Address: 0117f700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_StartPreview(__int64,__int64,struct _tag_looppoint *,double) */

long Transport_StartPreview(__int64 param_1,__int64 param_2,_tag_looppoint *param_3,double param_4)

{
  int iVar1;
  int unaff_EBP;
  uint unaff_ESI;
  uint uVar2;
  int unaff_EDI;
  _tag_looppoint *p_Var3;
  
                    /* 0x17f700  573  ?Transport_StartPreview@@YGJ_J0PAU_tag_looppoint@@N@Z */
  if (DAT_012b0b2c == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = Transport_IsPreviewStopped();
  if (iVar1 == 0) {
    return 1;
  }
  p_Var3 = param_3;
  (**(code **)(*DAT_012b0b2c + 0xec))(DAT_012b0b2c,param_3);
  (**(code **)(*DAT_012b0b2c + 0x88))(DAT_012b0b2c,param_2._4_4_,param_3,0);
  (**(code **)(*DAT_012b0b2c + 0xe4))
            (DAT_012b0b2c,p_Var3 + unaff_ESI,
             unaff_EDI + unaff_EBP + (uint)CARRY4((uint)p_Var3,unaff_ESI));
  uVar2 = 0xa0000000;
  iVar1 = Transport_IsRecMonitoring();
  if (iVar1 != 0) {
    iVar1 = Transport_IsPlaying();
    if (iVar1 == 0) {
      Transport_StopRecMonitor();
      uVar2 = 0xb0800000;
      FUN_01183340(1);
    }
  }
  iVar1 = (**(code **)(*DAT_012b0b2c + 0x90))(DAT_012b0b2c,uVar2,p_Var3,unaff_EDI);
  if (iVar1 < 0) {
    FUN_011833c0();
    FUN_01183390();
    if ((uVar2 & 0x800000) != 0) {
      FUN_01183360();
      Transport_StartRecMonitor();
    }
  }
  return iVar1;
}


