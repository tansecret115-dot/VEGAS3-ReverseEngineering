/* Module: sfcdi.dll
   Function: ldr_DriverConfig
   Address: 5bf0a6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall ldr_DriverConfig(struct tPARAMETERS_LDRCFG *,struct HWND__ *) */

int ldr_DriverConfig(tPARAMETERS_LDRCFG *param_1,HWND__ *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  tPARAMETERS_LDRCFG *local_158 [84];
  undefined4 local_8;
  HWND__ *local_4;
  
                    /* 0xa6d0  236  ?ldr_DriverConfig@@YGHPAUtPARAMETERS_LDRCFG@@PAUHWND__@@@Z */
  if (param_1 == (tPARAMETERS_LDRCFG *)0x0) {
    return -3;
  }
  iVar2 = FUN_5bf0a6b0((int *)param_1);
  if (iVar2 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x14c);
    local_158[0] = param_1;
    local_8 = 0;
    local_4 = param_2;
    iVar2 = (*(code *)puVar1[0x12])(*puVar1,5,puVar1[1],local_158,0);
  }
  return iVar2;
}


