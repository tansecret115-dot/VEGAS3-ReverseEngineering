/* Module: sfcdi.dll
   Function: prn_DriverConfig
   Address: 5bf0a970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall prn_DriverConfig(struct tPARAMETERS_PRNCFG *,struct HWND__ *) */

int prn_DriverConfig(tPARAMETERS_PRNCFG *param_1,HWND__ *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  tPARAMETERS_PRNCFG *local_15c [84];
  undefined4 local_c;
  HWND__ *local_8;
  
                    /* 0xa970  249  ?prn_DriverConfig@@YGHPAUtPARAMETERS_PRNCFG@@PAUHWND__@@@Z */
  if (param_1 == (tPARAMETERS_PRNCFG *)0x0) {
    return -3;
  }
  iVar2 = FUN_5bf0a950((int *)param_1);
  if (iVar2 < 0) {
    return -7;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x14c);
  local_15c[0] = param_1;
  local_8 = param_2;
  local_c = 0;
  iVar2 = (*(code *)puVar1[0x10])(*puVar1,7,puVar1[1],local_15c,0);
  return iVar2;
}


