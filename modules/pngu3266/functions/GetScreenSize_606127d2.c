/* Module: pngu3266.dll
   Function: GetScreenSize
   Address: 606127d2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetScreenSize(class CPNxSize &) */

void __cdecl CPNSystemInfo::GetScreenSize(CPNxSize *param_1)

{
  ulong uVar1;
  PNMonitorCharacteristics *pPVar2;
  PNMonitorCharacteristics local_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  
                    /* 0x227d2  1325  ?GetScreenSize@CPNSystemInfo@@SAXAAVCPNxSize@@@Z */
  pPVar2 = local_38;
  uVar1 = GetMainMonitorIndex();
  GetMonitorCharacteristics(uVar1,pPVar2);
  *(undefined4 *)param_1 = local_18;
  *(undefined4 *)(param_1 + 4) = local_14;
  return;
}


