/* Module: encn3260.dll
   Function: FUN_664b6420
   Address: 664b6420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b6420(uint *param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_1[1] != 0)) &&
     (((*param_1 & 0x100) != 0 && ((*param_2 & 0x100) != 0)))) {
    if ((*param_2 & 1) != 0) {
      uVar1 = (**(code **)(*(int *)param_2[0x10e] + 0x68))((int *)param_2[0x10e],param_3);
      return uVar1;
    }
    if (param_1[0x219] != param_3) {
      assert(s_lpwd_>gdi_hMemoryDC____hDC_664e3a50,s_win_windraw2_cpp_664e3a6c,0x92e);
    }
    SelectObject((HDC)param_1[0x219],(HGDIOBJ)param_1[0x21b]);
    return 0;
  }
  return 0x80070057;
}


