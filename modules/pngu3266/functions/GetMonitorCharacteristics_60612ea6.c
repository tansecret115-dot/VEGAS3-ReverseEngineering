/* Module: pngu3266.dll
   Function: GetMonitorCharacteristics
   Address: 60612ea6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static long __cdecl CPNSystemInfo::GetMonitorCharacteristics(unsigned long,struct
   PNMonitorCharacteristics &) */

long __cdecl
CPNSystemInfo::GetMonitorCharacteristics(ulong param_1,PNMonitorCharacteristics *param_2)

{
  HDC pHVar1;
  int iVar2;
  undefined4 *puVar3;
  RECT *pRVar4;
  code *pcVar5;
  undefined4 local_44;
  ulong local_40;
  undefined4 local_3c [13];
  int local_8;
  
                    /* 0x22ea6  1272
                       ?GetMonitorCharacteristics@CPNSystemInfo@@SAJKAAUPNMonitorCharacteristics@@@Z
                        */
  if (param_1 != 0) {
    local_40 = param_1;
    puVar3 = &local_44;
    pcVar5 = FUN_60612ef4;
    pRVar4 = (RECT *)0x0;
    local_44 = 0;
    local_8 = 0;
    pHVar1 = GetDC((HWND)0x0);
    FUN_606126e1(pHVar1,pRVar4,pcVar5,puVar3);
    if (local_8 != 0) {
      puVar3 = local_3c;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 4;
      }
      return 0;
    }
  }
  return -0x7fffbffb;
}


