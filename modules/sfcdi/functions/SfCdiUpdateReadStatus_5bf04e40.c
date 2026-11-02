/* Module: sfcdi.dll
   Function: SfCdiUpdateReadStatus
   Address: 5bf04e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfCdiUpdateReadStatus(struct tCDRDEVPARAMS_DEVINFO *,unsigned int,long) */

int SfCdiUpdateReadStatus(tCDRDEVPARAMS_DEVINFO *param_1,uint param_2,long param_3)

{
  int iVar1;
  
                    /* 0x4e40  71  ?SfCdiUpdateReadStatus@@YGHPAUtCDRDEVPARAMS_DEVINFO@@IJ@Z */
  iVar1 = 0;
  if (*(code **)(param_1 + 0x154) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x154))(*(undefined4 *)(param_1 + 0x158),param_2,param_3);
  }
  return iVar1;
}


