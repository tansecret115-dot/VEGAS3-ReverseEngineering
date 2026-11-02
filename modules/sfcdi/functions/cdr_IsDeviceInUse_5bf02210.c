/* Module: sfcdi.dll
   Function: cdr_IsDeviceInUse
   Address: 5bf02210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_IsDeviceInUse(struct tPARAMETERS_DEVDES *) */

int cdr_IsDeviceInUse(tPARAMETERS_DEVDES *param_1)

{
  uint uVar1;
  
                    /* 0x2210  188  ?cdr_IsDeviceInUse@@YGHPAUtPARAMETERS_DEVDES@@@Z */
  uVar1 = FUN_5bf01000((uint)param_1);
  return (uint)(uVar1 < 0x80000000);
}


