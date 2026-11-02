/* Module: pngu3266.dll
   Function: GetWorkArea
   Address: 60612894
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetWorkArea(class CPNxRect &) */

void __cdecl CPNSystemInfo::GetWorkArea(CPNxRect *param_1)

{
  ulong uVar1;
  PNMonitorCharacteristics *pPVar2;
  PNMonitorCharacteristics local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* 0x22894  1428  ?GetWorkArea@CPNSystemInfo@@SAXAAVCPNxRect@@@Z */
  pPVar2 = local_48;
  uVar1 = GetMainMonitorIndex();
  GetMonitorCharacteristics(uVar1,pPVar2);
  *(undefined4 *)param_1 = local_38;
  *(undefined4 *)(param_1 + 4) = local_34;
  *(undefined4 *)(param_1 + 8) = local_30;
  *(undefined4 *)(param_1 + 0xc) = local_2c;
  return;
}


