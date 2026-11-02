/* Module: encn3260.dll
   Function: FUN_664b4b10
   Address: 664b4b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __fastcall FUN_664b4b10(void *param_1)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD iModeNum;
  DEVMODEA local_b8;
  byte local_1c [20];
  int local_8;
  
  FUN_664bdbb0(param_1,10);
  iModeNum = 0;
  iVar1 = EnumDisplaySettingsA((LPCSTR)0x0,0,&local_b8);
  while (iVar1 != 0) {
    sprintf((char *)local_1c,s__dx_dx_d_664e39d0,local_b8.dmPelsWidth,local_b8.dmPelsHeight,
            local_b8.dmBitsPerPel);
    iVar1 = FUN_664bde30(param_1,local_1c,&local_8);
    if (iVar1 == 0) {
      pDVar2 = operator_new(0x10);
      *pDVar2 = local_b8.dmPelsWidth;
      pDVar2[1] = local_b8.dmPelsHeight;
      pDVar2[2] = local_b8.dmBitsPerPel;
      FUN_664bdd00(param_1,local_1c,(int)pDVar2);
    }
    iModeNum = iModeNum + 1;
    iVar1 = EnumDisplaySettingsA((LPCSTR)0x0,iModeNum,&local_b8);
  }
  return param_1;
}


