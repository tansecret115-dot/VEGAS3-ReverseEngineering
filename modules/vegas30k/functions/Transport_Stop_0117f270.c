/* Module: vegas30k.dll
   Function: Transport_Stop
   Address: 0117f270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Transport_Stop(unsigned long,__int64) */

long Transport_Stop(ulong param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
                    /* 0x17f270  576  ?Transport_Stop@@YGJK_J@Z */
  iVar1 = Transport_IsRecMonitoring();
  if (iVar1 != 0) {
    param_1 = param_1 | 0x10800000;
  }
  iVar2 = (**(code **)(*DAT_012b0b2c + 0x78))(DAT_012b0b2c,param_1);
  if ((iVar2 == 0) && (iVar1 != 0)) {
    Transport_StartRecMonitor();
  }
  if (-1 < (int)param_1) {
    Transport_SetCurrentPos(CONCAT44(param_1,unaff_retaddr));
  }
  return iVar2;
}


