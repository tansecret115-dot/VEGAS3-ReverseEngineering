/* Module: vegas30k.dll
   Function: FUN_01001980
   Address: 01001980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01001980(undefined4 param_1)

{
  int iVar1;
  LPCSTR lpString1;
  CHAR local_104 [260];
  
  FUN_01001970();
  iVar1 = FUN_01056320(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
  lpString1 = (LPCSTR)_SfGetFileNamePtrA_4(local_104);
  iVar1 = lstrcmpiA(lpString1,"RunDLL32.exe");
  if (iVar1 == 0) {
    DAT_0120e5a4 = 1;
    return 1;
  }
  _SfMetric_Open_16(&DAT_0120e5c4,"Vegas",0x300004c,"Kernel");
  SfControls_Initialize(DAT_0120e5c0);
  FUN_010548c0(DAT_0120e5c0,"SfKrn_ExplorerEx_Class");
  FUN_010526f0();
  FUN_0117fd10(param_1,1);
  _SfVideoDSPFull_ForceExternRef_0();
  return 1;
}


