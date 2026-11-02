/* Module: vegas30k.dll
   Function: Transport_Seek
   Address: 0117f2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_Seek(unsigned long,__int64,__int64,struct _tag_looppoint *) */

long Transport_Seek(ulong param_1,__int64 param_2,__int64 param_3,_tag_looppoint *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 in_stack_00000008;
  
                    /* 0x17f2d0  561  ?Transport_Seek@@YGJK_J0PAU_tag_looppoint@@@Z */
  iVar1 = Transport_IsRecording();
  if (iVar1 != 0) {
    return 1;
  }
  lVar2 = (**(code **)(*DAT_012b0b2c + 0x7c))
                    (DAT_012b0b2c,param_1,in_stack_00000008,param_2,param_3);
  return lVar2;
}


