/* Module: sfcdi.dll
   Function: FUN_5bf0deb0
   Address: 5bf0deb0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_5bf0deb0(HSFCD__ *param_1)

{
  long lVar1;
  int iVar2;
  tPARAMETERS_DEVDES *ptVar3;
  tPARAMETERS_DEVDES local_374 [332];
  _INQUIRYDATA local_228 [96];
  undefined4 local_1c8 [25];
  tTESTRESULTHEADER local_164 [356];
  
  ptVar3 = local_374;
  for (iVar2 = 0x84; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)ptVar3 = 0;
    ptVar3 = ptVar3 + 4;
  }
  cdr_GetDeviceDescription(param_1,local_374,0x14c);
  devdes_GetScsiInfo(local_374,local_228);
  local_1c8[0] = 100;
  lVar1 = cdr_GetDeviceCaps(param_1,(cdrcaps_tag *)local_1c8);
  FUN_5bf0d190((undefined4 *)local_164,(int)param_1,0);
  TestDrive_AddResultEx(param_1,local_164,local_374,0x210);
  return lVar1;
}


